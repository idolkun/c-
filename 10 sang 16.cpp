#include<iostream>
using namespace std;
int main(){
	int a[100],n;
	int x;
	int k=0;
	char b[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cin>> n;
	while(n>0)
	{
		k++;
		x=n%16;
		a[k]=x;
		n=n/16;
	}
	for(int i=k;i>0;i--)
	{
		cout<<a[i];
	}
}
