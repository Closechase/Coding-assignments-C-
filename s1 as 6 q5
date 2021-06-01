#include <iostream>
using namespace std;
class Base{
public:
Base()
{
 cout<<"I came to  base class via constructor"<<endl;
}
virtual void disp()=0;
};
class Derived:public Base{
public:
void disp()
{
 cout<<"Abstract classes can have constructors"<<endl;
}
Derived()
{
  cout<<"See for yourself"<<endl;
}

};
int main()
{

    Derived obj;
    obj.disp();
    return 0;
}
