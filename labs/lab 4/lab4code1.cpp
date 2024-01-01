#include<iostream>
using namespace std;
int main()
{
	int number,remainder;
	cout<<"input number:";
	cin>>number;
	remainder= number%2;
	if (remainder==0)
	{
		cout<<"Number is even";
	}
	else
	{
		cout<<"Number is odd";
	}
	return 0;
}
