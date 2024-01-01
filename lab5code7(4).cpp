#include<iostream>
using namespace std;
int main()
{
	int marks,num=1;
	cout<<"input marks";
	cin>>marks;
	switch(num)
	{
		case 1:
			if(marks >=90)
			{
				cout<<"Grade of Student is A";
			}
			else if(marks >=80)
			{
				cout<<"Grade of Student is B";
			}
			else if(marks >=70)
			{
				cout<<"Grade of Student is C";
			}
			else if(marks >=60)
			{
				cout<<"Grade of Student is D";
			}
			else if(marks >=50)
			{
				cout<<"Grade of Student is E";
			}
			else if(marks >=0)
			{
				cout<<"Grade of student is F";
			}
			break;
		default:
			cout<<"input marks in numeric";
	}
	return 0;
}
