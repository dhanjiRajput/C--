#include<iostream>
using namespace std;


class Employee
{
	private :
		int id,age,exp;
		string name,role,city,comp;
		double sal;
		
	public :
		
		void input()
		{
			cout <<endl<<endl<< "Enter Employee ID         :";
			cin >> id;
			cout << "Enter Employee Name       :";
			cin >> name;
			cout << "Enter Employee Age        :";
			cin >> age;
			cout << "Enter Employee Role       :";
			cin >> role;
			cout << "Enter Employee Salary     :";
			cin >> sal;
			cout << "Enter Employee City       :";
			cin >> city;
			cout << "Enter Employee Experience :";
			cin >> exp;
			cout << "Enter Employee Company    :";
			cin >> comp;
		}	
		
		void output()
		{
			cout <<endl<<endl<< "Employee ID         :"<<id<<endl
				 << "Employee Name       :"<<name<<endl
				 << "Employee Age        :"<<age<<endl
				 << "Employee Role       :"<<role<<endl
				 << "Employee Salary     :"<<sal<<endl
				 << "Employee City       :"<<city<<endl
				 << "Employee Experience :"<<exp<<endl
				 << "Employee Company    :"<<comp<<endl<<endl; 
		}
};


int main()
{
	Employee e1,e2,e3,e4,e5;
	
	e1.input();
	e2.input();
	e3.input();
	e4.input();
	e5.input();
	
	e1.output();
	e2.output();
	e3.output();
	e4.output();
	e5.output();
}