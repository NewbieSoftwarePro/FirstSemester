#include<iostream>
using namespace std;
int main()
{
	int sum=0, num;
	for(;;)
	{
		cout<<"input num:";
		cin>>num;
		if (num>0){
		    sum = sum+num;
		}
		else
		{
			break;  
		}
	}
	cout<<sum;
	
	return 0;
}

