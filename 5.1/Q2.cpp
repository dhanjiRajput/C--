#include<iostream>
using namespace std;

class Cricket
{
	protected:
		int over;
	public:
		void setData()
		{
			cout<<"Enter Over :";
			cin>>over;
		}	
		void getData()
		{
			cout<<"Home Cricket Over is :"<<over<<endl<<endl;
		}
};

class T20_match:public Cricket
{
	public:
		void getData()
		{
			cout<<"T20 match Over is : 20"<<endl<<endl;
		}	
};

class Test_match:public Cricket
{
	public:
		void getData()
		{
			cout<<"Test match Over is : 90"<<endl<<endl;
		}		
};

int main()
{
	Cricket c1;
	c1.setData();
	c1.getData();
	
	T20_match t1;
	t1.setData();
	t1.getData();
	
	Test_match te1;
	te1.setData();
	te1.getData();
}