// 1, Creating the Stack struct

#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

int main ()
{
    Stack st;

    st.size = 5;

    st.s = new int[st.size];

    st.top = -1;
    
    return 0;
}