#include <iostream>
using namespace std;   //single inheritance
class A
{
 public:
 A()
 {cout<<"This is class A"<<endl;}
};
class C
{
 public:
 C()
 {
  cout<<"This is class C"<<endl;
 }
};
class B:public A,public C{
 public:
 B()
 {cout<<"This is class B"<<endl;}

};
int main()
{ B obj;//constructor of class A is called before class B
 return 0;
}
