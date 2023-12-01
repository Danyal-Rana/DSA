// 5, Finding the value in Top field of the stack

#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

void push (Stack *st)
{
    while (st->top < st->size-1)
    {
        st->top++;
        int x;

        if (st->top < st->size)
        {
            cout << "Enter a value: ";

            cin >> x;

            st->s[st->top] = x;
        }
    }

    cout << "Stack is full now." << endl;
}

void pop (Stack *st)
{
    while (st->top >= 0)
    {
        int x;

        x = st->s[st->top];
        cout << x << " ";

        st->top--;
    }

    cout << "\nAll the elements of Stack has been deleted.";
}

int peek (Stack st, int pos)
{
    int x = -1;

    int myInd = st.top - pos + 1;

    if (pos>=0 && pos<st.size)
    {
        x = st.s[myInd];
    }
    else
    {
        cout << "Invalid Position" << endl;
    }
    return x;
}

// this function is new to this file
int stackTop (Stack st)
{
    if (st.top == -1)
    {
        return -1;
    }
    else
    {
        return st.s[st.top];
    }
}
int main ()
{
    Stack st;

    st.size = 5;

    st.s = new int[st.size];

    st.top = -1;

    cout << stackTop(st) << endl;

    push (&st);

    cout << stackTop(st) << endl;

    return 0;
}