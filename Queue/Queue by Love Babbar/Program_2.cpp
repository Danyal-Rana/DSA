#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int front;
    int rear;
    int size;
    int *arr;

    Queue(int x)
    {
        front = -1;
        rear = -1;
        size = x;
        arr = new int[size];
    }

    void push(int data)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            rear++;
            this->arr[rear] = data;

            if (front == -1)
            {
                front++;
            }
        }
    }

    void pop()
    {
        if (front > rear)
        {
            cout << "Queue is Empty." << endl;
        }
        else
        {
            front++;
        }
    }

    int getFront()
    {
        int x = -1;
        if (front == -1 && rear==-1)
        {
            cout << "Queue is Empty." << endl;
        }
        else
        {
            x = arr[front];
        }
        return x;
    }

    bool isEmpty()
    {
        if (front > rear ||  front==-1 || rear==-1)
        {
            return true;
        }
        return false;
    }

    int getSize()
    {
        if ((front == -1 && rear == -1) || front>rear)
        {
            return 0;
        }
        return rear - front + 1;
    }
};

int main()
{
    Queue myQueue(20);

    cout << "Is empty: " << myQueue.isEmpty() << endl;

    cout << "Queue size: " << myQueue.getSize() << endl;

    myQueue.push (5);
    myQueue.push (10);
    myQueue.push (15);
    myQueue.push (20);
    myQueue.push (30);
    myQueue.push (40);

    cout << "Queue size: " << myQueue.getSize() << endl;

    myQueue.pop();

    cout << "Queue size: " << myQueue.getSize() << endl;

    while (!myQueue.isEmpty())
    {
        cout << myQueue.getFront() << " ";
        myQueue.pop();
    }

    return 0;
}