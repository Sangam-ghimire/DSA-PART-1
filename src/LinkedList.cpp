#include "LinkedList.h"
#include <iostream>

bool isEmpty(Node *head)
{
	if (head == NULL)
	{
		return true;
	}
	return false;
}

void addToHead(Node *&head, int val)
{
	Node *nnode = new Node(val);

	nnode->next = head;
	head = nnode;
}

void addToTail(Node *&head, int val)
{
	Node *nnode = new Node(val); // new node to be added to tail

	if (head == NULL) // if the linked list is empty
	{
		head = nnode;
		return;
	} // we can also directly call addToHead function too :)

	Node *temp = head;

	while (temp->next != NULL) // traverse till end
	{
		temp = temp->next;
	}
	temp->next = nnode; // adding new node to tail
}

void traverse(Node *head) // function to display all the data of linked list
{
	Node *temp = head;
	while (temp != NULL) // traversal till the end of list
	{
		std::cout << temp->info <<" ";
		temp = temp->next;
	}
	std::cout << std::endl;
}
