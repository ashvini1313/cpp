#include<iostream>

using namespace std;
int main()
{
	int i,k,j;
<<<<<<< HEAD
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
	    	
=======
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
>>>>>>> 03c54b143fc9b26e49fe10214cd9febc33ac2126

	}
	return 0;
}