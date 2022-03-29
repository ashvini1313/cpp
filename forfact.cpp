#include<iostream>

using namespace std;
int main()
{
	int n;
	long double factorial = 1.0;
	cout<<"enter the positive integer :";
	cin>>n;
	if("n<0")
	{
		cout<<"\n factorial of a negative number doesn't exits";

	}
	else
	{
		for(int i=1;i<=n;++i)
		{
			factorial *=i;
		}
	}
	cout<<"factorial of"<<n<<"factorial\n";

     return 0;
}