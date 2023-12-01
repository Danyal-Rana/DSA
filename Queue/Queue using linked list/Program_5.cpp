// working

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*front=NULL, *rear=NULL;

void enqueue (int x)
{
    Node *t = new Node();

    if (t==NULL)
    {
        cout << "Queue is full." << endl;
    }
    else
    {
        t->data = x;
        t->next = NULL;

        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue ()
{
    int x = -1;

    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        Node *t = front;
        front = front->next;
        x = t->data;
        delete t;
    }

    return x;
}

void displayQueue ()
{
    Node *t = front;

    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }

    cout << endl;
}

int main ()
{
    for (int i=1; i<=5; i++)
    {
        enqueue (i*10);
    }

    displayQueue ();

    cout << dequeue () << " has been deleted." << endl;

    displayQueue ();

    return 0;
}