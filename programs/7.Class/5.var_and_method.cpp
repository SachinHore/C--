#include<iostream>

using namespace std;

class student{
	public:
		int roll;
		int func(int num){
			roll=num;
		}
};

int main(){
	student s1;
	int num=123;
	s1.func(num);
	cout<<s1.roll;
}
