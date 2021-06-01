#include <iostream>

using namespace std;
class Sum
{
public:
int Add(int a,int b,int c)
{
return (a+b+c);
}
int Add(int d,int e)
{
return (d+e);
}
};
int main()
{   int j,k;
    Sum obj1,obj2;
   k=obj1.Add(1,2);
   cout<<"sum of the first two natural numbers is "<<k<<endl;
   j=obj2.Add(1,2,3);
   cout<<"sum of the first three natural numbers is "<<j<<endl;

    return 0;
}
