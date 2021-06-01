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
      cout<<"This is derived constructor"<<endl;//Destructor will be called first then show function is called
      }
      void show(){
  cout<<"Derived class"<<endl;
 }
};
int main()
{   Derived*d=new Derived();
    d->show();
    return 0;
}
/*OUTPUT:
 This is a derived constructor
 Derived class
*/
