#include<iostream>
using namespace std;
int main(){
	int x,t ,a[100],i,k=0;
	cout<<"nhap vao 1 so:";
	cin>> x;
	while(x>0)
	{
		k++;
		t=x%2;
		a[k]=t;
		x=x/2;
	}
	cout<<" so ban vua nhap "<< x <<" duoc chuyen thanh ";
	for(i=k;i>0;i--)
	cout<<a[i];
	return 0;
}

