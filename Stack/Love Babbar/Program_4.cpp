// two stacks in an array 

#include <iostream>
using namespace std;

class Stack
{
    public:
    int size;
    int *arr;
    int top1;
    int top2;

    Stack (int size)
    {
        this->arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }

    // functions for Stack 1
    void push1 (int x)
    {
        if (this->top2-this->top1 == 1)
        {
            cout << "Stack 1 is Full." << endl;
        }
        else
        {
            this->top1++;
            this->arr[this->top1] = x;
        }
    }

    void pop1 ()
    {
        if (this->top1 == -1)
        {
            cout << "Stack 1 is Empty." << endl;
        }
        else
        {
            this->top1--;
        }
    }

    // functions for Stack 2
    void push2 (int x)
    {
        if (this->top2-this->top1 == 1)
        {
            cout << "Stack 2 is full." << endl;
        }
        {
            this->top2--;
            this->arr[this->top2] = x;
        }
    }

    void pop2 ()
    {
        if (this->top2 == this->size)
        {
            cout << "Stack 2 is Empty." << endl;
        }
        else
        {
            this->top2++;
        }
    }
};

int main ()
{
    return 0;
}