#include<iostream>
using namespace std;

class Customer
{
	private:
		int id,age,year;
		long long int mobile;
		string name,city,brand;	
		
	public:
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
		
		void setBrand()
		{
			int category;
			cout<<"\tPress 1. for IDEA"<<endl;
			cout<<"\tPress 2. for AIRTEL"<<endl;
			cout<<"\tPress 3. for JIO"<<endl;
			cout<<"\tPress 4. for BSNL"<<endl;
			
			rev:
				cout<<"\tSelect Category :";
				cin>>category;
				
				switch(category)
				{
					case 1:
						brand="IDEA";
						break;
					case 2:
						brand="AIRTEL";
						break;
					case 3:
						brand="JIO";
						break;
					case 4:
						brand="BSNL";
					default:
						cout<<"Enter agian Your Right Choice"<<endl;
						goto rev;
				}
			
		}
		
		void setData()
		{
			cout<<"Enter Customer ID\t:";
			cin>>id;
			setName();
			setAge();
			cout<<"Enter Customer City\t:";
			cin>>city;
			cout<<"Enter Customer Mobile\t:";
			cin>>mobile;
			cout<<"SIM Card Validity(Years):";
			cin>>year;
			cout<<"Telecome Brand Name\t:"<<endl;
			setBrand();
		}
		
		void getData()
		{
			cout<<"Customer ID\t\t:"<<id<<endl;
			cout<<"Customer Name\t\t:"<<name<<endl;
			cout<<"Customer Age\t\t:"<<age<<endl;
			cout<<"Customer City\t\t:"<<city<<endl;
			cout<<"Customer Mobile\t\t:"<<mobile<<endl;
			cout<<"SIM Card Validity\t:"<<year<<endl;
			cout<<"Telecome Brand Name\t:"<<brand<<endl;
		}
};

int main()
{
	int i,n;
	cout<<"Enter How much Record You Want :";
	cin>>n;
	
	Customer c1[n];
	
	for(i=0;i<n;i++)
	{
		c1[i].setData();
	}
	
	for(i=0;i<n;i++)
	{
		c1[i].getData();
	}
}