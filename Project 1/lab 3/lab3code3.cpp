#include<iostream>
using namespace std;
int main()
{
	int length, width,area_of_rectangle,perimeter_of_rectangle;
	cout<<"input length:";
	cin>>length;
	cout<<"input width:";
	cin>>width;
	area_of_rectangle=length*width;
	cout<<"Area="<<" "<<area_of_rectangle<<"squaremeter"<<endl;
	perimeter_of_rectangle=2*(length*width);
	cout<<"perimeter="<<" "<<perimeter_of_rectangle<<"meter"<<endl;
	return 0;
}
