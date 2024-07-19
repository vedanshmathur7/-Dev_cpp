#include<iostream>
using namespace std;

class Shop{
	string s;
	int itemId[100];
	int itemPrice[100];
	
public: 
    void namak();
    void chammach();
};

void Shop:: chammach(){
	cout<<"enter chammach no. "<<'\n';
	string s;
	cin>>s;
	if (s<=10){
		cout<<"ab or nahi hai sir! "<<'\n';
	}
	else{
		cout<<"le jaao yaar";
	}
}


