#include<iostream>
using namespace std;
int main () {
	int a=4, b=6;
	cout<<a+b<<'\n'; //"\n" to add new line
	cout<<a-b<<'\n'; //ARITHMETIC OPRTR
	cout<<a/b<<'\n';
	cout<<a%b<<'\n';
	cout<<a*b<<'\n';
	cout<<'\n';
	cout<<"ab or suniye"<<'\n';
	cout<<a++<<'\n'; //ASSIGNMENT OPRTR
	cout<<b++<<'\n';
	cout<<--a<<'\n';
	cout<<"ab or suniye"<<'\n';
	cout<<(a==b)<<'\n'; //COMPARISON OPRTR
	cout<<(a<=b)<<'\n';
	cout<<"ab or suniye"<<'\n';
	cout<<((a==b) & (a<=b))<<'\n'; //LOGICAL OPRTR
	cout<<((a==b) || (a<=b))<<'\n';
	return 0;
}

