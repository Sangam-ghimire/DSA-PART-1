#ifndef LinkedList_h
#define LinkedList_h

class Node
{
public:
	int info;	// to store data
	Node *next; // to point to next node

	Node() {}  // default constructor
	~Node() {} // default deconstructor
	Node(int d) : info(d), next(nullptr){};
	Node(int d, Node *next) : info(d), next(next){};
};

bool isEmpty(Node &head);

void addToHead(Node *&nodetobeadded, int val);
void addToTail(Node *&nodetobeadded, int val);
void add(Node *&nodetobeadded, int val, int key);

void removeFromHead();
void removeFromTail();
void remove(int data);

Node *retrieve(int data);

bool search(int datatobesearched);
void traverse(Node *head);

#endif
