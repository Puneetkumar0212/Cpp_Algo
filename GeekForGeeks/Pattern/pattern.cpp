#include<iostream>
using namespace std;


int main()
{
    int n ;
    cin>>n;
    int k ;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int k=n/2 +1; k < i ;k ++ )
        cout<<" ";
        for(int j=n/2 ; j < i ; j ++)
        cout<<"* ";
        cout<<"\n";
   
    }
   
   for(int h = n-1 ; h >1 ; h --)
   {
       for(int k = h ; k > n/2 ; k--)
       cout<<" ";
       for(int j = h+1;  j > n/2 ; j--)
       cout<<"* ";
       cout<<"\n";
   }
   
}


