  
int FindSum(int *a,int l)
{
//Write code here 
int sum=0;
for(int i = 0 ; i < l ; i ++)
{
    if(a[i]%2==0&&a[i]>1)
    sum+=a[i];
    else if ((a[i]%3==0&&a[i]>2))
    sum+=a[i];
}
return sum ;
}
 