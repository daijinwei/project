/**
 * Copyright (c) 2015, project
 * File Name: print_virtul_addr.cpp
 * Author: David<daijinwei41@gmail.com>
 * Created: 2015-04-01
 * Modified: 2015-04-01
 * Description: class private virtual func 
 **/

#include<iostream>
using namespace std;

typedef void(*Fun)(void);

class Base{
private:
    virtual void f(){cout << "Base::f()" << endl;}
    virtual void g(){cout << "Base::g()" << endl;}
    virtual void h(){cout << "Base::h()" << endl;}
};

Fun pFun = NULL;

int main(){
    Base b;
    for(long i = 0; i < 3; ++i){
        pFun = (Fun)*((long*)*(long*)(&b) + i);
        pFun();
    }
}
