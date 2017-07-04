/*
You are given an array and indices of the array represent minutes and data values represent prices of a
stock as they were yesterday . You need to figure out and return the maximum profit you can make by
buying and selling of the stock. You can buy and sell the stock only once.
*/


#include<iostream>
using namespace std ;

int maxProfit(int *arr,int l)
 { int min=arr[0],maxProfit=0; 
    for(int i=0;i<l;i++) 
        { 
            if(arr[i]<min) 
                min=arr[i];

            if((arr[i]-min)>maxProfit) 
               maxProfit=arr[i]-min; 
         }

 return maxProfit;
  }