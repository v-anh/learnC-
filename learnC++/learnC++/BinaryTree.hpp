//
//  BinaryTree.hpp
//  learnC++
//
//  Created by Anh Tran on 5/15/19.
//  Copyright © 2019 Tran Viet Anh. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <stdio.h>

#endif /* BinaryTree_hpp */


struct Node {
    int data;
    Node *left;
    Node *right;
};
Node* createNode(int data);

Node* findInsert(Node *root,int x);


void insertNode(Node* &root,int x);

void createTree(Node* &root, int a[], int n);

int getMax(Node* root);

Node* getEvenMax(Node* root,Node* even);

void NLR(Node* root);
