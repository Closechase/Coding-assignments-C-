#include <iostream>

using namespace std;
class A
{
int d,e,f;
public:
 A()
   {
    cout<<"This is no argument constructor"<<endl;
   }
 A(int a)
 {
 d=a;
 cout<<d<<endl;
 }
 A(int b,int c)
 {
 e=b;
 f=c;
 cout<<e<<ends<<f<<endl;
 }
 A(A &obj1)
 {
  d=obj1.d;
 }
 void disp()
 {
  cout<<"This is the copied value:"<<d<<endl;
 }
};
int main()
{
A obj;
A obj1(1);
A obj2(2,3);
A obj3=obj1;
obj3.disp();
return 0;
}

