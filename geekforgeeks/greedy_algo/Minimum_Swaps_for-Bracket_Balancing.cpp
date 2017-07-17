#include<iostream>
#include<vector>
#include<string>
using namespace std;

int fun(string s)
{
	vector<int> opening_brackets;
	int length = s.length();
	int count = 0,pos=0,temp=0 ;
	for(int i = 0 ; i< length ; i ++)
	{
		if(s[i]=='[')
			opening_brackets.push_back(i);

	}
	for(int i =0 ; i < length ; i++)
	{
		if(s[i]=='[')
		{
			count ++;
			pos++;
		}
		else if(s[i]==']')
		{
			count --;
		}
		if(count<0)
		{
			temp += opening_brackets[pos]-i;
			swap(s[i], s[opening_brackets[pos]]);
			pos++;
			count=1;
		}
	}
return temp;

}



int main()
{
	string s;
	cin>>s;
	cout<<fun(s);
	return 0 ;

}