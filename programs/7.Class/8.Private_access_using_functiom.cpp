#include<iostream>
using namespace std;

class data {
	private:
		
		int num1,num2;
	public:
		int check;
	int addition(int a,int b){
		num1=a;
		num2=b;
		return num1+num2;
		
		
	}
};

int main(){
	data d1;
	int a,b;
	cout<<"enter first value: ";
	cin>>a;
	cout<<"enter second value: ";
	cin>>b;
	
	int v=d1.addition(a,b);
	cout<<"addition is : "<<v;
	
	
}
