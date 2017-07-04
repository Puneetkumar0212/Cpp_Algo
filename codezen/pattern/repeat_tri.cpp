/*
ABCDDCBA 
 ABCCBA 
  ABBA 
   AA

*/  


 void printPatt(int n)
{
    int s = n*2;
    
    
    for(int i = 0 ; i < n*2 ; i ++,s=s-2)
    {
        for(int j = 0 ; j < n ; j++)
        {
          if(i<=j)
            cout<<char(65+j-i);
            else
            cout<<" ";
            
        }
        for(int h = s/2-1; h>=0 ; h--)
        {
            
            if(i+h<2*n)
            cout<<char(65+h);
            else 
            cout<<" ";
        }
        
        cout<<"\n";
    }
    //write your code here
}

