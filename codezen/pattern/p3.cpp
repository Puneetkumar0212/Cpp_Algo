/*
E 
DE 
CDE 
BCDE 
ABCDE


*/


void printPatt(int n)
{
    
     for(int i = 0 ; i < n ; i ++)
     {
         for(int j = 0 ; j <n ; j ++)
         {
            
            if(i>=j)
            cout<<char((65+n+j-i-1));
         }
         cout<<"\n";
     }
    
}