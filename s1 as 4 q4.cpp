#include <iostream>
using namespace std;
class A{                                        //q 4 a part pointer to objects
public:
void display()
{
cout<<"I am in obj1"<<endl;
}
};
int main()
{ A obj;
  A*a;
  a=&obj;
  obj.display();
  a->display();
  return 0;
}
