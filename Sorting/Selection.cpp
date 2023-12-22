#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }

        swap(a[minIndex], a[i]);
    }
}

int main()
{
    int a[] = {2, 5, 3, 1, 4};
    int n = sizeof(a) / sizeof(a[0]);

    printArr(a, n);

    selectionSort(a, n);

    printArr(a, n);

    return 0;
}
