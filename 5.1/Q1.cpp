#include<iostream>
using namespace std;

class Arithmatic
{
	public:
		void Action(int a,int b)
		{
			cout<<"Division is :"<<a/b<<endl<<endl;
		}	
		
		void Action(int a,int b,int c)
		{
			cout<<"SUbtraction is :"<<a-b-c<<endl<<endl;
		}
		
		void Action(int a,int b,int c,int d)
		{
			cout<<"Multiplication is :"<<a*b*c*d<<endl<<endl;
		}	
		
		void Action(int a,int b,int c,int d,int e)
		{
			cout<<"Addition is :"<<a+b+c+d+e<<endl<<endl;
		}
};

int main()
{
	Arithmatic a1;
	a1.Action(10,10);
	a1.Action(10,10,10);
	a1.Action(10,10,10,10);
	a1.Action(10,10,10,10,10);
}