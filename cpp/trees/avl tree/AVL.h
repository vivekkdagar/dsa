//
// Created by vivekdagar on 6/7/24.
//

#ifndef CPP_AVL_H
#define CPP_AVL_H

struct Node {
    Node *left;
    int data;
    int height;
    Node *right;

    Node(Node *left, int data, int height, Node *right) : left(left), data(data), height(height), right(right) {}
};

class AVL {
    Node *root;
public:
    explicit AVL();

    Node *insert(Node *p, int key);

private:
    static int NodeHeight(Node *pNode);

    static int BalanceFactor(Node *pNode);

    Node *LLRotation(Node *p);

    Node *LRRotation(Node *p);

    Node *RLRotation(Node *pNode);

    Node *RRRotation(Node *pNode);
};


#endif //CPP_AVL_H
