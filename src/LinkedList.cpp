#include "LinkedList.h"
#include <iostream>

bool LinkedList::isEmpty()
{
	if (head == NULL)
	{
		return true;
	}
	return false;
}

void LinkedList::addToHead(int val)
{
	Node *nnode = new Node(val);
	if (head == NULL)
	{
		nnode->next = head;
		head = nnode;
		tail = head;
	}
	else
	{
		nnode->next = head;
		head = nnode;
	}
}

void LinkedList::addToTail(int val)
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

void LinkedList::add(int val, int databefore) // data before represents the data before which the new node is to be added
{
	Node *nnode = new Node(val);

	Node *temp = head;

	if (temp->info == databefore) // if the first node is matching
	{
		addToHead(val);
		return;
	}

	while (temp->next->info != databefore)
	{
		temp = temp->next;
	}
	nnode->next = temp->next;
	temp->next = nnode; // changing the link
}

int LinkedList::removeFromHead()
{
	if (head == NULL) // if empty doesnot do anything
	{
		return 0;
	}
	Node *tobedeleted = head;
	head = head->next;
	return head->info;
	delete tobedeleted;
}

int LinkedList::removeFromTail()
{
	if (head != NULL)
	{
		Node *tobedeleted = tail;
		if (head == tail)
		{
			head = NULL;
			tail = NULL;
		}
		else
		{
			Node *temp = head;
			while (temp->next != tail)
			{
				temp = temp->next;
			}
			tail = temp;
			int rtr = temp->info;
			temp->next = NULL;
			delete tobedeleted;
			return rtr;
		}
	}
}

int LinkedList::remove(int data)
{
	if (head->next == NULL)
	{
		return removeFromHead(); // if only one node is present
	}
	Node *temp = head;
	while (temp->next->info != data)
	{
		temp = temp->next;
	}
	Node *tobedeleted = temp->next;
	temp->next = temp->next->next;
	int rtr = tobedeleted->info;
	delete tobedeleted;
	return rtr;
}

void LinkedList::traverse() // function to display all the data of linked list
{
	Node *temp = head;
	while (temp != NULL) // traversal till the end of list
	{
		std::cout << temp->info << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}

bool LinkedList::search(int datatobesearched)
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

Node *LinkedList::retrieve(int datatobesearched)
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
	std::cout << "Data Not Found" << std::endl;
	return NULL;
}
