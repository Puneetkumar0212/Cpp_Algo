/*Chandan and Chitvan are playing a number game. Chandan gave two numbers N and M to Chitvan. In order to win, Chitvan has to find and tell him all the numbers less than N which have exactly M number of trailing 0s in their factorial, as fast as possible. Can you help Chitvan to win ?*/


#include<cmath>
#include <iostream>
using namespace std;
long  long reset (long long a[] , long long  size , long long  n)
{
long long  carry = 0,product , i ;

	for (i = 0; i < size; i++)
	{
		product = a[i]*n+carry;
		a[i]=product%10;
		carry = product/10;
	}
	
	while(carry)
	{
		a[size] =  carry%10;
		carry= carry/10;
		size++;
	}
return size;
}


long long  fact(long long  n )
{
	long long  a[10000]={0};
	a[0]=1;
    long long  a_size = 1,i,h;
	//update array 
	for( i = 2 ; i<=n ; i++)
	{
		a_size = reset(a,a_size,i);
	}
	//Display Result
	long long result = 0 ;
	long long power = a_size-1 ;
	for(h = a_size-1 ; h >=0 ; h --,power--)
	{
		result += pow(10,power)*a[h];
	}
	return result ;
}


bool fun(long long i , long long zeros)
{
    long long temp = fact(i),count=0;
    while(temp%10==0)
    {
        count ++ ;
        temp = temp/10;
    }
  
    if(count == zeros )
    return true ;
    else
    return  false ;
}


int main(){
	// Write your code here
	
 int n , m ,j,index;
	cin>>n>>m;
	
	index = n ;
	
	for( j= 1; j < index ; j++)
	{
	   if( fun(j,m)==true)
	   {
	       cout<<j<<"\n";
	       index = j +10;
	   }
	}

	return 0;
}