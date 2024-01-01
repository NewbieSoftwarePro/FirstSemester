#include<iostream>
using namespace std;
int main()
{

	float BMI,weight , height;
	cout<<"input weight:";
	cin>>weight;
	cout<<"input height:";
	cin>>height;
	BMI = weight * 703/(height*height);
	if ((BMI>18.5)&&(BMI<25))
	{
		cout<<"Person weight is optimal";
	}
	else if (BMI<=18.5)
	{
		cout<<"Person is underweight";
	}
	else if (BMI>=25)
	{
		cout<<"Person is overweight";
	}
	else{
	cout<<"value is incorrect";
    }
	return 0;
}
