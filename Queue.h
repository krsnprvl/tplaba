#pragma once
#include <iostream>
#ifndef QUEUE_H
#define QUEUE_H

struct Node
{
	int x;
	Node* next;
};

class Queue
{
	Node* head, * tail;
protected:
	int size;
	Node* getHead();
	Node* getTail();
public:
	Queue() : head(NULL), tail(NULL) {};
	~Queue();
	void add(int x);
	int del();
	void show();
	void copy(Queue& Q);
	void attach(Queue&, Queue&, Queue&);
};
#endif // ! QUEUE_H
