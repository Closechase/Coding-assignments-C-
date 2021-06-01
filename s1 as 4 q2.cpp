#include <iostream>

using namespace std;
class A
{
public:
A()
{
cout<<"Constructing a constructor"<<endl;
}
~A()
{
cout<<"Destructor activated"<<endl;
}

};
int main()
{
   A obj;
    return 0;
}
