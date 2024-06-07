//
// Created by vivekdagar on 6/7/24.
//

#ifndef CPP_DOUBLYLL_H
#define CPP_DOUBLYLL_H

#include <vector>
#include <iostream>

struct Node {
    Node *prev;
    int data;
    Node *next;

    Node(Node *prev, int data, Node *next) : prev(prev), data(data), next(next) {}

    explicit Node(int s) : data(s), prev(nullptr), next(nullptr) {}
};

class DoublyLL {
    Node *first;
public:
    explicit DoublyLL(const std::vector<int> &n);

    friend std::ostream &operator<<(std::ostream &os, const DoublyLL &list);

    unsigned length();

    void insert(unsigned index, int value);

    void remove(unsigned short index);

    void reverse();

    virtual ~DoublyLL();
};


#endif //CPP_DOUBLYLL_H
