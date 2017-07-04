/*
****
***
**
*

*/


void printPatt(int n)
{
    //write your code here
    
    for(int y = 0 ; y < n ; y++)
    {for( int h = 0 ; h < n ; h ++)
    {
        if(y+h<n)
        cout<<"*";
        else 
        cout<<" ";
    }
    cout<<"\n";
    }
}