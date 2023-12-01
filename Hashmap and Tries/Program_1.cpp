#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> m;

    // insertion
    pair<string, int> p1 = make_pair("Danyal", 10);
    m.insert(p1);

    pair<string, int> p2("rana", 5);
    m.insert(p2);

    m["Ahmad"] = 20;

    // access
    cout << m.at("Danyal") << endl;
    cout << m["Ahmad"] << endl;

    // search
    cout << m.count("Dani") << endl;

    if (m.find("Ahmad") != m.end())
    {
        cout << "Ahmad found " << endl;
    }
    else
    {
        cout << "Ahmad not found " << endl;
    }

    // size and default entry
    cout << m.size() << endl;
    cout << m["Mashhood"] << endl; // key of "Mashhood will be created with default value 0"
    cout << m.size() << endl;

    // traversal

    cout << endl << "Printing the elements of Unordered map m" << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}