/*
Given an array of length N, which contains single digit elements at every index. You need to find and return the sum of all elements of the array. But the final sum should also be single digit.
*/



int sum(int *a,int n)
{
//Write code her
int sum = 0 ; 
for(int i = 0 ; i < n ; i ++)
{
    sum += a[i];
    
}
l1:
int temp = 0 ;
while(sum>0)
{
    temp+=sum%10;
    sum=sum/10;
}
if(temp>=10)
    {
        sum = temp ;
        goto l1;
    }
return temp;
}
    