#include<iostream>
using namespace std;

class Calculator{
	private:
		string excep1="Can't DIvide By Zero";
		int a,b;
	public:
		Calculator()
		{
			cout<<"Enter Value of A :";
			cin>>a;
			cout<<"Enter Value of B :";
			cin>>b;
		}
		
		void Arithmatic()
		{
			if(b==0)
			{
				throw excep1;
			}
			else
			{
				throw a/b;
			}
		}
};

int main()
{
	Calculator c1;
	try{
		c1.Arithmatic();
	}
	catch(int a)
	{
		cout<<"Division is :"<<a;
	}
	catch(string s1)
	{
		cout<<s1<<endl;
	}
}
