#include <bits/stdc++.h>
using namespace std;

int main ()
{
    stack <int> st;

    // inserting
    for (int i=5; i>=1; i--)
    {
        st.push (i*10);
    }

    // displaying 
    while (! st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}