// heapify and building heap


#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[101];
    int size;

    Heap()
    {
        this->size = 0;
    }

    void insert(int value)
    {
        if (size < 101)
        {
            size += 1;
            int index = size;
            arr[index] = value;

            while (index > 1)
            {
                int parentIndex = index / 2;

                if (arr[index] > arr[parentIndex])
                {
                    swap(arr[index], arr[parentIndex]);
                    index = parentIndex;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            cout << "Array is Full, can't insert more elements." << endl;
        }
    }

    void display()
    {
        for (int i = 0; i <= this->size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int deleteMax ()
    {
        int ans = arr[1];

        int index = 1;
        arr[index] = arr[size];
        size--;

        while (index < size)
        {
            int largest = index;
            int left = 2*index;
            int right = 2*index + 1;

            if (largest<size && arr[index]<arr[left])
            {
                largest = left;
            }
            if (largest<size && arr[index]<arr[right])
            {
                largest = right;
            }

            if (largest == index)
            {
                break;
            }
            else
            {
                swap (arr[index], arr[largest]);
                index = largest;
            }
        }

        return ans;
    }
};

void heapify (int arr[], int n, int i)
{
    int index = i;
    int leftSide = index*2;
    int rightSide = index*2 + 1;
    int largest = index;

    if (leftSide <= n && arr[largest]<arr[leftSide])
    {
        largest = leftSide;
    }
    if (rightSide <= n && arr[largest]<arr[rightSide])
    {
        largest = rightSide;
    }

    if (largest != index)
    {
        swap (arr[index], arr[largest]);
        index = largest;
        heapify (arr, n, index);
    }
}

void builtHeap (int arr[], int n)
{
    for (int i=n/2; i>0; i--)
    {
        heapify (arr, n, i);
    }
}

void display2 (int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    } cout << endl;
}


int main()
{
    int arr[] = {-1, 10, 30, 20, 90, 40, 60, 100, 80, 50, 70};
    display2 (arr, 10);
    builtHeap (arr, 10);
    display2 (arr, 10);

    return 0;
}