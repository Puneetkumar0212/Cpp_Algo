
/*
1          1 
 2        2 
  3     3 
   4   4 
     5
   4   4 
  3     3
 2       2
1         1


*/


void printPatt(int n)
{
    //write your code here
    int s = n*2-1;
    
    for(int i = 0 ; i < s ; i ++)
    {
        for(int j = 0 ; j < s ; j++)
        {
            if(i==j)
            cout<<(i<n?i+1:s-i);
            else if(i+j==s-1)
            cout<<(i<n?i+1:s-i);
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    
}
