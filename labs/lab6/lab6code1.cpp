#include<iostream>
using namespace std;
int main()
{
	int number,exponent,r=1;
	cout<<"input number:";
	cin>>number;
	cout<<"input exponent:";
	cin>>exponent;
	for(int i=1;i<=exponent;i++)
	{
		r *=number;
	    
	}
	cout<<"The power of"<<" "<<number<<" "<<"is"<<r;
	return 0;
}
