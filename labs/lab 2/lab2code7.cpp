#include<iostream>
#include<limits>
using namespace std;
int main()
{
	cout<<"Maximum value of int"<< numeric_limits<int>::max()<<endl;
	cout<<"Minimum value of int"<< numeric_limits<int>::min()<<endl;
	cout<<"Maximum value of float"<<numeric_limits<float>::max()<<endl;
	cout<<"Minimum value of float"<<numeric_limits<float>::min()<<endl;
	cout<<"Maximum value of double"<<numeric_limits<double>::max()<<endl;
	cout<<"Minimum value of double"<<numeric_limits<double>::min()<<endl;
    cout<<"Maximum value of bool"<<numeric_limits<bool>::max()<<endl;
    cout<<"Minimum value of bool"<<numeric_limits<bool>::min()<<endl;
	cout<<"Maximum value of long double"<<numeric_limits<long double>::max()<<endl;
	cout<<"Minimum value of long double"<<numeric_limits<long double>::min()<<endl;
	cout<<"Maximum value of char"<<static_cast<int>(numeric_limits<char>::max())<<endl;
	cout<<"Minimum value of char"<<static_cast<int>(numeric_limits<char>::min())<<endl;
	cout<<"Maximum value of wchar_t"<<static_cast<int>(numeric_limits<wchar_t>::max())<<endl;
	cout<<"Minimum value of wchar_t"<<static_cast<int>(numeric_limits<wchar_t>::min())<<endl;
	return 0;
}
