//
//  20181.cpp
//  learnC++
//
//  Created by Anh Tran on 5/15/19.
//  Copyright © 2019 Tran Viet Anh. All rights reserved.
//

#include "20181.hpp"

bool IsValidMove(int nX, int  X[], int nY, int Y[]) {
    if (nX > 0 && nY == 0) {
        return true;
    }
    
    if (X[nX-1] < Y[nY-1]) {
        return true;
    }
    return false;
}

int countValidMoves(int nA, int  A[], int nB, int B[], int nC, int C[]) {
    
    int count = 0;
    if (IsValidMove(nA, A, nB, B)) {
        count += 1;
    }
    
    if (IsValidMove(nA, A, nC, C)) {
        count += 1;
    }
    
    if (IsValidMove(nB, B, nA, A)) {
        count += 1;
    }
    
    if (IsValidMove(nB, B, nC, C)) {
        count += 1;
    }
    
    if (IsValidMove(nC, C, nA, A)) {
        count += 1;
    }
    
    if (IsValidMove(nC, C, nB, B)) {
        count += 1;
    }
    
    return count;
}
