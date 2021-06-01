#include <iostream>
using namespace std;
class A
{
 int a;
 public:
 friend void setter(int ,int );
};
class B
{ int k=12;
public:
friend class C;
};
class C{
 int l=12;
public:
int add()
{
B obj;
return (obj.k+l);
}

};
void setter(int a,int b)
            {
             cout<<a<<ends<<b<<endl;
            }
int main()
{   setter(1,2);
     int c;
   C o;
   c=o.add();
   cout<<c<<endl;
    return 0;
}



