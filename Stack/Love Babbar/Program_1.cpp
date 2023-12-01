#include <iostream>
#include <stack>
using namespace std;

int main ()
{
    // creating
    stack <int> myStack;

    // inserting / pushing
    myStack.push (40);
    myStack.push (30);
    myStack.push (20);
    myStack.push (10);

    // removing / deleting / poping
    myStack.pop();

    // peeking / finding
    cout << "Element at top is: " << myStack.top() << endl;

    // size
    cout << "Size of stack is: " << myStack.size() << endl;

    if (myStack.empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }
    return 0;
}