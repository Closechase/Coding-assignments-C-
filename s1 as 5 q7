#include <iostream>
using namespace std;
class Base
{
public:
virtual void display()
{
cout<<"I am in base class"<<endl;
}
};
class Derived:public Base{
void display()
{
cout<<"I am in derived class"<<endl;
}
};
int main()
{
    Derived obj;
    Base*b;
    b=&obj;
    b->display();
    return 0;
}
