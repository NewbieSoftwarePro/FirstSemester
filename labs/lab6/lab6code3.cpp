#include<iostream>
using namespace std;
int main()
{
	int number=0;
	while(number<=110)
	{
		if(number%11==0)
		{
			cout<<endl;
		}
	    else if(number%3==0)
		{
			cout<<"Coza";
		}
		else if(number%5==0)
		{
			cout<<"Loza";
		}
		else if (number%7==0)
		{
			cout<<"Woza";
		}
		else if((number%3==0)&&(number%5==0))
		{
			cout<<"CozaLoza";
		}
		else
		{
			cout<<number;
		}
		number++;
	}
	return 0;
}
