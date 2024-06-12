#include<iostream>
using namespace std;

class data{
	private:
		int num=123;
	friend int myfun();
};

int myfun(){
	data d1;
	printf("from myfun: d1.num");
}

int main(){
	myfun();
}
