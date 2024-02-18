#include<iostream>
using namespace std;

class Admin
{
	protected:
		static string Comp_Name;
		double man_sal,emp_sal,staff;
		
	private:
		string terminate;
		long long int revenue;
		
	public:
		void setdata()
		{
			cout<<"Enter Manager Salary\t: ";
			cin>>man_sal;
			cout<<"Enter Employee Salary\t: ";
			cin>>emp_sal;
			cout<<"Enter Number Of Staff\t: ";
			cin>>staff;
			cout<<"Enter Company Revenue\t: ";
			cin>>revenue;
			cout<<"Can Terminate(Yes/No)\t: ";
			cin>>terminate;
		}
		
		void My_Access()
		{
			cout<<endl<<"Admin Can see this Data"<<endl;
			cout<<"==================================================="<<endl;
			cout<<"Company Name\t:"<<Comp_Name<<endl;
			cout<<"Manager Salary\t:"<<man_sal<<endl;
			cout<<"Employee Salary\t:"<<emp_sal<<endl;
			cout<<"Number Of Staff\t:"<<staff<<endl;
			cout<<"Company Revenue\t:"<<revenue<<endl;
			cout<<"Terminate\t:"<<terminate<<endl<<endl;
		}
};

string Admin::Comp_Name="Mauni International School";

class Manager : protected Admin
{
	public:
		void My_Access()
		{
			Admin::setdata();
			Admin::My_Access();
			cout<<endl<<"Manager Can See this Data"<<endl;
			cout<<"==================================================="<<endl;
			cout<<"Company Name\t:"<<Comp_Name<<endl;
			cout<<"Manager Salary\t:"<<man_sal<<endl;
			cout<<"Employee Salary\t:"<<emp_sal<<endl;
			cout<<"Number Of Staff\t:"<<staff<<endl<<endl;		
		}
};

class Employee : private Manager
{
	public:
		void My_Access()
		{
			Manager::My_Access();
			cout<<endl<<"Employee Can See this Data"<<endl;
			cout<<"==================================================="<<endl;
			cout<<"Company Name\t:"<<Comp_Name<<endl;
			cout<<"Employee Salary\t:"<<emp_sal<<endl<<endl;
		}
};

int main()
{
	Admin a1;
	Manager m1;
	Employee e1;
	
	e1.My_Access();	
}