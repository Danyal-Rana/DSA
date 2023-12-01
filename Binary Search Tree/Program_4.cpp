// minimum and maximum value

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

void levelOrderTraversal (Node *root)
{
    queue<Node*> q;
    q.push (root);
    q.push (NULL);

    while (! q.empty())
    {
        Node *temp = q.front ();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (! q.empty())
            {
                q.push (NULL);
            }
        }

        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push (temp->left);
            }
            if (temp->right)
            {
                q.push (temp->right);
            }
        }
    }
}

void preOrderTraversal (Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal (root->left);
    preOrderTraversal (root->right);
}

void inOrderTraversal (Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrderTraversal (root->left);
    cout << root->data << " ";
    inOrderTraversal (root->right);
}

void postOrderTraversal (Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrderTraversal (root->left);
    postOrderTraversal (root->right);
    cout << root->data << " ";
}

Node *minValue (Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxValue (Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp;
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

    cout << "\nInOrder Traversal is: ";
    inOrderTraversal (root);

    cout << "\nMinimum value in the BST is: " << minValue(root)->data;
    cout << "\nMaximum value in the BST is: " << maxValue(root)->data;
    return 0;
}