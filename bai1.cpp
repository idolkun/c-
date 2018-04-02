#include<iostream>
using namespace std;
int main(){

int n;
int sum=0;
cin>> "nhap n ";
int a[n];


	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cout<< a[i]<<endl;
	}
		for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
		cout<< "tong la:"<<sum<<endl;
	int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		
	}
	cout<< "gia tri lon nhat la:"<< max<<endl;
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	cout<<"gia tri nho nhat la:" << min <<endl;
}
