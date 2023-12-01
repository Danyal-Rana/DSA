#include <bits/stdc++.h>
using namespace std;

int getKthSmallest (int arr[], int n, int k)
{
    priority_queue<int> myQ;

    for (int i=0; i<k; i++)
    {
        myQ.push (arr[i]);
    }

    for (int i=k; i<n; i++)
    {
        int element = arr[i];

        if (element < myQ.top())
        {
            myQ.pop();
            myQ.push (element);
        }
    }

    int ans = myQ.top();
    return ans;

}

int main ()
{
    int arr[] = {20, 50, 10, 30, 40};
    int n = 5;
    int k = 2;
    
    int ans = getKthSmallest (arr, n, k);

    cout << ans << endl;

    return 0;
}