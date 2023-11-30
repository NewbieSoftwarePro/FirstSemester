#include<iostream>
using namespace std;
int main()
{
	int divident,divisor,quotient,remainder;
	cout<<"input divident:";
	cin>>divident;
	cout<<"input divisor:";
	cin>>divisor;
	quotient = divident/divisor;
	cout<<"Quotient  ="<<" "<<quotient<<endl;
	remainder=divident%divisor;
	cout<<"Remainder ="<<" "<<remainder<<endl;
	return 0;
}
