/*
*
**
***
****
***
**
*
*/




void printPatt(int n)
{
    //write your code here
    if(n%2!=0)
    for(int i = 0 ; i < n+1 ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)
        {
            
                if(i<=n/2&&i>j)
                cout<<"*";
                else if(i>n/2&&i+j<=n)
                cout<<"*";
                else
                cout<<" ";
                
                
        }
        cout<<"\n";
    }
    else
    for(int i = 0 ; i < n+1 ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)
        {
            
                if(i<=n/2&&i>=j)
                cout<<"*";
                else if(i>n/2&&i+j<=n)
                cout<<"*";
                else
                cout<<" ";
                
                
        }
        cout<<"\n";
    }
}
