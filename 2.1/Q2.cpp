#include<iostream>
using namespace std;

class Cars
{
	private :
		int id,year;
		string name,color,model;
		
	public :
		
		void input()
		{
			cout <<endl<< "Enter Car ID       :";
			cin >> id;
			cout << "Enter Car Name     :";
			cin >> name;
			cout << "Enter Car Color    :";
			cin >> color;
			cout << "Enter Car Model    :";
			cin >> model;
			cout << "Enter Release Year :";
			cin >> year;
		}	
		
		void output()
		{
			cout <<endl<<endl<< "Car ID           :"<<id<<endl
				 << "Car Name         :"<<name<<endl
				 << "Car Color        :"<<color<<endl
				 << "Car Model        :"<<model<<endl
				 << "Car Release Year :"<<year<<endl<<endl;
		}
};

int main()
{
	Cars c1,c2,c3,c4;
	
	c1.input();
	c2.input();
	c3.input();
	c4.input();
	
	c1.output();
	c2.output();
	c3.output();
	c4.output();
}