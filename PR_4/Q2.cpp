#include<iostream>
using namespace std;

class Distance
{
	private:
		int km;
		int meter;
		
	public:
		void setData()
		{
			cout<<"Enter Kilometer\t:";
			cin>>km;
			cout<<"Enter Meter\t:";
			cin>>meter;
		}
		
		void getData()
		{
			cout<<"Total Distance is : "<<km<<" Kilometer "<<meter<<" Meter";
		}
		
		Distance operator+(Distance d2)
		{
			Distance tmp;
			
			tmp.km   =km   +d2.km;
			tmp.meter=meter+d2.meter;
			tmp.km   =tmp.km + (tmp.meter/1000);
			tmp.meter=tmp.meter%1000;
			
			return tmp;
		}
		
};

int main()
{
	Distance d1,d2,d3;
	
	d1.setData();
	d2.setData();
	
	d3=d1+d2; //d3=d1.operator+(Distance d2)

	d3.getData();	
}