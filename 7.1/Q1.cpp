#include<iostream>
using namespace std;

class Exception
{
	int a,b,div,age;
	string pass;
	string excep="Can't divide by ZERO...!";
	string excep1="Yor Are not able to vote...!";
	string valid="You Are Eligible for what";
	string pass1="Your Password is Right";
	string pass2="Must Contain Upper Case";

	
	public :
		void number()
		{
			cout<<"Enter Value of A :";
			cin>>a;
			cout<<"Enter Value of B :";
			cin>>b;
		
			if(b==0)
			{
				throw excep;
			}
			else
			{
				throw a/b;
			}
		}
		void vote()
		{
			cout<<"Enter Your Age :";
			cin>>age;
			
			if(age<18)
			{
				throw excep1;
			}
			else
			{
				throw valid;
			}
		}
		
		void password()
		{
			cout<<"Enter Your Password :";
			cin>>pass;
			
			for(int i=0;pass[i]!='\0';i++)
			{
				if(pass[i]>='a'&&pass[i]<='z' && pass[i]>='A'&&pass[i]<='Z')
				{
					throw pass1;
				}
				else
				{
					throw pass2;	
				}
			}
		}
};

int main()
{
	Exception e1;
	
	try
	{
		e1.number();
	}
	catch(int i)
	{
		cout<<endl<<"Division : "<<i<<endl;
	}
	catch(string s)
	{
		cout<<endl<<s<<endl;
	}
	
	try
	{
		e1.vote();
	}
	catch(string s1)
	{
		cout<<endl<<s1<<endl;
	}
	catch(string s2)
	{
		cout<<endl<<s2<<endl;
	}
	
	try
	{
		e1.password();
	}
	catch(string s3)
	{
		cout<<endl<<s3<<endl;
	}
	catch(string s4)
	{
		cout<<endl<<s4<<endl;
	}
}