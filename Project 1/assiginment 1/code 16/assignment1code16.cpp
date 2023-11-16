#include <iostream>

using namespace std;

int main ()
{
	float minutes,number_of_years,number_of_days;
	cout<<"Give the minutes:";
	cin>>minutes;
	number_of_years= minutes/ 1440 * 365;
	number_of_days= minutes/1440;
	cout<<"Number of years:"<<" "<< number_of_years<<"years"<<endl;
	cout<<"Number of days:"<<" "<<number_of_days<<"days"<<endl;
	return 0;
}
