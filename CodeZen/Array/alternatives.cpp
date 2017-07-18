/*

Rearrange a given array (that contains equal number of positive & negative numbers) such that +ve and -ve are arranged alternatively. Respective order should be maintained. Make changes in same array and no returning or printing in needed.
*/










void rearrange(int *a,int n)
{
  
    for(int i = 0 , j = 0 ; i < n , j < n ; )
    {
        if(a[i]<0)
        {   i++;
            continue ;}
            
        else if(a[j]>0)
        {
            j++;
            continue ;
        }
        
        if(i+1!=j&&i<j)
        {
            int temp = a[j];
            while(i<j)
            {
                a[j]=a[j-1];
                j--;
            }
            j++;
            a[j]=temp;
            
            
        }
        
        else if(i >j)
        {
           int temp = a[i];
            while(i>j)
            {
                a[i]=a[i-1];
                i--;
            }
           j++;
            a[i]=temp;
            
            
            
        }
        
        
        
        i++,j++;
            
    }
    
    
    
}

