// 2, inseting elements in the stack

#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};


// this function is created
void push (Stack *st)
{
    while (st->top < st->size)
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

    cout << "Stack is full now.";
}

int main ()
{
    Stack st;

    st.size = 5;

    st.s = new int[st.size];

    st.top = -1;

    push(&st);

    return 0;
}