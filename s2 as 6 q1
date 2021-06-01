#include <iostream>
#include<math.h>
using namespace std;
void area(float ap)
{ float z;
  float bp;
  bp=ap;
  z=((sqrt(3))/4)*(bp*bp);
  cout<<"Area of the equilateral triangle is "<<z<<" square units"<<endl;
}
void area(float ap1,float ap2)
{ float x;
 float bp1;
 float bp2;
 bp1=ap1;
 bp2=ap2;
 x=0.5*(bp1*bp2);
 cout<<"Area of the right angled triangle is "<<x<<" square units"<<endl;
}
void area(float l1,float l2, float l3)
{
float c1,c2,c3,y,v;
c1=l1;
c2=l2;
c3=l3;
y=0.5*(c1+c2+c3);
v=sqrt(y*(y-c1)*(y-c2)*(y-c3));
cout<<"Area of the isoceles triangle is "<<v<<" square units"<<endl;
}
int main()
{   float a,h,b,sa,sb,sc;
    cout<<"Enter the length of one side of the equilateral triangle" <<endl;
    cin>>a;
    cout<<"Enter the altitude of the right angled triangle" <<endl;
    cin>>h;
    cout<<"Enter the base of the right angled triangle "<<endl;
    cin>>b;
    cout<<"Enter the length of the equal sides of the isoceles triangle "<<endl;
    cin>>sa;
    sb=sa;
    cout<<"Enter the length of third side of the isoceles triangle "<<endl;
    cin>>sc;
    area(a);
    area(h,b);
    area(sa,sb,sc);
    return 0;
}
