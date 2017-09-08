#include<iostream>
#include<string>
using namespace std ;

int main()
{
	string s ;
	cin>>s;
	int a[26]={0};
	for(int i = 0 ; i < s.length();i++)
		{
			//cout<<int(s[i])<<" ";
			a[int(s[i])-65]++;
		}

		int max = a[0];
		
	for(int h = 0 ; h < 26;h++)
		if(max<a[h])
		{
			max=a[h];
			
		}	
		for(int y = 25 ; y>=0 ;y--)
		{
			if(a[y]==max)
			{
				cout<<char(y+65);
				break;
			}
		}


		
}