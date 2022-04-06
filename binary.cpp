#include<iostream>

using namespace std;
int main()
{
	int a[10],n,i;
	cout<<"entet the number two convert:-";
	cin>>n;
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
cout<<"binery of the given number";
for(i=i;i>=0;i--)
    {
       cout<<a[i];
    }
    return 0;	
}	