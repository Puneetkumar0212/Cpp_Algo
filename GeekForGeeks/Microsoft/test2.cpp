#include <iostream>
using namespace std;
struct p
{
	int x ;
	int y ;
	p *next ;
};



int main() {
	// your code goes here
	cout<<"start";
	int num ,count=0;
	cin>>num;
	p a[num];
	int slope = 0,slope_temp=0 ;
	int temp_x= 0 , temp_y= 0 ;
	for(int i = 0 ; i < num ; i ++)
	{
		
		cin>>a[i].x>>a[i].y;
	
		if(i!=0)
		{
			slope = (a[i].y - temp_y)/(a[i].x-temp_x);
			if(slope_temp!=slope)
				{	
					count ++;
					cout<<i<<"\t"<<count;}

		}
		
		
			temp_x = a[i].x;
			temp_y = a[i].y;
			slope_temp = slope;
		
	}
	cout<<count;
	return 0;
}