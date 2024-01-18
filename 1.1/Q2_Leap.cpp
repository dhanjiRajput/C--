#include<iostream>
using namespace std;

int main()
{
	int n1,n2,i,n,index=0;
	
	cout<<"Enter First Year :";
	cin>>n1;
	
	cout<<"Enter Last Year  :";
	cin>>n2;
	
	n=(n2-n1)/4+1;
	
	int leap[n];
	
	for(i=n1;i<=n2;i++)
	{
		if(i%4==0)
		{
			leap[index]=i;
			index++;
		}
	}
	
	cout<<"The Array is : ";
	for(i=0;i<index;i++)
	{
		cout<<"  "<<leap[i];
	}
}