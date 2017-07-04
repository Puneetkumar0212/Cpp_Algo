/*
1 
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15



*/

void printPatt(int n)
{
    //write your code here
     for(int i = 0 ; i < n ; i ++)
     {
         for(int j = 0 ; j <n ; j ++)
         {
             
             
             if(i>=j&&i%2==0&&i==0)
             {
                 cout<<i+j+1<<" ";
             }
             else if (i>=j&&i%2==0)
             {
              cout<<i*(i+1)/2+j+1<<" ";   
             }
            else if(i>=j)
            cout<<i*(i+1)/2-j+i+1<<" ";
            else
            cout<<" ";
            // if(i>=j&&i%2==0&&i==0)
            //  cout<<((i+j+1));
            // else if((i>=j&&i%2==0))
            // cout<<((i+j+2));
            // else if ((i>=j&&i%2!=0))
            //  cout<<((n-j-1));
         }
         cout<<"\n";
     }
    
}
