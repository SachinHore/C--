#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter the number of elements";
	cin>>n;
	
	if(n<=0){
		cout<<"Please enter a positive number of elements"<<endl;
		return 0;
	}
	
	int arr[n];
	
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter in the array:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}

