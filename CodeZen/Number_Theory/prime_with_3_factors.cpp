/*
We know that prime numbers are - positive integers that have exactly two distinct positive divisors.
 Now a ninja wants to find out numbers having 3 factors only. You are given an array A of n positive integers. 
 For each of them determine - whether it has 3 factors or not.*/




bool isperfectsquare(long long n)
{
    int temp = sqrt(n);
    if(temp*temp==n)
    return true ;
    else
    return false;
}

int hasthreefactor(long long n)
{
    if(isperfectsquare(n)==true)
    {
        int count = 2,k;
    for(k = 2 ; k<= n/2&&n!=2 ; k++)
    {
        if(n%k==0)
        count ++;
        if(count>3)
        {
            return 0;
        }
    }
    if(count==3)
    return 1;
    else 
    return 0;
    }
    
    else
    return 0 ;
}



void tPrimes(long long *ar,int n)
{
	// Write your code here
	int i ;
	for(i = 0 ; i < n ; i ++)
	{
	    int temp = hasthreefactor(ar[i]);
	    if(temp==1)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	
	
}

