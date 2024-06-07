//
// Created by vivekdagar on 6/7/24.
//

#ifndef CPP_CDOUBLYLL_H
#define CPP_CDOUBLYLL_H

#include <vector>
#include <ostream>

struct Node {
    Node *prev;
    int data;
    Node *next;

    Node(Node *prev, int data, Node *next) : prev(prev), data(data), next(next) {}

    explicit Node(int data) : Node(nullptr, data, nullptr) {}
};

class CDoublyLL {
    Node *first;
public:
    explicit CDoublyLL(const std::vector<int> &arr);

    friend std::ostream &operator<<(std::ostream &os, const CDoublyLL &ll);

    void insert(unsigned index, int value);

    void append(int val);

    void SortedInsert(int x);

    unsigned length();

    void remove(unsigned index);

    virtual ~CDoublyLL();
};


#endif //CPP_CDOUBLYLL_H
