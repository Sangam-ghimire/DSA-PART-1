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

bool isEmpty(Node *head);

void addToHead(Node *&head, int val);
void addToTail(Node *&head, int val);
void add(Node *&nodetobeadded, int val, int key);

void removeFromHead(Node* &head);
void removeFromTail(Node* &head);
void remove(Node *&head,int data);

Node *retrieve(int data);

bool search(Node *head, int datatobesearched);
void traverse(Node *head);

#endif
