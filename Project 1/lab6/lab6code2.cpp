#include<iostream>
using namespace std;
int main()
{
	int number,exponent,r=1,i=1;
	cout<<"input number:";
	cin>>number;
	cout<<"input exponent:";
	cin>>exponent;
	while(i<=exponent)
	{
		i++;
		r *=number;
	}
	cout<<"The power of"<<" "<<number<<" "<<"is"<<" "<<r;
	return 0;
}
	

