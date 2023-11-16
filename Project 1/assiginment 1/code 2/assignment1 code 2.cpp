#include <iostream>

using namespace std;

int main ()
{
	float centigrade, fahrenheit;
	cout<<"Give temperature in Degree Centigrade (C)";
	cin >> centigrade;
	fahrenheit = (centigrade * 9/5) + 32;
	cout<< centigrade << " " <<"degree centigrade is equal to" << " " << fahrenheit<< " " <<"degree fahrenheit." << endl;
	return 0;
}


