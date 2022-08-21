#include "LinkedList.h"
#include <iostream>

bool isEmpty(Node* &head){
	if(head == nullptr){
		return true;	
	}
	return false;
}

void addToHead(Node* &head)
{
	Node temp;
	temp.info= nodetobeadded->data;

}

void addToTail(Node* &head,int val)
{
	Node* nnode= new Node(val); //new node to be added to tail

	if(head==nullptr) //if the linked list is empty
	{
		head =nnode;
	}

	Node* temp= head;

	while(temp->next != nullptr)//traversal till the end
	{
		temp=temp->next;
	}
	temp->next=nnode; //adding new node to tail
}

