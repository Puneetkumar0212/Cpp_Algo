#include<iostream>
#include<string>
#include<bits/stdc++.h>

#include <algorithm>

using namespace std ;


bool checkpalindrome(string s)
{
	int length = s.length();
	int a[length+1][length+1];
	string s1 = s;
	reverse(s1.begin(),s1.end());

	for(int i = 0 ; i < length+1 ; i ++)
	{
		for(int j = 0 ; j < length+1 ; j++)
		{
			if(i==0||j==0)
				a[i][j]=0;
			else if(s[i]==s1[j])
				a[i][j]=a[i-1][j-1]+1;
			else
			{
				a[i][j]= max(a[i-1][j],a[i][j-1]);
			}
		}
	}
	// for(int i = 0 ; i < length+1 ; i ++)
	// {
	// 	cout<<"\n";
	// 	for(int j = 0 ; j < length+1 ; j++)
	// 	{
	// 		cout<<a[i][j]<<" ";
	// 	}
	// }


	if(a[length][length]==length)
		return true;
	else 
		return false;
}
string subString(string s, int n) 
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    
}


void find(string str)
{
	int n = str.length();

	for (int i = 0; i < n; i++) 
        for (int len = 1; len <= n - i; len++)
            	{
            		string sub = str.substr(i, len);
            		if(checkpalindrome(sub))
            		{
            			cout<<sub<<" ";
            		} 	
            	}
}

int main()
{
	string str;
	cout <<"Enter String ";
	cin>>str;
	find(str);
	return 0;
}