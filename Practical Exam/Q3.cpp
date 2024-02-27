#include<iostream>
using namespace std;

class Shape
{
	protected:
		float r;
	public:
		Shape()
		{
			cout<<"Enter Value";
			cin>>r;
		}
		virtual float calculate()=0;
};

class Rectangle:public Shape{
	public:
		float calculate()
		{
			return r*r;
		}
};

class Circle:public Shape{
	public:
		float calculate()
		{
			return 3.14*r*r;
		}
};

int main()
{
	cout<<"Rectangle"<<endl;
	Rectangle r1;
	cout<<"Area of Rectangle"<<r1.calculate()<<endl<<endl;
	
	cout<<"Circle"<<endl;
	Circle c1;
	cout<<"Area of Circle"<<c1.calculate();
}

