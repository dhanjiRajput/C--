#include<iostream>
using namespace std;

class Number
{
	protected:
		double num;
	public:
		Number()
		{
			cout<<"Enter Any Number :";
			cin>>num;
		}
};

class Square_Cube:public Number
{
	public:
		void S_getData()	
		{
			cout<<"The Square of this Number is : "<<num*num<<endl<<endl;
		}
		
		void C_getData()
		{
			cout<<"The Cube of this Number is   : "<<num*num*num;
		}
};

int main()
{
	Square_Cube sc1;
	sc1.S_getData();
	sc1.C_getData();
}