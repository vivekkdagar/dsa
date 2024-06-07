//
// Created by vivekdagar on 6/7/24.
//

#ifndef CPP_CIRCULARLL_H
#define CPP_CIRCULARLL_H
#include "../singly/SinglyLL.h"

class CircularLL {
    Node *first;
public:
    explicit CircularLL(const std::vector<int>& arr);

    friend std::ostream &operator<<(std::ostream &os, const CircularLL &circular);

    void print(Node *p);

    Node *getFirst() const;

    void insert(unsigned short pos, int val);

    void remove(unsigned short pos);

    virtual ~CircularLL();
};


#endif //CPP_CIRCULARLL_H
