#include <iostream>
using namespace std;
class Complex{
int imag,real;
public:
void getdata(int a,int b)
{
real=a;
imag=b;
}
Complex sum(Complex k)
{
 real=real+k.real;
 imag=imag+k.imag;
 return*this;
}
void display()
{
    cout<<real<<"+"<<imag<<"i"<<endl;

}

};
int main()
{   int a,b,c,d;
    Complex obj1,obj2,obj3;
    cout<<"Enter real part of complex number 1:"<<endl;
    cin>>a;
     cout<<"Enter imaginary part of complex number 1:"<<endl;
    cin>>b;
    obj1.getdata(a,b);
    cout<<"Enter real part of complex number 2:"<<endl;
    cin>>c;
    cout<<"Enter imaginary part of complex number 1:"<<endl;
    cin>>d;
    obj2.getdata(c,d);
    obj3=obj1.sum(obj2);
    cout<<"Ans is :";
    obj3.display();
   // cout<<obj3.real<<"+"<<obj3.imag<<"i"<<endl;

}
