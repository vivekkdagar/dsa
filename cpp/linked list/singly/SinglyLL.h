//
// Created by vivekdagar on 6/7/24.
//

#ifndef CPP_SINGLYLL_H
#define CPP_SINGLYLL_H

#include <climits>
#include <vector>
#include <ostream>

struct Node {
    int data;
    Node *next;

    Node(int data, Node *next) : data(data), next(next) {}

    explicit Node(int data) : Node(data, nullptr) {}

    Node() : Node(0, nullptr) {}
};

class SinglyLL {
    Node *head;
public:
    explicit SinglyLL(int x);

    explicit SinglyLL(Node *head);

    explicit SinglyLL(const std::vector<int> &array);

    friend std::ostream &operator<<(std::ostream &os, const SinglyLL &ll);

    int count();

    void insert(unsigned index, int val);

    void append(int val);

    void remove(unsigned index);

    Node *getHead() const;

    void setHead(Node *h1);

    bool sorted();

    std::vector<int> list();

    void reverse();     // Using sliding pointers

    void concat(Node *h1, Node *h2);

    bool hasLoop();

    // Recursive functions
    int count(Node *p);

    int search(Node *p, int key);

    int max(Node *p);

    void display_R(Node *p);

    virtual ~SinglyLL();
};


#endif //CPP_SINGLYLL_H
