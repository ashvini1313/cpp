#include<iostream>

using namespace std;
int main()
{
	int num,result,sum=0, temp;
	cout<<"enter the number";
	cin>>num;
	temp=num;
	while(num>0)
	{
		result =num%10;
		sum=sum*10+result;
		num=num/10;

	}
	cout<<"reverse number is :-"<<sum;
}