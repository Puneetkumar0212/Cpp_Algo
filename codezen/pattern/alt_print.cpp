/*

1 2 3 4 5 
11 12 13 14 15 
21 22 23 24 25 
16 17 18 19 20 
6 7 8 9 10


*/



#include <iostream>
using namespace std;

// n - number of rows given
void printPattern(int n){
	// Write your code here

int flag = 0,val=1 ;
int a[n][n];
for(int i=0 , j = n-1 ; i <= j ;)
{
    if(flag==0)
    {
        for(int h = 0 ; h < n ;h ++)
        {a[i][h]=val;
        val++;
        }
        i=i+1;
      flag = 1;
      
    }
    else
    {
        
        for(int h = 0 ; h < n ; h ++)
        {a[j][h]=val;
        val++;
        }
        j=j-1;
      flag = 0;
    }
}


for(int i = 0 ; i < n ; i++)
{
    for(int p = 0 ; p < n ; p ++)
    cout<<a[i][p]<<" ";
    cout<<"\n";
}

}

