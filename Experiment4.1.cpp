#include<iostream>
using namespace std;
 
 class Employee
 {
 	int empId;
 	string name;
 	float salary;
 	
 	public:
 		Employee()
 		{
 			empId=101;
 			name="Omkar";
 			salary=50000;
		 }
		 void display()
		 {
		 	cout<<"EmployeeId:"<<empId<<endl;
		 	cout<<"Name:"<<name<<endl;
		 	cout<<"Salary:Rs"<<salary<<endl;
		 	
		 }
 };
      int main()
      {
      	Employee e1;
      	e1.display();
      	return 0;
	  }