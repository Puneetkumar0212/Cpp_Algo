/*
  1 
 232 
 34543

 */


#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
     int n  ;
     cin>>n;
     
     for(int i = 1 ; i<=n; i ++)
     {
         for(int j = i ; j < 2*n-i; j ++ )
         {
             cout<<" ";
         }
         for(int k = 1 ; k < 2*i ; k ++)
         {
             if(k<i)
             cout<<k+i-1;
             else
             cout<<2*i-k+i-1;
         }
         cout<<"\n";
     }
    
}
