// arr - input array
// n - size of array
int equilibrium(int arr[], int n) {
	
   int l_sum = 0,sum=0; 
   int i;
 
   
   for (i = 0; i < n; ++i)
        sum += arr[i];
 
   for( i = 0; i < n; ++i)
   {
      sum -= arr[i]; 
 
      if(l_sum == sum)
        return i;
 
      l_sum += arr[i];
   }
 
    return -1;
}
