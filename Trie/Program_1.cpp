#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
    public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode (char d)
    {
        this->data = d;

        for (int i=0; i<26; i++)
        {
            this->children[i] = NULL;
        }


        this->isTerminal = false;
    }
};


int main ()
{
    TrieNode *root = new TrieNode ('-');
    return 0;
}