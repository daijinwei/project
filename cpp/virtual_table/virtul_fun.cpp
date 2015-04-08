/**
 * Copyright (c) 2015, project
 * File Name: print_virtul_addr.cpp
 * Author: David<daijinwei41@gmail.com>
 * Created: 2015-04-01
 * Modified: 2015-04-01
 * Description: 
 **/

#include<iostream>
using namespace std;

typedef void(*Fun)(void);

class Base{
public:
    virtual void f(){cout << "Base::f()" << endl;}
    virtual void g(){cout << "Base::g()" << endl;}
    virtual void h(){cout << "Base::h()" << endl;}
    virtual ~Base(){}
};

class Devied : public Base{
public:
    void f(){cout << "Devied::f()" << endl;}
    void h(){cout << "Devied::h()" << endl;}
};

Fun pFun = NULL;

int main(){
    Base *bp;
    Devied d;
    bp = &d;
    bp->f();
    bp->g();
    bp->h();
    
}
