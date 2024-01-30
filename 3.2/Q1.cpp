#include<iostream>
using namespace std;

class Hotels
{
	private:
		int id,year,staff,room;
		string name,type,rating,location;
		static int idcount;
	public:
		
		void setRecords(int index,int n)
		{
			cout<<endl<<"Current Records OF Hotels : "<<index+1<<" / "<<n<<endl<<endl;
		}
		
		void setdata()
		{
			id=idcount++;
			cout<<"Enter Hotel Name\t\t: ";
			cin>>name;
			cout<<"Enter Hotel Type\t\t: ";
			cin>>type;
			cout<<"Enter Hotel Rating\t\t: ";
			cin>>rating;
			cout<<"Enter Hotel Location\t\t: ";
			cin>>location;
			cout<<"Enter Hotel Staff Quantity\t: ";
			cin>>staff;
			cout<<"Enter Hotel Room Quantity\t: ";
			cin>>room;
		}
		
		void getdata()
		{
			cout <<endl<< "Hotel ID\t\t: "<<id<<endl
				 << "Hotel Name\t\t: "<<name<<endl
				 << "Hotel Type\t\t: "<<type<<endl
				 << "Hotel Ratings\t\t: "<<rating<<endl
				 << "Hotel Location\t\t: "<<location<<endl
				 << "Hotel Staff Quantity\t: "<<staff<<endl
				 << "Hotel Room Quantity\t: "<<room<<endl;
		}
};

int Hotels::idcount=101;

int main()
{
	int n,i;
	cout<<"Enter Number Of Hotels Records you want : ";
	cin>>n;
	
	Hotels h1[n],h;
	
	for(i=0;i<n;i++)
	{
		system("cls");
		h.setRecords(i,n);
		h1[i].setdata();
	}
	
	system("cls");
	
	for(i=0;i<n;i++)
	{
		h1[i].getdata();
	}
}