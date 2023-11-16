#include <iostream>

using namespace std;

int main()
{
	float x, y, percent;
	cout<<"Give the value of x:";
	cin>>x;
	cout<<"give the value of y:";
	cin>>y;
	percent = x/100 * y;
	cout<<"x percent of y:"<<percent<<endl;
	return 0;
}
