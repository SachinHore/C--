#include<iostream>
using namespace std;

class Rectangle{
	public:
		Rectangle(){
			cout<<"i am from constructor"<<endl;
		}
		~Rectangle(){
			cout<<"i am from destructor"<<endl;
		}
};

int call(){
	Rectangle obj;
	cout<<"i am from function"<<endl;
}

int main(){
	cout<<"from main\n";
	call();
	return 0;
}
