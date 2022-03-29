#include<iostream>

using namespace std;
int main()
{
	int i,k,j;
	int n=5;

	for (int i=1;i<=n;i++)

	{
		for(k=1;k>=i;k--)
		{
			cout<<"  ";

		    for(j=1;j<=i;j++)
		       {
			       cout<<"*";

		       }
		cout<<"\n";
	    }	

	}
	return 0;
}