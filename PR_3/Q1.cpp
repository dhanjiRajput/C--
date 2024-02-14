#include<iostream>
using namespace std;

class Shape
{
	protected:
		float height,width;
	public:
		Shape()
		{
			cout<<"Enter Height :";
			cin>>height;
			cout<<"Enter Width  :";
			cin>>width;
		}
};

class Rectangle:public Shape
{
	private:
		float area;
	public:
		void R_getData()
		{
			area=height*width;
			cout<<"Your Area Of Rectangle is : "<<area<<endl<<endl;
		}
};

class Triangle:public Shape
{
	private:
		float area;
	public:
		void R_getData()
		{
			area=(height*width)/2;
			cout<<"Your Area Of Rectangle is : "<<area;
		}	
};

int main()
{
	cout<<"Enter Value to Calculate Area of Rectangle:"<<endl<<endl;
	Rectangle r1;
	cout<<"Enter Value to Calculate Area of Triangle :"<<endl<<endl;
	Triangle t1;
	r1.R_getData();
	t1.R_getData();
}