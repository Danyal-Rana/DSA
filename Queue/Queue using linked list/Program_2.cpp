// enqueue

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

int main ()
{
    return 0;
}