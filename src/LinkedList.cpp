#include "LinkedList.h"
#include <iostream>

bool LinkedList::isEmpty(LinkedList List){
	if(List.Head == null){
		return true;	
	}
	return false;
}

void LinkedList::addToHead(Node *nodetobeadded)
{
	Node temp;
	temp.info= nodetobeadded->data;

}

