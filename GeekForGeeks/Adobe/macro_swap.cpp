#include<iostream>
using namespace std;
#define swap(a,b) {\
a = a+b;\
b = a-b;\
a = a-b;\
}\





int main()
{
	int a = 3;
	int b =4;
	cout<<a<<"\t"<<b<<"\n";
	swap(a,b);
	cout<<a<<"\t"<<b<<"\n";
}