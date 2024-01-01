#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"input marks:";
	cin>>marks;
	switch(marks>=90?1: marks >=80 ?2: marks >=70?3: marks >=60?4:5)
	{
			case 1:
				cout<<"Grade of Student is A";
			    break;
			case 2:
				cout<<"Grade of Student is B";
			    break;
			case 3:
				cout<<"Grade of Student is C";
			    break;
			case 4:
				cout<<"Grade of Student is D";
			    break;
			case 5:
				   
		    default:
			    cout<<"input marks in numeric";	
	}
}
