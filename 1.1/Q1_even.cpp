#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter Array Size : ";
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] : ";
		cin>>a[i];
	}
	
	cout<<"Even Elements of an Array : ";
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			cout<<" "<<a[i];
		}
	}
}