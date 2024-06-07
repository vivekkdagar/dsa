//
// Created by vivekdagar on 6/7/24.
//

#include <iostream>
#include "DoublyLL.h"

// Constructor is buggy
DoublyLL::DoublyLL(const std::vector<int> &n) {
    first = nullptr; // Initialize first to nullptr
    Node *last = nullptr;

    for (const auto &val : n) {
        Node *newNode = new Node(val);
        if (!first) {
            first = newNode;
        } else {
            last->next = newNode;
            newNode->prev = last;
        }
        last = newNode;
    }
}


std::ostream &operator<<(std::ostream &os, const DoublyLL &list) {
    Node *current = list.first;
    while (current != nullptr) {
        os << current->data << " ";
        current = current->next;
    }
    os << std::endl;
    return os;
}

unsigned DoublyLL::length() {
    int len = 0;
    for (Node *t = this->first; t != nullptr; t = t->next)
        len++;
    return len;
}

void DoublyLL::insert(unsigned int index, int value) {
    Node *t;
    if (index == 0) {
        t = new Node(nullptr, value, first);
        first->prev = t;
        first = t;
    } else if (index <= this->length()) {
        Node *p = this->first;
        for (int i{0}; i < index - 1; i++)
            p = p->next;
        t = new Node(p, value, p->next);
        if (p->next)
            p->next->prev = t;
        p->next = t;
    }
}

void DoublyLL::remove(unsigned short index) {
    if (index <= this->length() and first) {
        Node *p = first;
        if (index == 1) {
            first = first->next;
            if (first)
                first->prev = nullptr;
        } else {
            for (int i{0}; i < index - 1; i++)
                p = p->next;
            p->prev->next = p->next;
            if (p->next)
                p->next->prev = p->prev;
        }
        delete p;
    } else {
        std::cerr << "Error\n";
    }
}

void DoublyLL::reverse() {
    Node *p = first, *temp;
    while (p->next) {
        temp = p->next;         // store p's next
        p->next = p->prev;          // make p next point to p prev, this means make the node point backwards
        p->prev = temp;         // make backwards point to next
        p = p->prev;            // move using prev
        if (!p->next and p) {
            p->next = p->prev;
            p->prev = nullptr;
            first = p;
            break;
        }
    }
}

DoublyLL::~DoublyLL() {
    Node *p = first;
    while (first) {
        first = first->next;
        delete p;
        p = first;
    }
}