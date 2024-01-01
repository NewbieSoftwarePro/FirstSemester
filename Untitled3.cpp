#include<iostream>
using namespace std;
int main()
{
	int num,number=1;
	cout<<"input num:";
	cin>>num;
	do{
		
		cout<<"\n"<<num<<"* "<<number<<"="<<num*number;
		number=number+1;
	}
	while(number<=10);
}
