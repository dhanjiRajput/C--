#include<iostream>
using namespace std;

class Dist
{
	private :
		int feet;
		int inch;	
		
	public:
		void setData()
		{
			cout<<"Enter Feet :";
			cin>>feet;
			cout<<"Enter Inch :";
			cin>>inch;
		}
		
		int getFeet()
		{
			return feet;
		}
		
		int getInch()
		{
			return inch;
		}
};

int main()
{
	int feet;
	int inch;
	
	Dist d1,d2;
	d1.setData();
	d2.setData();
	
	feet = d1.getFeet()+d2.getFeet();
	
	inch = d1.getInch()+d2.getInch();
	
	feet = feet + (inch/12);
	
	inch = inch%12;
	
	cout<<feet<<" Feet "<<inch<<" Inch ";
}