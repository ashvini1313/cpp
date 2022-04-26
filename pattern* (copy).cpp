#include<iostream>

using namespace std;
int main()
{
	int i,k,j;
	//int n=5;

	for (i=1; i<=5; i++)

	{
		for(k=4; k>=i; k--)
		
			cout<<"  ";

		    for(j=1; j<=i; j++)
		       {
			       cout<<"* ";

		       }
		cout<<"\n";
	    	

	}
	return 0;
}