/*
****
 *** 
  **
   *


*/   


void printPatt(int n)
{
    //write your code here
    
    for(int h = 0 ; h < n ; h ++)
    {
        for(int u = 0 ; u < n ; u ++)
        {
            if(u>=h)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
}