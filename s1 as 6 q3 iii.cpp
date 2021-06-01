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
{   Derived*d=new Base();
    d->show();
    return 0;
    //Output : Compilation error as base class can allocate memory to derived class but reverse cannot happen as inheritance works from top to bottom
}
