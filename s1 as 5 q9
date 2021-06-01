#include<iostream>
using namespace std;
class A
{
public:
    A() { a = new int; }
    virtual ~A() { delete a; }

private:
    int *a;
};

class B : public A
{
public:
    B() { b = new int; }
    virtual ~B() { delete b; }

private:
    int *b;
};

int main()
{
    A *a = new B();
    delete a;
}
