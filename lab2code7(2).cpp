#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"input num:";
	cin>>num;
	switch(num%2==0?1:2)
	{
		case 1:
			cout<<num<<" "<<"is an even number";
			break;
		case 2:
			cout<<num<<" "<<"is an odd number";
			break;
		default:
			cout<<"enter a number not a alphabat";	
	}
	return 0;
}
