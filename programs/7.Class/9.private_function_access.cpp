#include<iostream>
using namespace std;

class data{
	private:
		void hello(){
			cout<<"i am from private hello function";
		}
	public:
		void fun(){
			printf("\nshaktiman from fun function\n");
			hello();
		}
};

int main(){
	data d1;
	//d1.hello();
	d1.fun();
}
