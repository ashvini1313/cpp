#include<iostream>
using namespace std;
int circum=20;
int main()
{
	float radius,area=10;
	cout<<"\n enter the radius of circle:-";
	cin>>radius;
	area=3.14*radius*radius;
	cout<<"\narea of="<<area;
	cout<<"\nendl";
	circum=2*3.14*radius;
	cout<<"\ncircumference of circle="<<::circum;
	cout<<endl;
	return 0;
}
