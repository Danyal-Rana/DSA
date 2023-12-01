// 4, finding the element of specific position in Stack

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*top=NULL;

void push (int x)
{
    Node *t = new Node();

    if (t == NULL)
    {
        cout << "Stack Overflow !" << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

void displayStack ()
{
    Node *p = top;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void deleteStack ()
{
    int x = -1;

    Node *p = top;

    if (top == NULL)
    {
        cout << "Print Stack is empty for now." << endl;
    }
    else
    {
        top = top->next;
        cout << endl << p->data << " has been deleted." << endl;
        delete p;
    }
}

// this function is new to this file

void peek (int pos)
{
    Node *p = top;

    for (int i=1; p!=NULL && i<pos; i++)
    {
        p = p->next;
    }

    if (p!=NULL)
    {
        cout << p->data << " is present at the given position " << pos << "." << endl;
    }
    else
    {
        cout << "Invalid Position !" << endl;
    }
}

int main ()
{
    int i;
    while (i != -1)
    {
        cout << "Enter the stack data (or enter -1 to exit): ";
        cin >> i;

        if (i != -1)
        {
            push (i);
        }
    }

    displayStack();

    cout << endl;

    peek (4);

    return 0;
}