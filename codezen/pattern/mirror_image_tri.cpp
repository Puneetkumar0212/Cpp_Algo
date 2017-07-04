/*
  0 
 101 
21012

*/



void printPatt(int n)
{
    //write your code here
     for(int i = 0 ; i <n*2 +1; i ++)
    {
        for(int j = 0 ; j <n*2 +1; j ++)
        {
            if(i>=j&&j>=n)
                 cout<<j-n;
            else if(i>n&&j<n&&(i+j>=n*2))
                 cout<<n-j;
            else if(i>=n)
                 cout<<" ";
        }
        if(i>=n)
        cout<<"\n";
    }
    
    
}
