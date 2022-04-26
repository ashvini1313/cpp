#include<iostream>

using namespace std;
int main()
{
	int n1=0,n2=1,fibo=2;
	int num;
	cout<<"enter the number";
	cin>>num;
	cout<<n1<<n2;

    for(int fibo1=1;fibo<num;fibo++)
    {
    	fibo1=n1+n2;
    	cout<<fibo1;
    	n1=n2;
    	n2=fibo1;
    }

     return 0;

 }