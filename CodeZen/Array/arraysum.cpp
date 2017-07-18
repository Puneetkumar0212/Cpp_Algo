/*
Given a n*m binary matrix that is, it contains 0s and 1s only, we need to find and return sum of coverage of all zeros of the input matrix. Coverage for a particular 0 is defined as, total number of ones around a zero (i.e. in left, right, up and bottom directions)

*/

int coverage(int **arr,int n,int m)
{
//Write code here 
int count = 0;
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        if(!arr[i][j]){
            if(i>0 && arr[i-1][j]==1)
                count++;
            if(i<n-1 && arr[i+1][j]==1)
                count++;
            if(j>0 && arr[i][j-1]==1)
                count++;
            if(j<m-1 && arr[i][j+1]==1)
                count++;
        }
    }

return count ;
}