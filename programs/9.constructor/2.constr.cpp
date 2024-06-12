#include<iostream>
using namespace std;

class MyClass{
	private:
		int num1;
		int num2;
	public:
		friend void printvalues();
		MyClass(int a,int b){
			num1=a;
			num2=b;
		}
};

void printvalues(){
	MyClass obj(100,200);
	cout<<"initial val of num1 = "<<obj.num1<<endl;
	cout<<"initial val of num2 = "<<obj.num2<<endl;
}

int main(){
	MyClass obj(5,10);
	printvalues();
	
	return 0;
}
