#include<iostream>
using namespace std;
int main()
{
	int number;
	string result;
	cout<<"input number:";
	cin>>number;
	result=(number%3==0)?"divisible by 3" :"not divisible by 3 ";
	cout<<"The number"<<" "<<number<<" "<<"is"<<" "<<result;
	return 0;
}
