#ifndef LinkedList_h
#define LinkedList_h
#include <cstddef>

class Node
{
public:
	int info;	// to store data
	Node *next; // to point to next node

	Node(int d) : info(d), next(NULL){};

	~Node() {} // default deconstructor
};

class LinkedList
{
	Node *head = NULL;
	Node *tail = NULL;

public:
	bool isEmpty(); // done

	void addToHead(int val); // done
	void addToTail(int val); // done
	void add(int val, int databefore);
	// done using data before which the new node is to added rather than position

	int removeFromHead(); // done
	int removeFromTail(); // done
	int remove(int data); // done

	Node *retrieve(int datatobesearched); // done

	bool search(int datatobesearched); // done
	void traverse();
};
// done

#endif
