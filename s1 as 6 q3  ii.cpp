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
      Derived(){
      cout<<"This is derived constructor"<<endl;
      }
      void show(){
  cout<<"Derived class"<<endl;
 }
};
int main()
{   Base*b=new Derived();  //while allocating memory the constructor of derived is called before the show function so we have two outputs
    b->show();
    return 0;
    /*Output:
    This is derived constructor
    In base class*/
}

