#include<iostream>
using namespace std;

class fact{
	private:
		int num;
	friend int findFact();
	
};

int findFact(){
	fact f1;
	int result =1;
	cout<<"Enter number to calculate factorial: "<<endl;
	cin>>f1.num;
	for(int i=1;i<=f1.num;i++){
		result=result * i;
	}
	return result;
}

int main(){
	int result;
	result=findFact();
	cout<<"fact is: "<<result;
}
