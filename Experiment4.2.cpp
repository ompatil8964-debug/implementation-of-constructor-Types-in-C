#include<iostream>
using namespace std;

 class Employee
 {
 	int empId;
 	string name;
 	float salary;
 	
 	 public:
 	 	Employee(int Id,string n,float s)
 	 	{
 	 		empId=Id;
 	 		name=n;
 	 		salary=s;
		  }
		  void display()
		  {
		  	cout<<"EmployeeId:"<<empId<<endl;
		  	cout<<"Name:"<<name<<endl;
		  	cout<<"salary:Rs"<<salary<<endl;
		  }
 };
   int main()
   {
   	Employee e1(101,"Omkar",50000);
   	e1.display();
   	return 0;
   }