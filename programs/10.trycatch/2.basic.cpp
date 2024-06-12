#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	cout<<"Enter two number: ";
	cin>>num1>>num2;
	try{
		if(num2==0){
			throw num2;
		}
		float result = (float)num1/num2;
		cout << "Result: "<<result<<endl;
	}catch(int catchZero){
		cout<<"cannot divide by zero"<<endl;
	}
	return 0;
}
