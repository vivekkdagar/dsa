////
//// Created by vivekdagar on 6/7/24.
////
//
//#include <algorithm>
//#include "AVL.h"
//
//AVL::AVL() : root(nullptr) {}
//
//Node *AVL::insert(Node *p, int key) {
//    Node *t{nullptr};
//
//    if(not p) {
//        t = new Node(nullptr, key, 1, nullptr); // Starting height from 1
//        return t;
//    }
//
//    if(key < p->data)
//        p->left = insert(p->left, key);
//    else if(key > p->data)
//        p->right = insert(p->right, key);
//
//    // Update height
//    p->height = NodeHeight(p);
//
//    switch (BalanceFactor(p)) {
//        case 2: {
//            if (BalanceFactor(p->lChild) == 1)
//                return LLRotation(p);
//            else if (BalanceFactor(p->lChild) == -1)
//                return LRRotation(p);
//        }
//            break;
//        case -2: {
//            if (BalanceFactor(p->rChild) == 1)
//                return RRRotation(p);
//            else if (BalanceFactor(p->rChild) == -1)
//                return RLRotation(p);
//        }
//            break;
//    }
//    return p;
//}
//
//
//int AVL::NodeHeight(Node *pNode) {
//    int hL, hR;
//    hL = pNode and pNode->left ? pNode->left->height : 0;
//    hR = pNode and pNode->right ? pNode->right->height : 0;
//
//    return std::max(hL, hR) + 1;
//}
//
//int AVL::BalanceFactor(Node *pNode) {
//    int hL, hR;
//    hL = pNode and pNode->left ? pNode->left->height : 0;
//    hR = pNode and pNode->right ? pNode->right->height : 0;
//
//    return hL - hR;
//}
//
//Node *AVL::LLRotation(Node *p) {
//    Node *pl = p->left;
//    Node *plR = pl->right;
//
//    pl->right = p;
//    p->left = plR;
//
//    // Update height
//    p->height = NodeHeight(p);
//    pl->height = NodeHeight(pl);
//
//    // Update root
//    if (this->root == p)
//        root = pl;
//
//    return pl;
//}
//
//Node *AVL::LRRotation(Node *p) {
//    Node *pl = p->lChild;
//    Node *plR = pl->rChild;
//
//    pl->rChild = plR->lChild;
//    p->lChild = plR->rChild;
//
//    plR->lChild = pl;
//    plR->rChild = p;
//
//    pl->height = NodeHeight(pl);
//    p->height = NodeHeight(p);
//    plR->height = NodeHeight(plR);
//
//    if (p == root)
//        root = plR;
//    return plR;
//}
//
//Node *Tree::RLRotation(Node *p) {
//    int LBF, RBF;
//    Node *pr = p->rChild;
//    Node *prl = pr->lChild;
//    prl->height = 0;
//
//    p->rChild = prl->lChild;
//    pr->lChild = prl->rChild;
//    prl->rChild = pr;
//    prl->lChild = p;
//    LBF = NodeHeight(p->lChild) + 1;
//    RBF = NodeHeight(p->rChild) + 1;
//    p->height = LBF - RBF;
//
//    LBF = NodeHeight(pr->lChild) + 1;
//    RBF = NodeHeight(pr->rChild) + 1;
//    pr->height = LBF - RBF;
//    if (p == root)
//        root = prl;
//
//    return prl;
//}
//
//Node *Tree::RRRotation(Node *p) {
//    Node *pr = p->rChild;
//    Node *prl = pr->lChild;
//
//    pr->lChild = p;
//    p->rChild = prl;
//
//    // Update height
//    p->height = NodeHeight(p);
//    pr->height = NodeHeight(pr);
//
//    // Update root
//    if (root == p) {
//        root = pr;
//    }
//    return pr;
//}
//
//void Tree::Inorder(Node *p) {
//    if (p) {
//        Inorder(p->lChild);
//        std::cout << p->data << " ";
//        Inorder(p->rChild);
//    }
//}
//
//Node *AVL::Remove(Node *p, int key) {
//    if (not p)
//        return nullptr;
//
//    if (not p->lChild and not p->rChild) {
//        if (p == root)
//            root = nullptr;
//        delete p;
//        return nullptr;
//    }
//
//    if (key < p->data)
//        p->lChild = Remove(p->lChild, key);
//    else if (key > p->data)
//        p->rChild = Remove(p->rChild, key);
//    else {
//        Node *q;
//        if (NodeHeight(p->lChild) > NodeHeight(p->rChild)) {
//            q = InPre(p->lChild);
//            p->data = q->data;
//            p->lChild = Remove(p->lChild, q->data);
//        } else {
//            q = InSucc(p->rChild);
//            p->data = q->data;
//            p->rChild = Remove(p->rChild, q->data);
//        }
//    }
//
//    p->height = NodeHeight(p);
//
//    // Balance Factor and Rotation
//    switch (BalanceFactor(p)) {
//        case 2: {
//            switch (BalanceFactor(p->lChild)) {
//                case 1:
//                    return LLRotation(p);        // L1 Rotation
//                case 0:
//                    return LLRotation(p);       // L0 Rotation
//                case -1:
//                    return LRRotation(p);      // L-1 Rotation
//            }
//        }
//            break;
//        case -2: {
//            switch (BalanceFactor(p->rChild)) {
//                case -1:
//                    return RRRotation(p);      // R-1 Rotation
//                case 1:
//                    return RLRotation(p);       // R1 Rotation
//                case 0:
//                    return RRRotation(p);       // R0 Rotation
//            }
//        }
//            break;
//    }
//    return p;
//}
//
//Node *Tree::InPre(Node *p) {
//    while (p and p->rChild)
//        p = p->rChild;
//    return p;
//}
//
//Node *Tree::InSucc(Node *pNode) {
//    while (pNode and pNode->lChild)
//        pNode = pNode->lChild;
//    return pNode;
//}
//
//void Tree::destroy(Node *p) {
//    if(p) {
//        destroy(p->lChild);
//        destroy(p->rChild);
//        delete p;
//    }
//}
//
//Tree::~Tree() {
//    destroy(root);
//}
//
//
