#ifndef LinkedList_h
#define LinkedList_h

class Node{
public:
	int info;	//to store data
	Node* next;	//to point to next node

	Node(){} //default constructor
	~Node(){} //default deconstructor
	Node(int d):info(d), next(nullptr){};
	Node(int d, Node* next): info(d), next(next){};
};

class LinkedList{

private:
	Node* Head; //pointer to first node
	Node* Tail; //pointer to tail node
public:
	bool isEmpty();

	void addToHead(Node *nodetobeadded);
	void addToTail(Node *nodetobeadded);
	void add(Node *nodetobeadded);

	void removeFromHead();
	void removeFromTail();
	void remove(int data);
	Node* retrieve(int data);
	bool search(int datatobesearched);
	void traverse();
};
