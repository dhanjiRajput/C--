#include<iostream>
using namespace std;

class Message
{
	private:
		string name;
		
	public:
		Message()
		{
			cout<<endl<<"Enter Your Name\t:";
			cin>>name;
		}

		void print()
		{
			if(name[0]>=97 && name[0]<=122)
			{
				name[0]=name[0]-32;
			}
			cout<<endl<<"Your Name\t:"<<name<<endl;
		}
		
		void print(string name1)
		{
			if(name1[0]>=97 && name1[0]<=122)
			{
				name1[0]=name1[0]-32;
			}
			cout<<endl<<"Your Full Name\t:"<<name<<" "<<name1;
		}
};

int main()
{
	Message m1;
	string sname;
	
	cout<<"Enter SurName\t:";
	cin>>sname;
	
	m1.print();
	m1.print(sname);
}