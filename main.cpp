#include <iostream>
#include "Queue1.h"
using namespace std;

template <class T>
void actioniolly(T* q, int count) {
	int feedbackAY;
	int id = 0;
	int helper = 1;
	int helper2;
	int helper3;
	while (helper == 1) {
		cout << "1 - Adding the element" << endl;
		cout << "2 - Removing the element" << endl;
		cout << "3 - Show me a queue" << endl;
		cout << "4 - Find the max" << endl;
		cout << "5 - Copy" << endl;
		cout << "6 - Mergering" << endl;
		cout << "7 - Ghoose other queue" << endl;
		cout << "8 - SOS I dont know the queue?" << endl;
		cout << "0 - Go back to choose the inheritance" << endl;
		cin >> feedbackAY;
		cout << endl;
		switch (feedbackAY)
		{
		case 1: {
			cout << "Please enter the value ";
			cin >> helper2;
			q[id].add(helper2);
			cout << endl;
			break;
		}
		case 2: {
			helper2 = q[id].del();
			cout << "The " << helper2 << " was removed";
			break; cout << endl; }
		case 3: {q[id].show();
			break; cout << endl; }
		case 4: {
			helper2 = q[id].task();
			cout << helper2;
			cout << endl;
			break;
		}
		case 5: {
			if (count > 1) {
				cout << "Please enter the id where copy will be ";
				cin >> helper2;
				if ((helper2 >= count) || (helper2 == id))
				{
					cout << "You are stupid tost"; break;
				}
				else {
					q[id].copy(q[helper2]);
				}
			}
			else
			{
				"You cant copy when there is only one queue for use.";
			}
			cout << endl;  break;
		}
		case 6: {
			cout << "Please enter what do U wanna attach ";
			cin >> helper2;
			cout << endl << "Where to save ";
			cin >> helper3;
			if ((helper2 >= count) || (helper2 == id)) { cout << "You are stupid tost" << endl; break; }
			q[id].attach(q[helper3], q[id], q[helper2]);
			cout << endl; break;
		}
		case 7:
		{
			cin >> helper2;
			if (helper2 >= count) { cout << "You are stupid tost" << endl; break; }
			id = helper2;
			cout << endl; break;
		}
		case 8: {
			cout << "Your current id is " << id << endl;
			cout << endl; break;
		}
		case 0: {
			helper = 0;
			cout << endl; break;
		}
		default: {
			cout << "You are stupid tost" << endl; break;
			cout << endl; break;
		}
		}
	}
}


int main() {

	Queue1_public* q1 = NULL;
	Queue1_protected* q2 = NULL;
	Queue1_private* q3 = NULL;


	int count;
	int feedback;
	int helper = 1;

	while (helper == 1) {

		cout << "Please enter how much queues there will be max." << endl;
		cin >> count;
		system("cls");
		cout << "Please choose the type of a inheritance." << endl;
		cout << "1 - public" << endl;
		cout << "2 - protected" << endl;
		cout << "3 - private" << endl;
		cout << "0 - exit" << endl;
		cin >> feedback;
		cout << endl;
		switch (feedback)
		{
		case 1:
			q1 = new Queue1_public[count];
			system("cls");
			actioniolly(q1, count);
			delete[] q1;
			break;
		case 2:
			q2 = new Queue1_protected[count];
			system("cls");
			actioniolly(q2, count);
			delete[] q2;
			break;
		case 3:
			q3 = new Queue1_private[count];
			system("cls");
			actioniolly(q3, count);
			delete[] q3;
			break;
		default:
			helper = 0;
			break;
		}



	}
}