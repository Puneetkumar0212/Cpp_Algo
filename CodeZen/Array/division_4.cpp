/*Given an array, update each element of the array by the value obtained by dividing the element by 4 (take only integer part). If the value obtained by dividing element by 4 comes out to be 0, then update element with value -1.*/



    
void change(int *a,int n)
{
//Write code here 
for(int  i = 0 ; i < n ; i ++)
{
    if(a[i]/4==0)
    {
        a[i]=-1;
    }
    else
    a[i]=a[i]/4;
   
}

}