#include <iostream>
using namespace std;
class Base
{ public:
 void show()
 {
  cout<<"Base class"<<endl;
 }
};
class Derived:public Base{

  public:
      void show(){ //Only base class constructor is called so only one output
  cout<<"Derived class"<<endl;
 }
};
int main()
{   Base*b=new Base();
    b->show();
    return 0;
    //Output:In base class
}
