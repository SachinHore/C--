#include<iostream>
using namespace std;
class data{
	private:
		int num=10;
	public:
		void fun(){
			cout<<num;
		}
};

int main(){
	data d1;
	d1.fun();
}
