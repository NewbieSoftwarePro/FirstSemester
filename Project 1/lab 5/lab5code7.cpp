#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter 1 ! To Find Largest Number Among Three Variables";
    cout<<"\nEnter 2 ! To Find ODD or EVEN";
    cout<<"\nEnter 3 ! To Find State of Water";
    cout<<"\nEnter 4 ! To find Grade of Student";
    int Enter;
    cout<<"\ninput enter:";
    cin>>Enter;
    switch(Enter)
    {
    	case 1:
    		int num1,num2,num3;
    		cout<<"\ninput three number";
    		cin>>num1>>num2>>num3;
    		if ((num1>num2)&&(num1>num3))
    		{
    			cout<<num1<<" "<<"is largest number";
			}
			else if((num2>num1)&&(num2>num3))
			{
				cout<<num2<<" "<<"is largest number";
			}
			else
			{
				cout<<num3<<" "<<"is largest number";
			}
			break;
		case 2:
			int num;
			cout<<"input num:";
			cin>>num;
			if (num%2==0)
			{
				cout<<num<<" "<<"is an even number";
			}
			else 
			{
				cout<<num<<" "<<"is an odd number";
			}
			break;
		case 3:
			int Temp;
			cout<<"input temperature:";
			cin>>Temp;
			if ((Temp>0)&&(Temp<=100))
			{
				cout<<" State of Water is liquid";
			}
			else if(Temp<=0)
			{
				cout<<" State of Water is solid";
			}
			else
			{
				cout<<" State of Water is gas(stream)";
			}
			break;
		case 4:
			int marks;
			cout<<"input marks:";
			cin>>marks;
			if(marks>=90)
			{
				cout<<"Grade od student is A";
			}
			else if(marks>=80)
			{
				cout<<"Grade od student is B";
			}
			else if(marks>=70)
			{
				cout<<"Grade od student is C";
			}
			else if(marks>=60)
			{
				cout<<"Grade od student is D";
			}
			else
			{
				cout<<"Grade od student is F";
			}
			break;
		default:
			cout<<"invalid input";		
	}
	return 0;
}
