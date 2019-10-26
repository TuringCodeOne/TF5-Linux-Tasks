#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,k,n;
	cin >> n ;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <abs( (n + 1) / 2 -i); j++)cout << " ";
		for (k = 0; k <((n+1)/2-abs((n+1)/2-i))*2-1;k++) cout << "*";
		cout << endl;
	}
	return 0;
}