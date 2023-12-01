// creating Queue

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

int main ()
{
    Queue q;

    createQueue (&q, 5);

    return 0;
}