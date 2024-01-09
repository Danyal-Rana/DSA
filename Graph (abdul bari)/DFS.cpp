#include <bits/stdc++.h>
using namespace std;

int visited[7] = {0};

void DFS (int G[7][7], int n, int start)
{

    if (visited[start]==0)
    {
        cout << start << " ";
        visited[start] = 1;

        for (int i=0; i<n; i++)
        {
            if (G[start][i]==1 && visited[i]==0)
            {
                DFS (G, n, i);
            }
        }
    }
}

int main ()
{
    int G[7][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0,1, 1, 0, 0, 0},
        {0, 1,0, 0, 1, 0, 0},
        {0, 1,0, 0, 1, 0, 0},
        {0, 0,1, 1, 0, 1, 1},
        {0, 0,0, 0, 1, 0, 0},
        {0, 0,0, 0, 1, 0, 0},
    };

    DFS (G, 7, 1);

    return 0;
}