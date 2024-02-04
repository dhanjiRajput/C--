#include<iostream>
using namespace std;

class Billing
{
	int no;
	string name;
	int quant;
	int price;
	int disc;
	int disc1;
	int total;
	int gtotal;
	
	public :
		void setdata()
		{
			cout <<endl<<endl<< "Enter Item Number :";
			cin >> no;
			cout << "Enter Item Name   :";
			cin >> name;
			cout << "Enter Quantity    :";
			cin >> quant;
			cout << "Enter Item Price  :";
			cin >> price;
			cout << "Enter Discount    :";
			cin >> disc; 
		}
		
		void table()
		{
			cout <<endl<<endl<< "================================Bill================================"<<endl;
			cout << "Number\tName\tQuantity\tPrice\tDiscount\tTotal"<<endl;
		}
		void getdata()
		{
			total=price*quant;
			disc1=(total*disc)/100;
			gtotal=total-disc1;
			cout <<no<<"\t"<<name<<"\t"<<quant<<"\t\t"<<price<<"\t"<<disc1<<"\t\t"<<gtotal<<endl;
		}
		
		int searchData(int n)
		{
			if(n==no)
			{
				cout << "Number\tName\tQuantity\tPrice\tDiscount\tTotal"<<endl;
				cout <<no<<"\t"<<name<<"\t"<<quant<<"\t\t"<<price<<"\t"<<disc1<<"\t\t"<<gtotal<<endl;
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
	int n,i,n1,check,cmp=0;
	string name="kidechadhanji@gmail.com";
	string pass="kidechadhanji";
	
	string name1;
	string pass1;
	
	cout <<endl<<endl<< "Enter Number of Records :";
	cin >> n;
	cout <<"=========================================================="<<endl<<endl;
	
	Billing b1[n],b2;
	
	for(i=0;i<n;i++)
	{
		b1[i].setdata();
	}
	
	cout <<endl<<endl<< "Enter User Name :";
	cin >> name1;
	cout << "Enter PassWord  :";
	cin >> pass1;
	
	for(i=0;i<n;i++)
	{
		if(name[i]==name1[i] && pass[i]==pass1[i])
		{
			b2.table();
	
			for(i=0;i<n;i++)
			{
				b1[i].getdata();
			}
			
			cout <<endl<<endl<<"Enter Item Number :";
			cin >> n1;
			
			for(i=0; i<n; i++)
			{
				check = b1[i].searchData(n1);
			}
			
			if(check ==0)
			{
				cout << "No Data Available !!! ";
			}  
		}
		else
		{
			cmp=1;
		}
	}
	
	if(cmp==1)
	{
		cout << "User Login Failed, We Can Not Show Your Records Plz Try Again......!";
	}
}