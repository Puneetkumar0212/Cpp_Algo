/*
Given an array of integers of size n which contains numbers from 0 to n - 2.
 Each number is present at least once. That is, if n = 5, numbers from 0 to 3 is present in the given array at 
 least once and one number is present twice. You need to find and return that duplicate number present in the array.
  Assume, duplicate number is always present in the array.*/



// arr - input array
// size - size of array

int MissingNumber(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int sum = 0 ;
    for(int i = 0 ; i < size ; i ++)
    {
        sum+=arr[i];
    }
    int sum2 = (size -2)*(size-1)/2;
    
    return (sum-sum2);

}
