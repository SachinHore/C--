#include<iostream>
using namespace std;
int main(){
	int num,num1,num2;
	float fnum;
	char ch;
	double d;
	
	cout<<"Hello c++ programing "<<endl;// << insertion operator
	cout<<"Enter int num value: "<<endl;
	cin>>num>>num1>>num2; // >> Extraction operator
	
	cout<<"Enter float fnum value: "<<endl;
	cin>>fnum;
	
	cout<<"Enter char ch value: "<<endl;
	cin>>ch;
	
	cout<<"Enter double d value: "<<endl;
	cin>>d;
	
	cout<<"int num is : "<<num<<" "<<num1<<" "<<num2<<endl;
	cout<<"float fnum is: "<<fnum<<endl;
	cout<<"char ch is: "<<ch<<endl;
	cout<<"double d is: "<<d<<endl;
	
	return 0;
}
