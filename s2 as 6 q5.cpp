#include <iostream>
using namespace std;
class numbers{
int a,b;
public:
numbers(int x,int y)
{
 a=x;
 b=y;}
numbers(numbers &num1)
{
 a=num1.a;
 b=num1.b;
}
void display()
             {
              cout<<a<<" "<<b<<endl;
             }

};
int main()
{   cout<<"Setting and printing the initial values"<<endl;
    numbers num1(1,2);
    num1.display();
    numbers num2=num1;
    cout << "Copying and printing the values " << endl;
    num2.display();
    return 0;
}
