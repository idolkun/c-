#include<iostream>
using namespace std;
void chuyen(long n){
	int a,b,c;
	a=n/3600;
	b=(n-a*3600)/60;
	c=n-a*3600-b*60;
	cout<<a<<":"<<b<<":"<<c;
}
int main(){
	long n;
	cout<<"nhap so giay:";
	cin>> n;
	chuyen(n);
	cin.get();
	cin.get();
	return 0;
}
