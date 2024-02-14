#include<iostream>
using namespace std;

class Operator_Overload
{
	private:
		int a;
	public:
		void setData()
		{
			cout<<"Enter Class value :";
			cin>>a;
		}
		
		void getData()
		{
			cout<<"Entered Value is :"<<a;
		}
		
		Operator_Overload operator>(Operator_Overload o2)
		{
			if(a>o2.a)
			{
				cout<<"Object 1 is Maximum";
			}
			else
			{
				cout<<"Object 2 is Maximum";
			}
		}
};

int main()
{
	Operator_Overload o1,o2;
	
	o1.setData();
	o2.setData();
	
	o1>o2;
}