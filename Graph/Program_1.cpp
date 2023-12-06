#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph
{
    unordered_map <int, list<int>> adj;

    public:

    void addEdge (int u, int v, bool direction)
    {
        // 0 -> undirected directed graph
        // 1 -> directed graph

        adj[u].push_back (v);

        if (direction == 0)
        {
            adj[v].push_back (u);
        }
    }

    void printAdjList ()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main ()
{
    int n, m;

    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    Graph g;

    for (int i=0; i<m; i++)
    {
        int u, v;
        cout << "Enter the value of u and v: ";
        cin >> u >> v;

        g.addEdge (u, v, 0);
    }

    g.printAdjList ();

    return 0;
}