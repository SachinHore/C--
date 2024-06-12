#include<iostream>
using namespace std;

int main(){
	char input[100];
	
	cout << "Enter a string: ";
	cin >> input;
	
	cout<<"You entered: ";
	for(int i=0;input[i]!='\0';i++){
		cout<<input[i];
	}
	
	cout<<endl;
	
	return 0;
}
