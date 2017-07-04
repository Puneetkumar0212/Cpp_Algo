/*
1111 
000
11 
0


*/

void printPatt(int n)
{
    //write your code here
    int val = 0 ;
    for(int u = 0 ; u < n ; u ++)
    {
        val = !val;
        for(int h = 0 ; h < n ; h ++)
        {
            if(u+h<n)
            cout<<val;
            
        }
        cout<<"\n";
    }
}
