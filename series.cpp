#include<iostream>

using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"\n\n find the sum of the series (1*1)+(2*2)+(3*3)+(4*4)+(5*5)+...+(n*n):";
	cout<<"--------------------------------------------------------\n";
	cout<<"input the value for nth term:";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		sum+=i*i;
		cout<<i<<"*"<<i<<"="<<i<<"end1\n";

	}

	cout<<"the sum of the above series is <<sum<<end1";
}