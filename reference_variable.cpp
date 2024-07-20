#include<iostream>
using namespace std;
int c = 45;
int main () {
	int a, b, c;
	cout<<"enter no a: "<<'\n';
	cin>>a;
	
	cout<<"enter no b: "<<'\n';
	cin>>b;
	c = a + b;
	cout<<"the sum is: "<<c<<'\n';
	cout<<"the global c is :"<<::c;
	return 0;
}
