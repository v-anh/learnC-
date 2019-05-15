//
//  BinaryTree.cpp
//  learnC++
//
//  Created by Anh Tran on 5/15/19.
//  Copyright © 2019 Tran Viet Anh. All rights reserved.
//

#include "BinaryTree.hpp"




Node* createNode(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* findInsert(Node *root,int x) {
    if (root == NULL) {
        return NULL;
    }
    Node *p = root;
    Node *f = p;
    while (p != NULL) {
        f = p;
        if (p->data > x) {
            p = p->left;
        }else{
            p = p->right;
        }
    }
    return f;
}


void insertNode(Node* &root,int x) {
    Node *newnode = createNode(x);
    if (root == NULL) {
        root = newnode;
        return;
    }
    
    Node* f = findInsert(root, x);
    if (f != NULL) {
        if (f->data > x) {
            f->left = newnode;
        }else{
            f->right = newnode;
        }
    }
}

void createTree(Node* &root, int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        insertNode(root, a[i]);
    }
}

int getMax(Node* root) {
    if (root == NULL) {
        return NULL;
    }
    
    if (root->right != NULL) {
        return getMax(root->right);
    }else{
        return root->data;
    }
}

Node* getEvenMax(Node* root,Node* even) {
    if (root == NULL) {
        return NULL;
    }
    
    if (root->data % 2 == 0) {
        even = root;
    }
    
    if (root->right != NULL) {
        return getEvenMax(root->right,even);
    }else if (root->left != NULL) {
        return getEvenMax(root->left,even);
    }
    
    return even;
}
void NLR(Node* root)
{
    if (root != NULL)
    {
        printf("%d \t", root->data);
        NLR(root->left);
        NLR(root->right);
    }
}
