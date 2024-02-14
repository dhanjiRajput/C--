#include<iostream>
using namespace std;

class A
{
	protected :
		int id;
		string name;
		string role;
		int salary;
		int exp;
		string cname;
		string add;
		string email;
		double mob;
	
	public :
		void setdataA()
		{
			cout << "Enter Employee ID\t\t:";
			cin >> id;
			cout << "Enter Employee Name\t\t:";
			cin >> name;
			cout << "Enter Employee Role\t\t:";
			cin >> role;
		}	
};

class B : public A
{
	public :
		void setdataB()
		{
			cout << "Enter Employee Salary\t\t:";
			cin >> salary;
			cout << "Enter Employee Experience\t:";
			cin >> exp;
		}	
};

class C : public B
{
	public :
		void setdataC()
		{
			cout << "Enter Company Name\t\t:";
			cin >>cname;
			cout << "Enter Employee Address\t\t:";
			cin >>add;
		}
		
		void getdataC()
		{
			cout <<"Employee Name\t\t\t: "<<name<<endl;
			cout <<"Employee Role\t\t\t: "<<role<<endl;
			cout <<"Employe Salary\t\t\t: "<<salary<<endl;
		}	
};

class D : public C
{
	public :
		void setdataD()
		{
			cout <<"Enter Employee E-mail\t\t:";
			cin >> email;
			cout <<"Enter Mobile Number\t\t:";
			cin >> mob;
		}	
		
		void getdataD()
		{
			cout << "Employee ID\t\t\t:"<<id<<endl;
			cout << "Employee Experience\t\t:"<<exp<<endl;
			cout << "Employee Company Name\t\t:"<<cname<<endl;
			cout << "Employee Address\t\t:"<<add<<endl;
			cout << "Employee E-mail\t\t\t:"<<email<<endl;
			cout << "Employee Mobile Number\t\t:"<<mob<<endl;		
		}
};

int main()
{
	D d1;
	d1.setdataA();
	d1.setdataB();
	d1.setdataC();
	d1.setdataD();
	
	d1.getdataC();
	d1.getdataD();
}

