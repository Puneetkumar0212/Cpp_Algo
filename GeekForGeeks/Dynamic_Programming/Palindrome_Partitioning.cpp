#include<iostream>
#include<climits>
#include<string>

using namespace std ;

int pp(string s )
{
	int n = s.length();
	int temp[n];
	bool is_pal[n][n]={{false}};
	for(int i = 0 ; i < n ; i ++)
		is_pal[0][i]=false;

	for(int i = 0 ; i < n ; i ++)
	{
		is_pal[i][i]=true;
	}

	cout<<"\n";

	for(int length = 2 ; length<=n ; length++)
	{
		for (int i = 0; i < n-length+1; i++)
		{
			int j = i+length-1;
			if(length==2)
			{
				is_pal[i][j]=(s[i]==s[j]);
			}
			else
			{
				is_pal[i][j]=(s[i]==s[j])&&is_pal[i+1][j-1];
			}

		}
	}

	for(int i = 0 ; i < n ; i ++)
	{
		if(is_pal[0][i]==true)
			temp[i]=0;
		else
		{
			temp[i]=INT_MAX;
			for(int j=0;j<i;j++)
            {
                if(is_pal[j+1][i] == true && 1+temp[j]<temp[i])
                    temp[i]=1+temp[j];
            }
		}
	}

  return temp[n-1];
}


int main()
{
	string a ;
	cin>>a;
	cout<<pp(a);
	return 0;
}