#include<iostream>
using namespace std;

class BankAccount{
	private:
		long long int accountNumber,balance,credit,debit;
		string ownerName;
		
	public:
		
		void setData()
		{
			cout<<"Enter Account Number\t:";
			cin>>accountNumber;
			cout<<"Enter Balance Amount\t:";
			cin>>balance;
			cout<<"Enter Owner Name\t:";
			cin>>ownerName;
		}
		
		void getData()
		{
			cout<<"Account Number :"<<accountNumber<<endl;
			cout<<"Account Balance:"<<balance<<endl;
			cout<<"Account Name   :"<<ownerName<<endl;
		}
		
		void Action()
		{
			
				
			
			int choice;
			do{
				cout<<endl<<"Choose Your Action"<<endl;
				cout<<"Press 1. for Credit"<<endl;
				cout<<"Press 2. for Debit"<<endl;
				cout<<"Press 3. for Display"<<endl;
				cout<<"Press 4. for Exit"<<endl;
				
				cout<<"Enter Your Choice :";
				cin>>choice;
				
				switch(choice)
				{
					case 1:
						cout<<"Enter How Much Amount Wants to Credit :";
						cin>>credit;
						
						balance=balance+credit;
						break;
						
					case 2:
						cout<<"Ente How Much Amount Wants to Debit :";
						cin>>debit;
						
						balance=balance-debit;
						break;
					case 3:
						
						cout<<"Available Balance is :"<<balance;
						break;
						
					case 4 :
						break;
					default :
						cout<<"Select Right Choice";
				}
			}while(choice!=0);
		}
};

int main()
{
	BankAccount b1;
	
	b1.setData();
	b1.getData();
	b1.Action();
}
