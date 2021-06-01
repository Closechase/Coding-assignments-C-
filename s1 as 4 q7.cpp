#include <iostream>
using namespace std;
class Abc
{
    int i;
    public:
    Abc()
    {
        i=0;
        cout << "constructor"<<endl;
    }
    ~Abc()
    {
        cout << "destructor"<<endl;
    }
};
void f()
{
    static Abc obj;                      //static object does not have a this pointer
}
int main()
{
    int x=0;
    if(x==0)
    {
        f();
    }
    cout << "END"<<endl;
}
