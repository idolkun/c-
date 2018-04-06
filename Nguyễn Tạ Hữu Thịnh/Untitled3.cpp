#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, max, a, b, c, d, min, e;

	cout << " nhap n :" << endl;
	cin >> n;
	a = n;
	max = a % 10;

	min = a % 10;
	
	while (a != 0)
	{

		b = a / 10;
		d = b % 10;
		a = b;

		if (max < d)
			max  = d;
		if (min > d)
			min = d;

	}

	cout << "sln :" << max << endl;
	system("pause");
	return 0;
}
