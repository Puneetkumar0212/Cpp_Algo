#include<iostream>
#include<vector>
#include<string>
using namespace std ;



void swap ( vector <int> a , int b , int c )
{
	a[b] = a[b]+a[c];
	a[c] = a[b] - a[b];
	a[b] = a[b] - a[c];
	
	
	
}
void display (vector<int> a , int n )
{
	cout << "\n";
	for(int h = 0 ; h < n ; h ++)
	{
		cout<<a[h]<<" ";
	}
	cout << "\n";
	
}
void display (int a[] ,int i, int n )
{
	cout << "\n";
	for(int h = i ; h < n ; h ++)
	{
		cout<<a[h]<<" ";
	}
	cout << "\n";
	
}
void bub_sort(vector<int> a , int n)
{
	
	for(int i = 0 ; i < n - 1 ; i ++)
	{
		int flag = 0 ;
		for(int j = 0  ; j < n - i - 1; j++ )
		{
		
			if(a[j]>a[j+1])
			{
					cout<<"inside ";

					display(a,n);
					int temp = a[j];
					a[j] = a[j+1];
					a[j+1]= temp;
				
				flag = 1 ;
			}
			
		}
		if(flag == 0 )
		{
			break ;
		}
	}
	
	
	cout <<"Bubble Sort : ";display(a,n);
	
}


void insertion_sort (vector< int> a , int n )
{
	
		int j ; 
		for(int i  =  1 ; i < n ; i ++)
		{
			int num = a[i];
			j  = i - 1 ;
			
			while(j >= 0 &&a[j]>num)
			{
					int b = j ,c=j+1;
				
					a[b] = a[b]+a[c];
					a[c] = a[b] - a[c];
					a[b] = a[b] - a[c];
	
				j --;
			}
			a[j+1]= num ; 
		}
		cout <<"Insertion Sort : ";display(a,n);
	
}

void comb_sort(vector< int> a , int n )
{
		int gap = n/1.3;
		
		for(int g = gap  ; g >= 1 ; g = g*10/13 )
		{
			for(int i  = 0 ; i +g < n ; i ++)
			{
				if(a[i]>a[i+g])
				{
					int b = i ,c=i+g;
				
					a[b] = a[b]+a[c];
					a[c] = a[b] - a[c];
					a[b] = a[b] - a[c];
	
				}
			}
		}
	
		cout <<"Comb Sort : ";display(a,n);
}

void counting_sort ()
{
	//FOR ALPHABETS
//	char word[20];
	string word ; 
//	vector <char > word(20); 
	vector <int> temp(26);
	cout<<"Enter Word (ALL CAPS) :";
	
	cin>>word;
	std::fill(temp.begin(), temp.end(), 0);
	int size = word.length();
	cout <<size ; 
	for(int h = 0 ; h < size ; h ++)
	{
		temp[word[h]-65]++;
//		cout << temp [word[h]-65]<<" "<<word.at(h)<<"\n";
	}
	for(int i =0 ; i< 26 ; i ++)
		{
			while(temp[i]!=0)
			{
//				cout<<"india";
				cout<<((char)(i+65));
				temp[i]--;
			}
		}

	
}

void make_max_heap(vector<int> a , int n,int i  )
{
		int big = i ; 
		int l = i*2+1;
		int r = i*2+2;
		
		if(l<n &&a[l]>a[big])
		big = l;
		if(r<n &&a[r]>a[big])
		big = r;
		if(big!=i)
		{
				int b =i   ,c=big;
				
					a[b] = a[b]+a[c];
					a[c] = a[b] - a[c];
					a[b] = a[b] - a[c];
					make_max_heap(a,n,big);
					
		}
		

}
void heap_sort (vector<int > a , int n )
{

	
	for(int h = n/2 - 1  ; h >= 0 ;h-- )
	{
			make_max_heap(a,n,h);
	}	
	for(int p = n-1 ; p >= 0 ; p --)
	{
			int b = 0 ,c=p;
				
					a[b] = a[b]+a[c];
					a[c] = a[b] - a[c];
					a[b] = a[b] - a[c];
					
					
			make_max_heap(a,p,0);		
	}
	cout <<"Heap Sort : ";display(a,n);
}

void merge(int a[] , int start , int mid , int end  )
{
	
	int s1 = start ;
	int s2 = mid+1 ;
	int e1 = mid ;
	int e2 = end ;
	int i  = 0;
	int sorted[20];

	while(s1<=e1&&s2<=e2)
	{
		if(a[s1]<a[s2])
		{
			sorted[i++]=a[s1++];
		}
		else 
		{
			sorted[i++]=a[s2++];
		}
		
	}
	cout<<"\nS1 , E1 "<<s1<<" "<<e1<<"\t";
	while(s1<=e1)
	{
		sorted[i++]=a[s1++];
		
	}

	while(s2<=e2)
	{
		sorted[i++]=a[s2++];
	}
	
	for(int h = 0 ; h <i ; h ++)
	{
		a[start++]= sorted[h];
	}

	display(sorted,0,i);
}
void merge_sort(int a[], int start , int end )
{
	if(start<end)
	{
		
		int mid = (start + end )/2;
		

		merge_sort(a , start , mid );
		merge_sort(a , mid +1 , end);
		merge(a , start , mid , end);
				
	}

}



void pigeon_hole_sort( int a[] , int num,int min , int max )
{
	
	int range = max - min +1 ;


	int holes [range]= {0};

	
	for(int h = 0 ; h < num ; h ++)
	{
		holes[a[h]-min]++;
	}
	
	int index1,j;
	
		for(j = 0, index1 = 0 ; j <range &&index1<num; j ++)
		while(holes[j]!=0)
		{
			
			a[index1]= j + min;
			index1++;
			holes[j]--;
			
		}
	
	display(a,0,num);
	
}



int main ()
{

	int num,i ; 
	cout <<"Enter The Total Number Of Digits : \n";
	cin >> num ;
	//vector <int>a (num);
	int a[num]; 
	int min = INT_MAX;
	int max = INT_MIN;
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

pigeon_hole_sort(a , num ,min ,max);


	return 0 ; 
	
	
}


