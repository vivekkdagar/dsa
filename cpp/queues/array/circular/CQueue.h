//
// Created by vivek on 17-02-2023.
//

#ifndef CIRCULAR_QUEUE_CQUEUE_H
#define CIRCULAR_QUEUE_CQUEUE_H


#include <ostream>

class CQueue {
    unsigned short size;
    int front;
    int rear;
    int *A;
public:
    explicit CQueue(unsigned short size);

    void enqueue(int x);

    void dequeue();

    int head();         // Return the first element

    bool empty() const;

    bool full() const;

    friend std::ostream &operator<<(std::ostream &os, const CQueue &queue);

    virtual ~CQueue();
};


#endif //CIRCULAR_QUEUE_CQUEUE_H
