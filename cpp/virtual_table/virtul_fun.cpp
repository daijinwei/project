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
    void func(){cout << "Base::func()" << endl;}
    virtual ~Base(){cout << "~Base()" << endl;}
};

class Derived : public Base{
public:
    void f(){cout << "Devied::f()" << endl;}
    void h(){cout << "Devied::h()" << endl;}
    ~Derived(){cout << "~Dervied()" << endl;}
};

Fun pFun = NULL;

int main(){
    Base *bp = new Derived;
    bp->f();
    bp->g();
    bp->h();
    bp->func();    
    delete bp;
}
