#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout<<"input num1:";
	cin>>num1;
	cout<<"input num2:";
	cin>>num2;
	char operation;
	cout<<"input operation:";
	cin>>operation;
	switch (operation)
	{
		case '+':
			cout<<num1+num2;
			break;
		case '-':
			cout<<num1-num2;
			break;
		case '*':
		    cout<<num1*num2;
			break;
		case '/':
		    cout<<num1/num2;
			break;
		default:
			cout<<"you can only add,sub,mul and divide ";	 		    	
	}
	return 0;
}
