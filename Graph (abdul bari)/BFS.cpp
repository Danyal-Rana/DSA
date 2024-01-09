#include <bits/stdc++.h>
using namespace std;

void BFS (int G[7][7], int n, int start)
{
    queue<int> q;

    int i = start;

    int visited[n] = {0};

    cout << i << " ";
    visited[i] = 1;
    q.push (i);

    while (! q.empty())
    {
        i = q.front();
        q.pop();

        for (int j=0; j<n; j++)
        {
            if (G[i][j]==1 && visited[j]==0)
            {
                cout << j << " ";
                q.push (j);
                visited[j] = 1;
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

    BFS (G, 7, 1);

    return 0;
}