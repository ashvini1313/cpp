#include<iostream>

using namespace std;
int main()
{
	int x,y,z;
	cout<<"enter three number:";
	cin>>x>>y>>z;

	if((x<y)&&(x<z))
	{
		cout<<"x is smallest";
	}
	
	else if(y<z)
	{
		cout<< " y is smallest";
	} 
	else 
	{
		cout<< " z is smallest";
	}
	return 0;
}