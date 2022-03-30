#pragma once
#include "Queue.h"

#ifndef QUEUE_H1
#define QUEUE_H1



class Queue1_public :
    public Queue
{
public:
    int task();
};

class Queue1_protected :
    public Queue
{
public:
    int task();
    void add(int x);
    int del();
    void show();
    void copy(Queue& Q);
    void attach(Queue& E, Queue& Q, Queue& W);
};


class Queue1_private :
    public Queue
{
protected:
    Node* getHead();
    Node* getTail();
public:
    int task();
    void add(int x);
    int del();
    void show();
    void copy(Queue& Q);
    void attach(Queue& E, Queue& Q, Queue& W);
};

#endif // ! QUEUE_H1
