#include<iostream>
using namespace std;

class Laptop{
	private:
		string name;
		int price;
		string processor;
		
	public:
		Laptop(string s)
		{
			cout<<s<<endl;
		}
		
		void setData()
		{
			cout<<"Enter Name\t:";
			cin>>name;
			cout<<"Enter Price\t:";
			cin>>price;
			cout<<"Enter Processor\t:";
			cin>>processor;
		}
		
		void getData()
		{
			cout<<"Laptop Name\t:"<<name<<endl;
			cout<<"Laptop Price\t:"<<price<<endl;
			cout<<"Laptop Processor:"<<processor<<endl;
		}
};

int main()
{
	Laptop l1("welcome to Laptop Shop");
	l1.setData();
	l1.getData();
}
