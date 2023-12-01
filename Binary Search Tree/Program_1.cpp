// creating BST


#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node (int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST (Node *root, int d)
{
    if (root == NULL)
    {
        root = new Node (d);
        return root;
    }

    if (d < root->data)
    {
        root->left = insertIntoBST (root->left, d);
    }
    else if (d > root->data)
    {
        root->right = insertIntoBST (root->right, d);
    }

    return root;
}

int main ()
{
    // 10 5 20 3 8 15 25 4 6 12 26 -1
    
    Node *root = NULL;
    int a;
    cout << "Enter the data: ";
    cin >> a;

    while (a != -1)
    {
        root = insertIntoBST (root, a);
        cout << "Enter the data: ";
        cin >> a;
    }
    
    return 0;
}