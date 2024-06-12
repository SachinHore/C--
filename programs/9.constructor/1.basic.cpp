#include<iostream>
using namespace std;

class Rectangle{
	public:
		Rectangle(){
			cout<<"i am from constructor"<<endl;
		}
};

int main(){
	cout<<"i am from mains\n";
	Rectangle obj;
	return 0;
}
