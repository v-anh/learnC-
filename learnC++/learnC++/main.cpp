//
//  main.cpp
//  learnC++
//
//  Created by Tran Viet Anh on 2019/05/02.
//  Copyright © 2019 Tran Viet Anh. All rights reserved.
//

#include <iostream>
#include "Test2018.hpp"



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




void show(int a[])
{
    for(int i = 0; i < 10; ++i)
        cout << a[i] << " ";
}

void show(int a[][5])
{
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 5; ++j){
            cout << a[i][j] << " ";
        }
         cout <<"\n";
    }
}

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


struct Node {
    int data;
    Node *left;
    Node *right;
};

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

int main(int argc, const char * argv[]) {
    
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










