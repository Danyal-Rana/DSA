#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {                         
        bool swapped = false; 
        for (int j = 0; j < n - i - 1; j++)
        { 
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true; 
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}

void bubbleSort (int a[], int n)
{}

int main()
{
    int a[] = {2, 5, 3, 1, 4};
    int n = sizeof(a) / sizeof(a[0]);

    printArr(a, n);

    bubbleSort(a, n);

    printArr(a, n);
}