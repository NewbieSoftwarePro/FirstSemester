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
	cout<< a <<endl;
	cout<<b<<endl;
	++a *=++b;
	cout<< b<<endl;
	cout<<a<<endl;
	return 0;
}
