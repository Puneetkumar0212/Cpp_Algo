/*
Binary Numbers 
Calculate and return number of 1s in binary representation of given number n.
*/


  

int solve(long long n)
{
	// Write your code here
    int sum = 0;
    while(n){
        sum+=n&1;
        n>>=1;
    }
    return sum;
}
    