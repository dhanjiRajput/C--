#include<iostream>
using namespace std;

class Exception
{
	int age;
	string excep1="Yor Are not able to Vote...!";
	string valid="You Are Eligible for Vote";

	
	public :
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
};

int main()
{
	Exception e1;
	
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
}