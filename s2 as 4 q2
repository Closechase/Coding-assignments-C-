#include <iostream>
using namespace std;
class Employees{
int Employeeid,Employeeage,Employeesalary;
char Employeename[25];
public:
void inputInfo(){
cout<<"Enter the employee id:"<<endl;
cin>>Employeeid;
cout<<"Enter the employee name:"<<endl;
cin>>Employeename;
cout<<"Enter the employee age:"<<endl;
cin>>Employeeage;
cout<<"Enter the employee salary:"<<endl;
cin>>Employeesalary;
}
void displayInfo()
{
cout<<"Employee id:"<<Employeeid<<endl;
cout<<"Employee name:"<<Employeename<<endl;
cout<<"Employee age:"<< Employeeage<<endl;
cout<<"Employee salary:"<<Employeesalary<<endl;
}

};
int main()
{
 int n;
 cout<<"Enter the number of Employees"<<endl;
 cin>>n;
 Employees obj[n];
 for(int i=0;i<n;i++)
 {
 obj[i].inputInfo();
 }
 for(int i=0;i<n;i++)
 {
 obj[i].displayInfo();
 }
 return 0;
}
