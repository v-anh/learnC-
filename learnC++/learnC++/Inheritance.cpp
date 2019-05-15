//
//  Inheritance.cpp
//  learnC++
//
//  Created by Anh Tran on 5/15/19.
//  Copyright © 2019 Tran Viet Anh. All rights reserved.
//

#include "Inheritance.hpp"
#include <iostream>
using namespace std;

class Distance {
private: int meter;
protected: int centimeter;
public:Distance():meter(0){}
    friend int addFive(Distance);
};


int addFive(Distance d) {
    d.meter += 5;
    d.centimeter = 20;
    return d.centimeter;
}


class Weapon
{
    public :virtual void features()
    {
        cout<<"Loading weapon features.\n";
        
    }
};

class Bomb:public Weapon {
public:void features()
    {
        this->Weapon::features();
        cout<<"Loading Bomb features.\n";
        
    }
};

class Gun : public Weapon
{
public:
    void features()
    {
        this->Weapon::features();
        cout << "Loading gun features.\n"; }
};

class Knife : public Weapon
{
public:
    void features()
    {
        this->Weapon::features();
        cout << "Loading knife features.\n";
    }
};

class Loader {
public:void loadFeature(Weapon *w) {
    w->features();
}
};




// Abstract class
class Shape
{
protected:
    float l;
public:
    void getData()
    {
        cin >> l;
    }
    
    // virtual Function
    virtual float calculateArea() = 0;
};

class Square : public Shape
{
public:
    float calculateArea()
    {   return l*l;  }
};

class Circle : public Shape
{
public:
    float calculateArea()
    { return 3.14*l*l; }
};


template <class T>
class Calculator {
private: T num1,num2;
public:Calculator(T n1,T n2) {
    num1 = n1;
    num2 = n2;
}
    T add() {return num1 + num2;}
    
    void display() {
        cout <<"\nadd" << add() << endl;
    }
};
