#include <iostream>
using namespace std;
class A
{
int a;
public:
void num(int p)
{
 a=p;
}
 A greatest(A op)
 {
  if(op.a>a)
  return op;
  else
  return*this;
 }
 void display()
 {
 cout<<a<<endl;
 }
};
int main()
{    A obj1,obj2,obj3;
     obj1.num(1);
     obj2.num(2);
     obj3=obj1.greatest(obj2);
     obj3.display();
    return 0;
}
