#include<iostream>
using namespace std;
class Parent1{
	public:
		void speak(){
			cout<<"Partent1 speaks"<<endl;
		}
};

class Parent2{
	public:
		void talk(){
			cout<<"Parent2 talks"<<endl;
		}
};

class Child :public Parent1, public Parent2{
	public:
		void play(){
			cout<<"child plays"<<endl;
		}
};

int main(){
	Child c;
	c.speak();
	c.talk();
	c.play();
	return 0;
}
