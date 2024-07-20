#include<iostream>
using namespace std;

int glo = 7;
void sum () {
	//no return required !
	//yha pe glo 7 tha
	cout<< glo;
	//print kiya
	//fir neeche gya
}

int main () {
	//local variable gets the preference first 
	int glo = 55;
	glo = 57;
	int a = 3,b = 6;
	float chappal = 4444.44;
	char nonu = 'n';
	bool is_true = false;
	sum(); 
	//calls the sum fuction (upar gya)
	cout<<glo;
	//local vraible glo print kiya
	
	cout<< "This is video no. 4. here the value of a is "<<a<< "\nand of b is "<< b;
	cout<< "\nThe value of float is "<<chappal;
	cout<< "\nThe value of character is "<<nonu;
	cout<< "\n"<<is_true;
	return 0;
}
