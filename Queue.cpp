#include <iostream>
#include "Queue.h"



Queue::~Queue() {
	Node* temp = head;
	while (temp != NULL) {
		temp = head->next;
		delete head;
		head = temp;
	}
}

void Queue::add(int x) {
	Node* temp = new Node;
	temp->x = x;
	temp->next = NULL;
	if (head != NULL) {
		tail->next = temp;
		tail = temp;
	}
	else {
		head = tail = temp;
	}
}

void Queue::show() {
	Node* temp = head;
	while (temp != NULL) {
		std::cout << temp->x << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}

int Queue::del() {
	if (head != NULL) {
		Node* temp = head;
		//std::cout << "Element" << head->x << " was removed" << std::endl;
		int helper = head->x;
		head = head->next;
		delete temp;
		return helper;
	}
	else {

		return 0;
	}
}

void Queue::copy(Queue& Ishodnik) {
	Node* temp2 = Ishodnik.head;
	while (temp2 != NULL) {
		Ishodnik.del();
		temp2 = Ishodnik.head;
	}
	Node* temp = this->head;
	while (temp != NULL) {
		Ishodnik.add(temp->x);
		temp = temp->next;
	}
}

void Queue::attach(Queue& Save, Queue& GetAttach, Queue& BeAttach) {
	Node* temp = GetAttach.head;
	while (temp != NULL) {
		Save.add(temp->x);
		temp = temp->next;
	}
	Node* temp2 = BeAttach.head;
	while (temp2 != NULL) {
		Save.add(temp2->x);
		temp2 = temp2->next;
	}
}


Node* Queue::getHead() {
	return (head);
}
Node* Queue::getTail() {
	return (tail);
}