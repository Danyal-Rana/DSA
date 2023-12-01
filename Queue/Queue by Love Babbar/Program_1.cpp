#include <bits/stdc++.h>
using namespace std;

int main ()
{
    queue<int> myQueue;

    cout << myQueue.empty() << endl;

    myQueue.push (5);
    myQueue.push (10);
    myQueue.push (15);
    myQueue.push (20);

    cout << myQueue.size() << endl;

    myQueue.pop();

    cout << myQueue.size() << endl;

    while (!myQueue.empty())
    {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }

    cout << endl << myQueue.back();

    return 0;
}