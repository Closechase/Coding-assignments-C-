#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
class Publication{
public:
string title;
float price;

};
class Book:public Publication
{
public:
int pages;
void get_data()
{
    cout << "Enter the title"<<endl;
    cin.ignore();
    getline(cin,title);
    cout<<"Enter the price"<<endl;
    cin>>price;
    cout<<"Enter the number of pages"<<endl;
    cin>>pages;
}
void put_data(){
cout<<"title: "<<title<<endl;
cout<<"price: "<<price<<endl;
cout<<"pages: "<<pages<<endl;
}
};
class Tape:public Publication
{
public:
float minutes;
public:
void get_data()
{
cout << "Enter the title"<<endl;
     cin.ignore();
    getline(cin,title);
    cout<<"Enter the price"<<endl;
    cin>>price;
    cout<<"Enter the number of minutes"<<endl;
    cin>>minutes;
}
void put_data(){
cout<<"title: "<<title<<endl;
cout<<"price: "<<price<<endl;
cout<<"minutes: "<<minutes<<endl;
}
};
int main()
{   Book obj1;Tape obj2;
    int z;
    cout<<"Enter 1 for book or 2 for Cassete"<<endl;
    cin>>z;
    switch(z)
    {
    case 1:
    obj1.get_data();
    obj1.put_data();
    break;
    case 2:
    obj2.get_data();
    obj2.put_data();
    break;
    default:
    cout<<"Enter a valid choice:"<<endl;
    break;
    }
    return 0;
}
