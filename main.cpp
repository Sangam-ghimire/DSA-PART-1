#include "LinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    Node *head = NULL;
    std::cout << isEmpty(head) << std::endl;
    addToHead(head, 0);
    traverse(head);
    addToTail(head, 1);
    addToTail(head, 2);
    addToTail(head, 3);
    traverse(head);
    removeFromHead(head); // done
    traverse(head);
    removeFromTail(head);
    traverse(head);
    add(head, 10, 2);
    traverse(head);
    remove(head, 10);
    traverse(head);
    Node *ptr = retrieve(head, 2);
    std::cout << search(ptr, 2) << std::endl;
}