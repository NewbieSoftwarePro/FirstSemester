#include <iostream>

using namespace std;

int main()
{
	float total_marks, obtained_marks, percentage;
	cout<<"Give the total marks:";
	cin>>total_marks;
	cout<<"Give the obtained marks:";
	cin>>obtained_marks;
	percentage = obtained_marks/total_marks * 100;
	cout<<"Percentage marks:"<< percentage<<endl;
	return 0;
}
