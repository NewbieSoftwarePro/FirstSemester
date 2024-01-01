#include<iostream>
using namespace std;
int main()
{
	int month, year, days ,month_times_the_day;
	cout<<"input days in numeric:";
	cin>>days;
	cout<<"input month in numeric:";
	cin>>month;
	cout<<"input year:";
	cin>>year;
	month_times_the_day = month *days;
	if(month_times_the_day ==year)
	{
		cout<<"The date is magic";
	}
	else
	{
		cout<<"The date is not magic";
	}
	return 0;
}
