#include <iostream>
using namespace std;
class A{
public:
int a=12;
};
class B:public A{
public:
int b=13;
};
class C:public A{
public:
int c=14;
};
class D:public B,public C
{
public:
D()
{
    cout<<B::a<<ends<<b<<ends<<c;}
};
int main()
{  D obj;
 return 0;
}
