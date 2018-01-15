#include<iostream>
#include<algorithm>
using namespace std;
 
int append(int a,int b){  // i/p (10,2) o/p 102
    int ar[30],i=0;
    while(b!=0){
        ar[i++] = b%10;
        b /= 10;
    }
 
    for(int j = i-1;j>=0;j--)
        a = a*10 +ar[j];
    if(i==0)                // when i/p (10,0)
        a *= 10;
    return a;
}
 
int comp(const int a, const int b){
    return append(a,b)>append(b,a);
}
 
int main(){
    //int ar[] =   {1, 34, 3, 98, 9, 76, 45, 4};
    int ar[] = {21,22,332,60};
    int n = sizeof(ar)/sizeof(int);
    sort(ar,ar+n,comp);
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}




