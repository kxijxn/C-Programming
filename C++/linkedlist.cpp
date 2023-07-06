#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node *next;
};

void printlist(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main() 
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    // assign data in first node
    head -> data = 1;
    head -> next = second;

    // assign data in second node
    second -> data = 2;
    second -> next = third;

    // assign data in third node
    third -> data = 3;
    third -> next = NULL;

    printlist(head);

    return 0;
}