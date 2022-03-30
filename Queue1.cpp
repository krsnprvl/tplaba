#include "Queue1.h"
#include <climits>

int Queue1_public::task() {
	int smallPP = INT_MAX;
	Node* temp = Queue::getHead();
	if (temp != NULL) {
		while (temp != NULL) {
			if (temp->x > smallPP) smallPP = temp->x;
			temp = temp->next;
		}
		return(smallPP);
	}
	else
	{
		std::cout << "empty ((" << std::endl;
		return(0);
	}
}


int Queue1_protected::task() {
	int smallPP = INT_MAX;
	Node* temp = Queue::getHead();
	if (temp != NULL) {
		while (temp != NULL) {
			if (temp->x > smallPP) smallPP = temp->x;
			temp = temp->next;
		}
		return(smallPP);
	}
	else
	{
		std::cout << "empty ((" << std::endl;
		return(0);
	}
}

int Queue1_private::task() {
	int smallPP = INT_MAX;
	Node* temp = Queue::getHead();
	if (temp != NULL) {
		while (temp != NULL) {
			if (temp->x > smallPP) smallPP = temp->x;
			temp = temp->next;
		}
		return(smallPP);
	}
	else
	{
		std::cout << "empty ((" << std::endl;
		return(0);
	}
}


void Queue1_protected::add(int x) { return(Queue::add(x)); }
int Queue1_protected::del() { return(Queue::del()); }
void Queue1_protected::show() { return(Queue::show()); }
void Queue1_protected::copy(Queue& Q) { return(Queue::copy(Q)); }
void Queue1_protected::attach(Queue& E, Queue& Q, Queue& W) { return(Queue::attach(E, Q, W)); }


void Queue1_private::add(int x) { return(Queue::add(x)); }
int Queue1_private::del() { return(Queue::del()); }
void Queue1_private::show() { return(Queue::show()); }
void Queue1_private::copy(Queue& Q) { return(Queue::copy(Q)); }
void Queue1_private::attach(Queue& E, Queue& Q, Queue& W) { return(Queue::attach(E, Q, W)); }