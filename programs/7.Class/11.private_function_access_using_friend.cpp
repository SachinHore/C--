#include<iostream>
using namespace std;

class data{
	private:
		void checkfunction(){
			int ip;
			cout<<"enter input: "<<endl;
			cin>>ip;
			cout<<"you entered: "<<ip<<endl;
		}
		friend int myfun();
};

int myfun(){
	data d1;
	cout<<"this is nyfun function area"<<endl;
	d1.checkfunction();
}

int main(){
	myfun();
}
