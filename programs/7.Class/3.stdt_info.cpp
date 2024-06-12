#include<iostream>
using namespace std;

class student{
	public:
		int roll_no,std;
		string name;
		float marks;
};

int main(){
	student s1={10,4,"ram",45.55},s3=s1,s4={0};
	cout<<"Printing first data:"<<endl;
	cout<<s1.name<<endl;
	cout<<s3.name<<endl;
	cout<<s4.name<<endl;
}
