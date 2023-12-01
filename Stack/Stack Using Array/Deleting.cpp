// 3, Deleting elements in the stack

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


// deleting functin is created in this file
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

int main ()
{
    Stack st;

    st.size = 5;

    st.s = new int[st.size];

    st.top = -1;

    push (&st);

    pop (&st);

    return 0;
}