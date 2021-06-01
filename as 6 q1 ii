#include <iostream>

using namespace std;
class A
{
public:
virtual  void func()
{
cout<<"I am in class A"<<endl;
}
};
class B:public A
{
public:
 void func()
{
 cout<<"This is called function overriding  I am in class B"<<endl;
}
};
int main()
{   A obj;
    B obj2;
    A*b;
    b=&obj2;
    b->func();
    return 0;
}
