#include<iostream>
using namespace std;

class Rectangle{
	private:
		int num;
	public:
		Rectangle(){
			cout<<"i am from constructor"<<endl;
		}
		~Rectangle(){
			cout<<"i am from destructor"<<endl;
		}
};

int main(){
	Rectangle obj;
	cout<<"i am from main"<<endl;
	return 0;
}
