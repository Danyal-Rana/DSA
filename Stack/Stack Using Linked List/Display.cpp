// 2, Displaying the elements of Stack

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
    return 0;
}