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

//void add is left to be done

void removeFromHead(Node *&head)
{
	if (head == NULL) // if empty doesnot do anything
	{
		return;
	}
	Node *tobedeleted = head;
	head = head->next;
	delete tobedeleted;
}

void removeFromTail(Node *&head)
// Note that head has been used for exploring instead of tail pointer
//  we have used delete here also explored with NULL
{
	if (head != NULL)
	{
		if (head->next == NULL) // if only one node delete that
		{
			head = NULL;
		}
		else
		{
			Node *temp = head;
			while (temp->next->next != NULL) // this gives us access to the node needed
			{
				temp = temp->next;
			}
			Node *tailNode = temp->next;
			temp->next = NULL;
			delete tailNode;
		}
	}
}

void remove(Node *&head, int data)
{
	if (head->next == NULL)
	{
		removeFromHead(head); // if only one node is present
		return;
	}
	Node *temp = head;
	while (temp->next->info != data)
	{
		temp = temp->next;
	}
	Node *tobedeleted = temp->next;
	temp->next = temp->next->next;

	delete tobedeleted;
}

void traverse(Node *head) // function to display all the data of linked list
{
	Node *temp = head;
	while (temp != NULL) // traversal till the end of list
	{
		std::cout << temp->info << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}

bool search(Node *head, int datatobesearched)
{
	Node *temp = head;
	while (temp != NULL)
	{
		if (temp->info == datatobesearched)
		{
			return true;
		}
		temp = temp->next;
	}
	return false;
}

Node *retrieve(Node* head,int datatobesearched)
{
	Node *temp = head;
	while (temp != NULL)
	{
		if (temp->info == datatobesearched)
		{
			return temp;
		}
		temp = temp->next;
	}
	std::cout<<"Data Not Found"<<std::endl;
}
