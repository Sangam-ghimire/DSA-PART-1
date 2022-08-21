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

bool isEmpty(Node *head); //done

void addToHead(Node *&head, int val); //done
void addToTail(Node *&head, int val); //done
void add(Node *&nodetobeadded, int val, int key);

void removeFromHead(Node* &head); //done
void removeFromTail(Node* &head); //done
void remove(Node *&head,int data); //done

Node *retrieve(int datatobesearched); 

bool search(Node *head, int datatobesearched); //done
void traverse(Node *head); //done

#endif
