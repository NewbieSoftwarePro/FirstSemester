#include<iostream>
using namespace std;
int main()
{
	float rec1, rec2, width1, width2, length1,length2;
	cout<<"input width1:";
	cin>>width1;
	cout<<"input length1:";
	cin>>length1;
	rec1=width1 * length1;
	cout<<"input width2:";
	cin>>width2;
	cout<<"input length2:";
	cin>>length2;
	rec2=width2 * length2;
	if (rec1>rec2)
	{
		cout<<"Area of rectangle no.1 is greater";
	}
	else if (rec1=rec2)
	{
		cout<<"Area of both rectangle is same";
	}
	else 
	{
		cout<<"Area of rectangle no.2 is greater";
	}
	return 0;
}
