//
//  main.cpp
//  learnC++
//
//  Created by Tran Viet Anh on 2019/05/02.
//  Copyright © 2019 Tran Viet Anh. All rights reserved.
//

#include <iostream>
#include "Test2018.hpp"
#include "BinaryTree.hpp"
#include "20181.hpp"
#include "20151.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    /*
     2015 Dot 1
     */
    int Y[1] = {3};
    int X[5] = {5,4,3,2,1};
    int Z[2] = {3,2};
    bool isValid = IsValidMove(5, X, 1, Y);
    cout<<"\nis valid move "<<isValid<<"\n";
    cout<<"Count moves "<<countValidMoves(5,X,1,Y,2,Z)<<"\n";

    cout<<"sodu "<<sodu(100,0.001,8,10)<<"\n";
    cout<<"sodu "<<sodu2(100,0.001,8,10)<<"\n";

    Node* root = NULL;
    int a[] = { 40, 5, 50, 45, 15, 57, 48, 13, 16, 49, 47 };
    int n = 11;
    createTree(root, a, n);

    NLR(root);

    cout<<"Max "<<getMax(root)<<"\n";

    cout<<"Max Even "<<getEvenMax(root,NULL)->data<<"\n";
    
}
