#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	double x, d, oprt, sum;
	n = 3;
	cout << "Vvedite x:";
	cin >> x;
	cout << "Vvedite tochnost':";
	cin >> d;
	sum = x;
	oprt = x;
	while (abs(oprt) >= d)
	{
		
		oprt = -oprt*(pow(x, 2) / (n*(n-1)));
		n = n + 2;
		sum = sum + oprt;
	} 
	cout <<"sin (x)=="<< sum<<endl;
	cout << "Proverka"<<sin(x);
	system("pause");
	return 0;

}