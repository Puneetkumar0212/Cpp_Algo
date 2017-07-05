
int divSum(int a)
{
	// Write your code here
	int sum = 0 ;
	for(int i = 1 ; i <=a/2 ; i ++)
	if(a%i==0)sum+=i;

return sum ;
}

