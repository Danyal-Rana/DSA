// priority queue as min heap


#include <bits/stdc++.h>
using namespace std;

int main ()
{
    priority_queue<int, vector<int>, greater<int> > myQ;

    myQ.push (10);
    myQ.push (45);
    myQ.push (80);
    myQ.push (20);
    myQ.push (60);
    myQ.push (100);
    myQ.push (30);
    myQ.push (70);
    myQ.push (40);


    while (!myQ.empty())
    {
        cout << myQ.top() << endl;
        myQ.pop();
    }

    return 0;
}