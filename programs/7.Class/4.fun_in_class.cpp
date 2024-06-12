#include<iostream>
using namespace std;

class temp{
	public:
		void mul(int a,int b){
			cout<<"multiplication is:"<<a*b<<endl;
		}
		
		int div(int a,int b){
			return a/b;
		}
};

int main(){
	temp t;
	t.mul(5,2);
	int ans=t.div(10,3);
	cout<<ans;
}
