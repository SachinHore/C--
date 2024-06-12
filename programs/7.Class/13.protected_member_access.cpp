#include<iostream>
using namespace std;

class number_system{
	protected:
		int base=2;
	friend int checkEven(int num);
	
};

int checkEven(int num){
	number_system obj;
	if(num % obj.base==0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	checkEven(13);
}

