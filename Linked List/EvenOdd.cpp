#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*head=NULL, *last=NULL;

void createNode (int x)
{
    Node *temp = new Node ();
    temp->data = x;
    temp->next = NULL;

    if (head == NULL)
    {
        head = last = temp;
    }
    else
    {
        last->next = temp;
        last = temp;
    }
}

void evenOdd (Node *head)
{
    Node *temp = head;
    Node *evenHead = NULL;
    Node *evenTemp = NULL;
    Node *oddHead = NULL;
    Node *oddTemp = NULL;


    while (temp != NULL)
    {
        if (temp->data%2 == 0)
        {
            if (evenHead == NULL)
            {
                evenHead = evenTemp = temp;
            }
            else
            {
                evenTemp->next = temp;
                evenTemp = temp;
            }
        }

        else if (temp->data%2 != 0)
        {
            if (oddHead == NULL)
            {
                oddHead = oddTemp = temp;
            }
            else
            {
                oddTemp->next = temp;
                oddTemp = temp;
            }
        }
        temp = temp->next;
    }

    head = oddHead;
    oddTemp->next = evenHead;
}

void displayLinkedList (Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main ()
{
    createNode (1);
    createNode (2);
    createNode (3);
    createNode (4);
    createNode (5);
    createNode (6);

    evenOdd (head);

    displayLinkedList (head);

    return 0;
}