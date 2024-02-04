#include<iostream>
using namespace std;

class Train
{
	int no;
	string name;
	string source;
	string desti;
	string time;
	
	public :
		void setdata()
		{
			cout <<endl<<endl<< "Enter Train Number      :";
			cin >> no;
			cout << "Enter Train Name        :";
			cin >> name;
			cout << "Enter Train Source      :";
			cin >> source;
			cout << "Enter Train Destination :";
			cin >> desti;
			cout << "Enter Train Timimngs    :";
			cin >> time;
		}
		
		void table()
		{
			cout << "============================================================="<<endl;
			cout << "Number\tName\tSource\tDestination\tTimings"<<endl;	
		}
		
		void getdata()
		{
			cout <<no<<"\t"<<name<<"\t"<<source<<"\t"<<desti<<"\t\t"<<time<<endl;
		}
		
		int searchdata(int n)
		{
			if(n==no)
			{
				cout << "Number\tName\tSource\tDestination\tTimings"<<endl;
				cout <<no<<"\t"<<name<<"\t"<<source<<"\t"<<desti<<"\t\t"<<time<<endl;
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	int n,i,n1,check;
	
	cout << "Enter Number of Records :";
	cin >> n;
	
	Train t1[n],t2;
	
	for(i=0;i<n;i++)
	{
		t1[i].setdata();
	}
	
	t2.table();
	
	for(i=0;i<n;i++)
	{
		t1[i].getdata();
	}
	
	cout << "Enter Train Number :";
	cin >> n1;
	
	for(i=0;i<n;i++)
	{
		check = t1[i].searchdata(n1);
	}
	
	if(check==0)
	{
		cout <<endl<<endl<< "Data Not Found Try Again";
	}
}