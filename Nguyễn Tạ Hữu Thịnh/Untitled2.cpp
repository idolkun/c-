#include<iostream>
using namespace std;
int main()
{
	string name;
		cout<<"ten sv:";
		getline(cin,name);
	float dt,dl,dh,dtb;
	cin>>dt;
	cout<<"diem toan"<<endl;
	cin>>dl;
	cout<<"diem ly"<<endl;
	cin>>dh;
	cout<<"diem hoa"<<endl;
	cin>>dtb;
	dtb=(dt+dl+dh)/3;
	cout<<"diem tb:\n"<<dtb;
	if(dtb>=8)
		cout<<"xep loai xuat sac"<<"\n"<<endl;
	else if(7<=dtb<8)
		cout<<"xep loai gioi\n:"<<endl;
	else if(6<=dtb<7)
		cout<<" xep loai kha:\n"<<endl;
	else if(5<=dtb<6)
		cout<<"xep loai tb:\n"<<endl;
	else if(dtb<5)
		cout<<"xep loai yeu:\n"<<endl;	
}
 
 
 

