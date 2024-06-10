//
// Created by vivek on 17-02-2023.
//

#include <iostream>
#include "CQueue.h"

CQueue::CQueue(unsigned short size) : size(size) {
    this->front = this->rear = 0;
    A = new int[this->size];
}

bool CQueue::full() const {
    return (this->rear + 1) % this->size == this->front;
}

bool CQueue::empty() const {
    return front == rear;
}

void CQueue::enqueue(int x) {
    if (not full()) {
        this->rear = (rear + 1) % size;
        this->A[rear] = x;
    } else
        std::cerr << "Queue is full!\n";
}

void CQueue::dequeue() {
    if (not empty())
        front = (front + 1) % size;
    else
        std::cerr << "Queue is empty!\n";
}

int CQueue::head() {
    return this->empty() ? -1 : A[(front + 1) % size];
}

std::ostream &operator<<(std::ostream &os, const CQueue &queue) {
    int i = queue.front + 1;
    do {
        os << queue.A[i];
        if (i not_eq queue.rear)
            os << ", ";
        i = (i + 1) % queue.size;
    } while (i != (queue.rear + 1) % queue.size);
    return os;
}

CQueue::~CQueue() {
    delete[]A;
}






