#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"input num1";
	cin>>num1;
	cout<<"input num2";
	cin>>num2;
	cout<<"input num3";
	cin>>num3;
	switch(num1>num2&&num1>num3 ? 1 : (num2>num1&&num2>num3 ? 2 : 3))
	{
		case 1:
			cout<<"num1";
			break;
		case 2:
			cout<<"num2";
			break;
		case 3:
		    cout<<"num3";
			break;	
			
	}
	return 0;
}
