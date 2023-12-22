#include <bits/stdc++.h>
using namespace std;

void printArr (int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort (int arr[], int n)
{
    int i, j, key;

    for (i=1; i<n; i++)
    {
        int key = arr[i];
        j = i-1;

        while (key < arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main ()
{
    int a[] = {2, 5, 3, 1, 4};
    int n = sizeof(a) / sizeof(a[0]);

    printArr (a, n);

    insertionSort (a, n);

    printArr (a, n);




}