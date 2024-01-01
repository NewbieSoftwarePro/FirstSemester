#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"input num:";
	cin>>num;
	while(true)
	{
		if(num%3==0)
		{
		cout<<"Yes! you reached end";
		break;
	    }
	    else
	    {
	    	cout<<"input num:";
	    	cin>>num;
		}
	}
	return 0;
}
	
		
	

