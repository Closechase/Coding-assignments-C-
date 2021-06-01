#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
int n;
class Employees{
int*EmployeeId;
string*EmployeeName;
int*EmployeeAge;
int*EmployeeSalary;
public:
Employees(){
EmployeeId=new int[n];
EmployeeName=new string[n];
EmployeeAge=new int[n];
EmployeeSalary=new int[n];
for(int i=0;i<n;i++)
{
cout<<"Enter the employee id"<<endl;
cin>>EmployeeId[i];
cout<<"Enter the employee name"<<endl;
cin.ignore();
getline(cin,EmployeeName[i]);
cout<<"Enter the employee age"<<endl;
cin>>EmployeeAge[i];
cout<<"Enter the employee salary"<<endl;
cin>>EmployeeSalary[i];
}
for(int i=0;i<n;i++)
{
cout<<"employee id "<<EmployeeId[i]<<endl;
cout<<"employee name "<<EmployeeName[i]<<endl;
cout<<"employee age "<<EmployeeAge[i]<<endl;
cout<<"employee salary "<<EmployeeSalary[i]<<endl;
}
delete[]EmployeeId;
delete[]EmployeeName;
delete[]EmployeeAge;
delete[]EmployeeSalary;
}
};
int main()
{
    cout << "Enter the number of employees" << endl;
    cin>>n;
    Employees*ptr=new Employees();
    delete ptr;


    return 0;
}
