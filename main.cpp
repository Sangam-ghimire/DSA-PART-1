#include "LinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    LinkedList *LL = new LinkedList();
    std::cout << LL->isEmpty() << std::endl;
    LL->addToHead(0);
    LL->traverse();
    LL->addToHead(8);
    LL->traverse();
    LL->removeFromTail();
    LL->traverse();
    LL->addToTail(1);
    LL->addToTail(2);
    LL->addToTail(3);
    LL->traverse();
    LL->removeFromHead(); // done
    LL->traverse();
    LL->add(10, 2);
    LL->traverse();
    LL->remove(10);
    LL->traverse();
    Node *ptr = LL->retrieve(2);
    std::cout << LL->search(2) << std::endl;
}