#include<iostream>
using namespace std;

class MyClass{
	private:
		int n1;
		int n2;
	public:
		MyClass(int a,int b){
			n1=a;
			n2=b;
		}
		void printvalues(){
			cout<<"initial val of n1 and n2 = "<<n1<<" "<<n2<<endl;
		}
		void setNumber(int a,int b){
			n1=a;
			n2=a;
		}
		void printNewvalues(){
			cout<<"initial val of n1 and n2 = "<<n1<<" "<<n2<<endl;
		}
		
};

int main(){
	int n1,n2;
	MyClass obj(0,0);
	
	obj.printvalues();
	
	cout<<"Now update that value: "<<endl;
	cout<<"Enter new n1 value: ";
	cin>>n1;
	cout<<"Enter new n2 value: ";
	cin>>n2;
	
	obj.setNumber(n1,n2);
	obj.printNewvalues();
	return 0;
	
}




