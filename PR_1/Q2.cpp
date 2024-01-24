#include<iostream>
using namespace std;

class Time
{
	private:
		int second;
		
	public:
		void setData()
		{
			cout<<"Enter Seconds :";
			cin>>second;
		}
		
		int getSecond()
		{
			return second;
		}
};

int main()
{
	int second,hour,mint,sec;
	
	Time t1;
	
	t1.setData();
	
	hour = t1.getSecond()/3600;
	
	mint = (t1.getSecond()%3600)/60;
	
	sec = (t1.getSecond()%3600)%60;
	
	cout <<hour<<" Hour "<<mint<<" Minute "<<sec<<" Second ";
	
}