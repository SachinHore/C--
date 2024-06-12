#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"enter even num: ";
	cin>>num;
	
	try{
		if(num%2==0){
			printf("You entered right number");
		}else{
			throw 345;
		}
	}catch(int takeThrow){
		cout<<"Sorry you entered wrong number so operation is denied\nerrorcode is :"<<takeThrow;
	}
	
	return 0;
}
