#include <iostream>
using namespace std;
int num ; 
void display (int a[] ,int i, int n )
{
	cout << "\n";
	for(int h = 0 ; h < n ; h ++)
	{
		cout<<a[h]<<" ";
	}
	cout << "\n";
	
}

struct row 
{
	int count ;
	int ele[20];
};
void radix_sort(int a[] , int n, int max)
{


	int tmp;
		row bucket[10];
		int divisor = 1 ;
		for(int h = 0 ; h < 10 ; h ++)
		{
		  
		int c = bucket[h].count;
			cout<<"COUNT : "<<c;
			while(c>0)
			{
			bucket[h].ele[c]=0;
			c--;
			}
			bucket[h].count = 0 ;
			
		
		}
		

		int flag = 0;
		while(max>0)
		{
		  	max --;
		  for(int h = 0 ; h < 10 ; h ++)
		{
		  
		 	int c = bucket[h].count;
			cout<<"COUNT : "<<c;
			while(c>0)
			{
			bucket[h].ele[c]=0;
			}
			bucket[h].count = 0 ;
			
		
		}
		
			cout<<"Inside while";
			flag= 1 ;
		
				for(int i = 0 ; i < n ; i ++)
				{
					tmp = a[i]/divisor;
					cout<<"TEMP :"<<tmp<<"\n";
					int c = bucket[tmp%10].count;
					bucket[tmp%10].ele[c]=a[i];
					bucket[tmp%10].count++;
						if(flag==1&&max>0)
						{
							flag = 0;
						}		
						if(flag!= 0 )
						break;
							int index = 0 ;
						cout<<"Bucket :";
					for(int g = 0 ; g < 10 ; g ++)
					{
					  
					  int c = bucket[g].count;
					  while(c--)
					  {cout<<"\nROW "<<g<<" :"<<bucket[g].ele[c];
					    a[index++]= bucket[g].ele[c];
					    
					    
					  }
					  
					}
					cout<<"\nFlag : "<<flag;
						
				}
				
			
			
				divisor=divisor*10;
					cout<<"\nDIVISOR"<<divisor<<" ";
				

		}


	display(a,0,num);
}
int main ()
{

	int i ; 
	cout <<"Enter The Total Number Of Digits : \n";
	cin >> num ;
	//vector <int>a (num);
	int a[num]; 
	 int max = 0;
	 int min = 99999;
	for(i = 0  ; i < num ; i ++)
	{
		cin>>a[i];
		if(a[i]<min)
				min = a[i];
		if(a[i]>max)
				max = a[i];
	}
	cout<<"\nYou Entered : ";
	for(i = 0 ; i < num ; i ++)
	{
		cout<<a[i]<<" ";
	}
	
		//	bub_sort(a,num);
		//insertion_sort(a,num);
		//comb_sort(a,num);
		//counting_sort();
		//heap_sort(a,num);		
		
		//merge_sort ( a ,0, num-1 );
		//	cout<<"Merge Sort :";
		//display(a,0,num);
		
		//pigeon_hole_sort(a , num ,min ,max);
		// quick_sort(a,0,num-1);
		// display(a,0,num);

		radix_sort(a,num,max);

	return 0 ; 
	
	
}


