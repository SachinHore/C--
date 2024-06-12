#include<iostream>

using namespace std;
int main(){
	int num1=123,num2=20;
	
	cout<<"Unary operator num1++ is:"<<num1++<<endl;
	cout<<"updated num1 is: "<<num1<<endl;
	cout<<"Unary Operator ++num1 is: "<<++num1<<endl;
	
	cout<<"comparasion operator == is: "<<(num1 == num2)<<endl;
	cout<<"comparasion operator != is: "<<(num1 != num2)<<endl;
	cout<<"comparasion operator <= is: "<<(num1 <= num2)<<endl;
	cout<<"comparasion operator >= is: "<<(num1 >= num2)<<endl;
	cout<<"comparasion operator > is: "<<(num1 > num2)<<endl;
	cout<<"comparasion operator < is: "<<(num1 < num2)<<endl;
	
	cout<<endl;

	cout<<"logical && :"<<((num1>10)&&(num2<10))<<endl;
	cout<<"logical || :"<<((num1>10)||(num2<10))<<endl;
	cout<<"logical ! :"<<!(num1==num2)<<endl;
	
	cout<<endl;
	
	cout<<"bitwise &:"<<(23 & 8)<<endl;
	cout<<"bitwise |:"<<(23 | 8)<<endl;
	cout<<"bitwise ^:"<<(23 ^ 8)<<endl;
	cout<<"right shift >> "<<(23>>2)<<endl;
	cout<<"left shift >> "<<(23<<2)<<endl;
	
	return 0;
}
