
/*
4444444 
4333334 
4322234 
4321234 
4322234 
4333334 
4444444

*/

void printPatt(int n)
{
    //write your code here
   int size = 2*n -1 ;
    int a[size+1][size+1];
    for(int i = 0 ; i < size ; i ++)
       { a[0][i]=n; a[n-i-1][i]=n;}
    
    for(int i = 0 ; i <n; i ++)
    {
        if(i==0)
            continue ;
       for(int j = 0 ; j <size ; j ++)
        {
           

           a[i][j]=a[i-1][j];
           
          
           
        }
    
       
          int  gap = i;
        
        
        for(int k = gap ; k< size-i ; k ++)
          {
            a[i][k]=n-gap;
                   
          }
            
          
        
    }
    for (int i = 0; i < size; ++i)

    {
         for(int h = 0 ;h < size ; h++)
           {
            a[size-i-1][h]= a[i][h];
           }
        /* code */
    }
    
     for(int i = 0 ; i < size ; i ++)
    {
        for(int j = 0 ; j < size ; j ++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}
