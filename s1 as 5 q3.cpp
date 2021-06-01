#include <iostream>
using namespace std;
class Base{
private:
int a=12;
protected:
int b=13;
public:
int c=14;
};
class Derived1:public Base
{ public:
  Derived1()
  {
   //cout<<a<<endl; private variable not accesible
   cout<<b<<endl;//protected accessible
   cout<<c<<endl;//public accesible
  }
};
  class Derived2:protected Base
{
  public:;
  Derived2()
  {
   //cout<<a<<endl;//private variable not accesible
   cout<<b<<endl;//protected accessible
   cout<<c<<endl;//public accesible
  }
};
 class Derived3:private Base
{
  public:;
  Derived3()
  {
   //cout<<a<<endl;//private variable not accesible
   cout<<b<<endl;//protected accessible
   cout<<c<<endl;//public accesible
  }
};
int main()
{
  Derived1 obj;
  Derived2 obj2;
  Derived3 obj3;
  return 0;
}
