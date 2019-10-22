#include<iostream>

using namespace std;

int Fib(int x)
{
	if(x==1 || x==2)
		return 1;
		
	return Fib(x-1)+Fib(x-2);
}

int main()
{
	
	int a;
	scanf("%d",&a);
	printf("%d",Fib(a));
	
	return 0;
	
} 
