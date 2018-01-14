#include<iostream>
using namespace std ;

int cc(int S[],int n ,int k )
{
	int table[k+1]={0};
 
    table[0] = 1;
 
    for(int i=0; i<n; i++)
        for(int j=S[i]; j<=k; j++)
           {


 		
            table[j] += table[j-S[i]];
    //         cout<<"\n"<<i<<" "<<j<<"\n";
    //         for(int h = 0 ; h < k+1;h++)
    //         	cout<<table[h]<<"\t";
           
		 	}
    return table[k];

}

int main()
{
	int n,k ;
	cout<<"Enter number of coins ";
	cin>>n;
	cout<<"Enter Amount :";
	cin>>k;
	int a[n];
	for(int i = 0 ; i <  n ; i ++)
		cin>>a[i];
	cout<<cc(a,n,k);
	return 0 ;
}