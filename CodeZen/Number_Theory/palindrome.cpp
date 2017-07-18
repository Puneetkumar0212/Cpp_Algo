bool pal(int k )
{
    
    int rev =0,length=0;
    int t = k;
    while(t>0)
    {length++; t = t/10;}
   // cout<<"LENGTH:"<<length<<"\n";
    
    for(int temp = k ,pos =  length-1 ;temp>0 ;pos--,temp = temp / 10 )
    {
        rev+= (temp%10)*(pow(10,pos));
        
        
    }
 
if(rev==k)
 return true ;
 else
 return false;
}

void palinGenerator(int n)
{
	// Write your code here
	
	for(int i = 1 ; i <=n ; i ++)
	{
	    if(pal(i)==true)
	   cout<<i<<"\n";
	    
	}

}

