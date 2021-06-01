#include <iostream>
using namespace std;

int main()
{
    int*a;
    float*b;
    a=new int;
    b=new float;
    *a=5;
    *b=3.5;
    cout<<*a<<endl;
    cout<<*b<<endl;
    delete a;
    delete b;
    return 0;
}
