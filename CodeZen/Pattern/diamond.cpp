/*

   1
  123
 12345 
1234567 
 12345 
  123 
   1


*/



void printPatt(int n)
{
    n=n/2+1;
    //write your code here
    int i , k , j ;
   for (i=1;i<=n;i++) 
   {
		for (j=i;j<n;j++)
		{
			cout<<" ";
		}
		for (k=1;k<(i*2);k++) 
		{
			cout<<k;
		}
		cout<<"\n";
	}
	for (i=n-1;i>=1;i--)
	 {
		for (j=n;j>i;j--)
		{
			cout<<" ";
		}
		for (k=1;k<(i*2);k++) 
		{
			cout<<k;
		}
		cout<<"\n";
	}
    
}