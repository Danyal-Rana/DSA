// dequeue

#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void createQueue (Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int[size];
}

void enqueue (Queue *q, int x)
{
    if (q->rear == q->size - 1)
    {
        cout << "Queue is full.";
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue (Queue *q)
{
    int x = -1;

    if (q->front == q->rear)
    {
        cout << "Queue is empty";
    }
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

int main ()
{
    Queue q;

    createQueue (&q, 5);

    enqueue (&q, 10);
    enqueue (&q, 20);
    enqueue (&q, 30);
    enqueue (&q, 40);
    enqueue (&q, 50);

    int x = dequeue(&q);
    if (x != -1)
    {
        cout << x << " has been deleted." << endl;
    }
    
    return 0;
}