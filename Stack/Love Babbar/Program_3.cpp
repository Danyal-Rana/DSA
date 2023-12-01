// stack using array

#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    public:
    int top;
    int size;
    int *arr;

    Stack (int size)
    {
        this->top = -1;
        this->size = size;
        arr = new int [size];
    }

    // methods
    void push (int x)
    {
        if (this->top < this->size-1)
        {
            this->top++;
            this->arr[this->top] = x;
        }
        else
        {
            cout << "Stack is Full" << endl;
        }
    }

    void pop ()
    {
        if (this->top == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << this->arr[this->top] << " has been deleted." << endl;
            this->top--;
        }
    }

    int getTop ()
    {
        int x = -1;
        if (this->top == -1)
        {
            cout << "There is no element is the Stack." << endl;
        }
        else
        {
            x = this->arr [this->top];
        }
        return x;
    }

    int getSize ()
    {
        return this->top+1;
    }

    bool isEmpty ()
    {
        if (this->top == -1)
        {
            return true;
        }
        return false;
    }
};

int main ()
{
    Stack myStack (10);

    cout << "is stack empty ? " << myStack.isEmpty() << endl;

    cout << "Size of the stack is: " << myStack.getSize() << endl;

    myStack.push (50);
    myStack.push (40);
    myStack.push (30);
    myStack.push (20);
    myStack.push (10);

    cout << "Size of the stack is: " << myStack.getSize() << endl;

    cout << "Element at top is: " << myStack.getTop() << endl;

    myStack.pop();

    cout << "Size of the stack is: " << myStack.getSize() << endl;

    cout << "Element at top is: " << myStack.getTop() << endl;

    cout << "is stack empty ? " << myStack.isEmpty() << endl;

    return 0;
}