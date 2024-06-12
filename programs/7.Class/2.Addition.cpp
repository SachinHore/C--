#include<iostream>
using namespace std;

class addition{
	public:
		int a,b;
};

int sum(){
	addition add;
	cout<<"Enter value a: ";
	cin>>add.a;
	cout<<"Enter value b: ";
	cin>>add.b;
	
	cout<<"Addition: "<< (add.a+add.b) <<endl;
}

int main(){
	sum();
}
