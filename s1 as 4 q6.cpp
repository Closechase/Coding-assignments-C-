#include <iostream>
#include<string>
using namespace std;
int n;
class Name{
char name[20];
public:
void setName()
{
 cout<<"Enter name:"<<endl;
 cin>>name;
}
void getName()
{
cout<<"Name is "<<name<<endl;
}
};
int main()
{   Name*ptr[100];
    cout<<"Enter the number of names you want to enter"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    ptr[i]=new Name;
    ptr[i]->setName();
    }
    for(int i=0;i<n;i++)
    {
     cout<<"Name"<<i+1<<endl;
     ptr[i]->getName();
    }
    delete ptr[100];
    return 0;
}
