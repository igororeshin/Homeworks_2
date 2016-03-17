#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

void Create(BinarySearchTree *&tree)
{
    tree = new BinarySearchTree;
    tree->root = nullptr;
}

Node* InsertNode(Node *root, int element)
{
    if (root == nullptr)
    {
        root = new Node;
        root->data = element;
        root->left = nullptr;
        root->right = nullptr;
    }

    else if (element <= root->data)
    {
        root->left = InsertNode(root->left, element);
    }
    else
    {
        root->right = InsertNode(root->right, element);
    }

    return root;
}

void Insert(BinarySearchTree *&tree, int element)
{
    tree->root = InsertNode(tree->root, element);
}

void PrintTree(Node *root, int level)
{
    if (root != NULL)
    {
        PrintTree(root->right, level + 1);

        for (int i = 0; i < level; i++)
        {
            cout << "--";
        }

        cout << root->data << endl;

        PrintTree(root->left, level + 1);
    }
}

void Print(BinarySearchTree *tree)
{
    PrintTree(tree->root, 0);
}

void InOrder(Node *root)
{
    if (root != nullptr)
    {
        InOrder(root -> left);
        cout << root -> data << " ";
        InOrder(root -> right);
    }
}

void InOrderPrint(BinarySearchTree *tree)
{
    InOrder(tree->root);
}

int sum = 0;

void Summa(Node *root)
{
    if (root != nullptr)
    {
        Summa(root -> left);
        sum = sum + root->data;
        Summa(root -> right);
    }
}

void СomponentsSum(BinarySearchTree *tree)
{
    Summa(tree->root);
}

int mincom = 100000;

void Minim(Node *root)
{
    if (root != nullptr)
    {
        Minim(root -> left);
        if (root -> data < mincom)
        {
            mincom = root -> data;
        }
    }
}

void MinComponent(BinarySearchTree *tree)
{
    Minim(tree->root);
}
