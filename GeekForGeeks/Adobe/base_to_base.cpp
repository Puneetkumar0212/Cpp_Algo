#include<iostream>
#include<string>
#include <stdio.h>

#include <stdlib.h>
#include<cmath> 

using namespace std;

int basetodecimal(char i)
{
	//cout<<(int)(i)-47<<"\t";
	if(i>='0'&&i<='9')
	{
		int ia = i - '0';
		return ia;
	}
	else 
	{
		return ((int)(i-'a')+10);
	}
}

char decimaltobase(int inp)
{
	if(inp>=0 && inp<=9)
	{
		char c = inp +'0';

		
		return c;
	}
	else
	{
		return (char) ('a' + (inp - 10));
	}
}

string tobase(int inp , int base)
{
	string res ="";
	while(inp>0)
	{
		int remainder = inp%base;
		inp = inp/base;
		res=decimaltobase(remainder)+res;
	}
	return res;
}

int todecimal(string a , int base)
{
	int length = a.length();
	int decimal = 0;
	for (int pv = 0, index = length-1 ;index>=0 ;pv++,index--)
	{
		decimal	+= basetodecimal(a.at(index))*(int)(pow(base,pv));
	}
	return decimal;
}


void convert(string a , int i , int o)
{
	int dec = todecimal(a,i);
	cout<<"Decimal : "<<dec;
	cout<<"\n";
	cout<<tobase(dec,o);

}

int main()
{
	int i_base,o_base;
	string number;
	cout<<"\nEnter Input Base :";
	cin>>i_base;
	cout<<"\nEnter Output Base :";
	cin>>o_base;
	cout<<"Enter Number ";
	cin>>number;

	convert(number,i_base,o_base);
	cout<<"\n";

	return 0;
}