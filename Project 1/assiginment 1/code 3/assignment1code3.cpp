#include <iostream>

using namespace std;

int main ()
{
	int celsius, fahrenheit;
	cout<<"Give temperature in fahrenheit scale(F):";
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5/9;
	cout<< fahrenheit << " " <<"fahrenheit scale is equal to" << " " << celsius << " " <<"degree celsius." << endl;
	return 0;
}

