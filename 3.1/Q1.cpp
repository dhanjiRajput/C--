#include<iostream>
using namespace std;

class Student
{
	private:
		int id,age;
		string name,course,city,email,college;
		
	public:
		void setCourse()
		{
			int category;
			cout<<"\tPress 1. for B.C.A."<<endl;
			cout<<"\tPress 2. for P.G.D.C.A."<<endl;
			cout<<"\tPress 3. for I.T.U.S."<<endl;
			cout<<"\tPress 4. for B.B.A."<<endl;
			
			rev:
				cout<<"\tSelect Category :";
				cin>>category;
				
				switch(category)
				{
					case 1:
						course="B.C.A";
						break;
					case 2:
						course="P.G.D.C.A.";
						break;
					case 3:
						course="I.T.U.S";
						break;
					case 4:
						course="B.B.A.";
					default:
						cout<<"Enter agian Your Right Choice"<<endl;
						goto rev;
				}
			
		}
		
		void setAge()
		{
			rev:
			int age1;
			cout<<"Enter Student Age\t:";
			cin>>age1;
			if(age1>=18 && age1<=30)
			{
				age=age1;
			}
			else
			{
				cout<<"Enter Age Must between 18  and 30"<<endl;
				goto rev;
			}
		}
		
		void setName()
		{
			cout<<"Enter Student Name\t:";
			cin>>name;
			for(int i=0;name[i]!='\0';i++)
			{
				if(name[0]>=97 && name[0]<=122)
				{
					name[0]=name[0]-32;
				}
			}
		}
		
		
		void setData()
		{
			cout<<"Enter Student ID\t:";
			cin>>id;
			setName();
			setAge();
			cout<<"Enter Student Course\t:\n";
			setCourse();
			cout<<"Enter Student City\t:";
			cin>>city;
			cout<<"Enter Student E-Mail\t:";
			cin>>email;
			cout<<"Enter Student College\t:";
			cin>>college;
			cout<<endl<<endl;
		}
		
		void getData()
		{
			cout<<"Student ID\t:"<<id<<endl;
			cout<<"Student Name\t:"<<name<<endl;
			cout<<"Student Age\t:"<<age<<endl;
			cout<<"Student Course\t:"<<course<<endl;
			cout<<"Student City\t:"<<city<<endl;
			cout<<"Student E-Mail\t:"<<email<<endl;
			cout<<"Student College\t:"<<college<<endl;
		}
};

int main()
{
	int n,i;
	cout<<"Enter Number Of Records You Want :";
	cin>>n;
	
	Student s1[n];
	
	for(i=0;i<n;i++)
	{
		s1[i].setData();
	}
	
	for(i=0;i<n;i++)
	{
		s1[i].getData();
	}
}