#include<iostream>
#include<string>
using namespace std;

int max (int i , int j)
{
	if(i>j)
		return i;
	return j;
}
int lcs( string s1,string s2)
{
	int len1 = s1.length();
	int len2 = s2.length();///
	int a[len1+1][len2+1];
	for(int i = 0 ; i < len1+1; i++)
		for (int j = 0; j < len2+1; j++)
		{
			if(i==0||j==0)
				a[i][j]=0;
			else if(s1[i]==s2[j])
				a[i][j]=a[i-1][j-1]+1;
			else
			{
				a[i][j]= max(a[i-1][j],a[i][j-1]);
			}
		}

return a[len1][len2];
}


int main()
{
	string s1 , s2;
	cout<<"\nEnter String 1 : ";
	cin>>s1;
	cout<<"\nEnter String 2 : ";
	cin>>s2;
	cout<<lcs(s1,s2);

}