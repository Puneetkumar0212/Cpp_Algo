int gcd(int a,int b)
{
	//Write your code here
	int ans = 1,n ;
	if(a>b){
	    if(a%b==0)
	    return b;
	    n = b ;
	}
	 
	 else{
	     if(b%a==0)
	     return a;
	     n = a;
	 }
	 
	 
	 for(int i = 1 ; i < n/2 ; i ++)
	 {
	     if(a%i==0&&b%i==0)
	     ans = i;
	 }
return ans;	
}

