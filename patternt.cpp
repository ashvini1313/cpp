#include<iostream>

using namespace std;
int main()
{
	int i,j,n,s;
	cout<<"entet the number of rows:-";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(s=i;s<n;s++)
	    cout<<" ";

	    for(j=1;j<=i;j++)
	    cout<<"* ";

	    cout<<"\n";
	}
	return 0;
}	