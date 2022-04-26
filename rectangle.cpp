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
 	cout<<"enter value of length: ";
 	cin>>l;
 	cout<<"enter the value of width: ";
 	cin>>w;
 	cout<<"area of rectangle: "<<area(l,w)<<"\n";
 	cout<<"area of parameter: "<<peri(l,w);
 	return 0;
 }