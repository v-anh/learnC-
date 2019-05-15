//
//  20151.cpp
//  learnC++
//
//  Created by Anh Tran on 5/15/19.
//  Copyright © 2019 Tran Viet Anh. All rights reserved.
//

#include "20151.hpp"

float sodu(float a, float b, float c,int n) {
    if (n == 1) {
        return (1+b)*a;
    }
    if (n%3 == 0) {
        return (1+b)*sodu(a,b,c,n-1) + c;
    }else{
        return (1+b)*sodu(a,b,c,n-1);
    }
}

float sodu2(float a, float b, float c,int n) {
    float sodu = a;
    for (int i = 1; i < n+1; i++) {
        sodu = sodu*(1+b);
        if (i%3==0) {
            sodu += c;
        }
    }
    return sodu;
}
