
#include<iostream>
using namespace std;

class data{
	private:
		string name="ram";
	public:
		void printstring(){
			char ip;
			cout<<"printing private string: "<<name<<endl<<endl;
			cout<<"do u want to update it? y/n"<<endl;
			cin>>ip;
			if(ip=='y'){
				cout<<"enter new string: "<<endl;
				cin>>name;
				cout<<"printing updated new private string: "<<name;
			}
			else if(ip=='n'){
				cout<<"ok good bye";
			}
		}
};

int main(){
	data d1;
	d1.printstring();
}

