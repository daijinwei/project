/*************************************************************************
	> File Name: test_construct_call_vir_function.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 17 Apr 2015 03:14:00 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout << "Base::Base()" << endl;
        function();
    }
    virtual void function(){
        cout << "Base::function()" << endl;
    }
};

class Derived : public Base{
public:
    Derived(){
        function();
    }
    void function(){
        cout << "Derived::function()" << endl;
    }
};

int main()
{
    Derived d;
}
