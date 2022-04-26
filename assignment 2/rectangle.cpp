#include<iostream>
using namespace std;
inline int area(int l,int w)

{
	return(l*w);
}
inline int peri(int l,int w)
{
	return 2*(l+w);
}
int main()
{
	int l,w;
	cout<<"\nenter the value of length :-";
	cin>>l;
	cout<<"\nenter the value of width :-";
	cin>>w;
	cout<<"\n area of rectangel :-"<<area(l,w)<<"\n";
	cout<<"\n area of parimeter :-"<<peri(l,w);
	return 0;

}