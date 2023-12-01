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

void insertWord (TrieNode *root, string str)
{
    if (str.size() == 0)
    {
        root->isTerminal = true;
        return;
    }


    char ch = str[0];
    int index = ch - 'a';

    TrieNode *child;

    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        child = new TrieNode (ch);
        root->children[index] = child;
    }

    insertWord (child, str.substr(1));
}


int main ()
{
    TrieNode *root = new TrieNode ('-');

    insertWord (root, "danyal");
    insertWord (root, "danial");
    insertWord (root, "daniyal");
    insertWord (root, "daniel");
    
    return 0;
}