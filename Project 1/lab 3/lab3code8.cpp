#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"input a:";
	cin>>a;
	cout<<"input b:";
	cin>>b;
	++a *= b++;
	++a *=++b;
	cout<< a <<endl;
	cout<< b ;
	return 0;
}
