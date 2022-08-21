#include "LinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    Node *head = NULL;
    addToTail(head, 1);
    addToTail(head, 2);
    addToTail(head, 3);
    traverse(head);
}