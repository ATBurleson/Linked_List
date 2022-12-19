// Linked_List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
//create a class "Node" to store the variables that will be used for constructing the list.
//a linked list has a data portion and a next portion that will point to the next node in the list.
//NOTE:A class is private by default, to make it public, specify "public:".
class Node
{
public:
	int data;
	Node* next;
};

//create a function for printing the linked list values.
//print the list value while the parameter(Node* n) isn't equal to NULL or 0.
// n being the data passed in the function.
void printlist(Node* n)
{
	cout << "This is the Linked List!!!!" << endl;
	while (n!=NULL)
	{
		cout << n->data << endl;
		n = n->next;
		
	}
	//if the data(n) is equal to NULL or 0, print a message.
	//this means, after the last piece of data is passed in, there isn't 
	//another piece of data to pass in therefore next is NULL.
	if (n == NULL)
	{
		cout << "This is the Linked List finished printing!!!!" << endl << endl;
		
	}
}

int main()
{
	//time the program from start to end.
	clock_t Start, End; 
	Start = clock();

	//allocate memory in heap
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* Fourth = new Node();

	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = Fourth;
	Fourth->data = 4;
	Fourth->next = NULL;

	printlist(head);

	//time the program from start to end.
	End = clock();

	//create a double variable to store the calculated time.
	double time_taken = double(End - Start) / double(CLOCKS_PER_SEC);

	//print the execution time.
	cout << "Execution time for the Linked List was: " << fixed << time_taken << setprecision(3) << "s. " << endl << endl;
}

