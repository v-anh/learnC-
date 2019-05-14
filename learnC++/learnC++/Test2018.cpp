//
//  Test2018.cpp
//  learnC++
//
//  Created by Tran Viet AnextH on 2019/05/07.
//  Copyright © 2019 Tran Viet AnextH. All rights reserved.
//

#include "Test2018.hpp"

using namespace std;

bool isYoung(int n,int m,int Y[4][5]) {
    if (n != m) {
        return false;
    }
    for (int i = 0; i < n ; i ++ ) {
        for (int j = 0; j < m; j++) {
            if (i+1 < n) {
                if(Y[i][j] > Y[i+1][j]) {
                    return false;
                }
            }else if (j+1 < m) {
                if(Y[i][j] > Y[i][j+1]) {
                    return false;
                }
            }
            
        }
    }
    return true;
}





void convertToYoung(int A[],int k,int Y[4][5],int m, int n) {
    sort(A, A+k);
    for (int i = 0; i < m ; i++) {
        for (int j =0 ; j < n ; j++) {
            int temp = (i*m)+j;
            if(temp < k) {
                Y[i][j] = A[temp];
            }else{
                Y[i][j] = INT_MAX;
            }
        }
    }
}

void show1(int a[][5])
{
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 5; ++j){
            cout << a[i][j] << " ";
        }
        cout <<"\n";
    }
}

void removeElement(int Y[4][5],int m, int n,int k,int h) {
    Y[k][h] = INT_MAX;
    int nextK = k+1;
    int nextH = h+1;
    
    if ((nextK < m) && (nextH < n)) {
        if ( Y[nextK][h] < Y[k][nextH]) {
            Y[k][h] = Y[nextK][h];
            Y[nextK][h] = INT_MAX;
            cout <<"Move Max Down\n";
            removeElement(Y, m, n, nextK, h);
        }else if (Y[nextK][h] > Y[k][nextH]) {
            Y[k][h] = Y[k][nextH];
            Y[k][nextH] = INT_MAX;
            cout <<"Move Max right\n";
            
            removeElement(Y, m, n, k, nextH);
        }
    }
    
    if (nextK < m && Y[k][h] > Y[nextK][h]) {
        Y[k][h] = Y[nextK][h];
        Y[nextK][h] = INT_MAX;
        cout <<"Move Max Down\n";
        removeElement(Y, m, n, nextK, h);
    }
    
    if (nextH < m && Y[k][h] > Y[k][nextH]) {
        Y[k][h] = Y[k][nextH];
        Y[k][nextH] = INT_MAX;
        cout <<"Move Max right\n";
        removeElement(Y, m, n, k, nextH);
    }
}



