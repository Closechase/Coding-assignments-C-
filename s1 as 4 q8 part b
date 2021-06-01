#include <iostream>

using namespace std;
class A
{ int a=12;
public:
friend class B;
};
class B{
 int b=12;
public:
int add()
{
A obj;
return (obj.a+b);
}

};
int main()
{  int c;
   B o;
   c=o.add();
   cout<<c<<endl;
   return 0;
}
