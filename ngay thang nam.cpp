#include<iostream>
using namespace std;
int main(){
	int d,m,y;
	cout<<" nhap vao ngay thang nam :";
	cin>> d>>m>>y;
	if(d>=1 && d<=31)
	{
		if(m>=1 && m<=12)
		{
			y%=100;
			cout<< d<<m<<y;
		}
	}
	return 0;
}

