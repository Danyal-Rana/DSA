// building the tree
// level order traversal
// level order traversal on next lines
// reverse of level order traversal
// inorder traversal

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        Node *leftChild;
        int data;
        Node *rightChild;

        Node () {}

        Node (int data)
        {
            this->data = data;
            this->leftChild = this->rightChild = NULL;
        }
};

Node *buildTree (Node *root)
{
    cout << "Enter data: ";
    int data;
    cin >> data;
    root = new Node (data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "For the Left Child of " << data << ", ";
    root->leftChild = buildTree (root->leftChild);

    cout << "For the Right Child of " << data << ", ";
    root->rightChild = buildTree (root->rightChild);

    return root;
}

void levelOrderTraversal (Node *root)
{
    queue <Node*> q;
    q.push (root);
    q.push (NULL);

    while (! q.empty())
    {
        Node *temp = q.front();
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

            if (temp->leftChild)
            {
                q.push (temp->leftChild);
            }
            if (temp->rightChild)
            {
                q.push (temp->rightChild);
            }
        }
    }
}

void inOrderTraversal (Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrderTraversal (root->leftChild);
    cout << root->data << " ";
    inOrderTraversal (root->rightChild);
}

int main ()
{
    Node *root = NULL;

    // 1 2 4 -1 -1 5 -1 -1 3 -1 6 7 -1 -1 -1
    root = buildTree (root);

    cout << endl << "Printing the Tree in Level Order: " << endl;
    levelOrderTraversal (root);

    cout << endl << "Printing the Tree in InOrder Traversal: ";
    inOrderTraversal (root);
    
    return 0;
}
