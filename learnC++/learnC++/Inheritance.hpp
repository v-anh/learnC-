//
//  Inheritance.hpp
//  learnC++
//
//  Created by Anh Tran on 5/15/19.
//  Copyright © 2019 Tran Viet Anh. All rights reserved.
//
#include <stdio.h>

class Distance;


int addFive(Distance d);

class Weapon;

class Bomb;
class Gun;

class Knife;

class Loader;




// Abstract class
class Shape;

class Square;

class Circle;


template <class T>
class Calculator;

//int main(int argc, const char * argv[]) {
//
//    /*
//    int i, n, factorial = 1;
//    cout << "Enter: ";
//    cin >> n;
//    for (i = 1; i <= n; i++) {
//        factorial *= i;
//    }
//
//    cout << "factorial of " <<n<<"  = "<<factorial;
//     */
//
//    /*
//    Distance D;
//    cout<<"Distance: "<< addFive(D);
//    */
////    Loader *l = new Loader;
////    Weapon *w;
////    Bomb b;
////    Gun g;
////
////    w = &b;
////    l->loadFeature(w);
////
////    w = &g;
////    l->loadFeature(w);
////
////
////    Knife k;
////    w = &k;
////    l->loadFeature(w);
////
////
////
////    Square s;
////    Circle c;
////
////    cout << "Enter length to calculate the area of a square: ";
////    s.getData();
////    cout<<"Area of square: " << s.calculateArea();
////    cout<<"\nEnter radius to calculate the area of a circle: ";
////    c.getData();
////    cout << "Area of circle: " << c.calculateArea();
////
////
////    Calculator<int> inCal(1,2);
////    inCal.display();
////
////
////    Calculator<double> *aa = new Calculator<double>(2,3);
////    aa->display();
//
//
//
//
//    int Y[4][5] =
//        {2 ,3 ,4 ,5 ,
//         6 ,7 ,8,9,
//         10,21,22,23,
//        21,25,26,27,
//        28,29,30,31};
//    if (isYoung(4, 4, Y) == true) {
//        cout<<"Y is young matrix\n";
//    }else {
//        cout<<"Y is NOT young matrix\n";
//    }
//
//    //int A[] ={2 ,14 ,15 ,19,3 ,17 ,18,19,20,21};
//
//    //convertToYoung(A, 9, Y, 4, 4);
//
//
//    show(Y);
//
//
//    cout<<"\nremove 0 0 \n";
//    removeElement(Y, 4, 5, 0, 0);
//
//
//    if (isYoung(4, 4, Y) == true) {
//        cout<<"Y is young matrix\n";
//    }else {
//        cout<<"Y is NOT young matrix\n";
//    }
//    show(Y);
//
//
//    return 0;
//}
