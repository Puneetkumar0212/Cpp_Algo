/*

   *
  *** 
 ***** 
*******
 ***** 
  *** 
   *


*/



void printPatt(int n)
{
    if(n%2!=0)
    n=n/2+1;
    else
    n = n/2;
    int i , j ,k;
    for(i=1;i<=n;i++)
{
for(j=i;j<n;j++)
{
cout<<" ";
}
for(k=1;k<(i*2);k++)
{
cout<<"*";
}
cout<<"\n";
}
for(i=n-1;i>=1;i--)
{
for(j=n;j>i;j--)
{
cout<<" ";
}
for(k=1;k<(i*2);k++)
{
cout<<"*";
}
cout<<"\n";
}
    
  
    
}
