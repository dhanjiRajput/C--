#include<iostream>
using namespace std;

class Multiple_Overload
{
	private:
		int a,b;
	public:
		void setData()
		{
			cout<<"Enter A :";
			cin>>a;
			cout<<"Enter B :";
			cin>>b;
		}
		
		void getdata()
		{
			cout<<endl<<"A : "<<a<<endl;
			cout<<"B : "<<b;
		}
		
		Multiple_Overload operator+(Multiple_Overload add)
		{
			Multiple_Overload tmp;
			
			tmp.a=a+add.a;
			tmp.b=b+add.b;
			
			return tmp;
		}
		
		Multiple_Overload operator-(Multiple_Overload sub)
		{
			Multiple_Overload tmp;
			
			tmp.a=a-sub.a;
			tmp.b=b-sub.b;
			
			return tmp;
		}
		
		Multiple_Overload operator*(Multiple_Overload mul)
		{
			Multiple_Overload tmp;
			
			tmp.a=a*mul.a;
			tmp.b=b*mul.b;
			
			return tmp;
		}
		
		Multiple_Overload operator/(Multiple_Overload div)
		{
			Multiple_Overload tmp;
			
			tmp.a=a/div.a;
			tmp.b=b/div.b;
			
			return tmp;
		}
		
		Multiple_Overload operator%(Multiple_Overload mod)
		{
			Multiple_Overload tmp;
			
			tmp.a=a%mod.a;
			tmp.b=b%mod.b;
			
			return tmp;
		}
};

int main()
{
	Multiple_Overload m1,m2,add,sub,mul,div,mod;
	
	m1.setData();
	m2.setData();
	
	cout<<endl<<"Addition Of Two Object"<<endl;
	add=m1+m2; // add= m1.operator+(Multiple_Overload m2)
	add.getdata();
	
	cout<<endl<<"Subtraction Of Two Object"<<endl;
	sub=m1-m2; //sub=m1.operator-(Multiple_Overload m2)
	sub.getdata();
	
	cout<<endl<<"Multiplication of Two Object"<<endl;
	mul=m1*m2; //mul=m1.operator*(Multiple_Overload m2)
	mul.getdata();
	
	cout<<endl<<"Division of Two Object"<<endl;
	div=m1/m2; //div=m1.operator/(Multiple_Overload m2)
	div.getdata();
	
	cout<<endl<<"Modulo of Two Object"<<endl;
	mod=m1%m2; //mod=m1.operator%(Multiple_Overload m2)
	mod.getdata();
}