#include<iostream>
#include<cmath>
using namespace std;

int min(int i , int j ,int z )
{
	return min(min(i,j),z);
}
int edit_dist(string s1 ,string s2)
{
	int len1 = s1.length();
	int len2 = s2.length();
	int a[len1+1][len2+1];
	for(int i = 0 ; i < len1+1; i++)
		for (int j = 0; j < len2+1; j++)
		{
			if(i==0)
				a[i][j]=j;
			else if(j==0)
				a[i][j]=i;
			else if(s1[i-1]==s2[j-1])
				a[i][j]=a[i-1][j-1];
			else
			{
				a[i][j] = 1 + min(a[i-1][j],a[i][j-1],a[i-1][j-1]);


			}

		}
// for(int i = 0 ; i < len1+1; i++)
// {	cout<<"\n";
// 	for (int j = 0; j < len2+1; j++)
// 		{
// 			cout<<a[i][j]<<" ";
// 		}
// }


return a[len1][len2];
}



int main()
{
		string s1 , s2;
	cout<<"\nEnter String 1 : ";
	cin>>s1;
	cout<<"\nEnter String 2 : ";
	cin>>s2;
	cout<<edit_dist(s1,s2);
}