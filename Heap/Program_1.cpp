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
};

int main()
{
    Heap h;
    h.arr[0] = -1;
    h.insert(5);
    h.insert(10);
    h.insert(50);
    h.insert(30);
    h.insert(80);
    h.insert(40);
    h.insert(20);
    h.insert(70);
    h.insert(60); 

    h.display();

    return 0;
}
