#include<iostream>
using namespace std;

int main()
{
	// money = 16
	// price = 2 
	// wrap = 2

	// num_c = 16/2=8 +4
	// wl =  4 
	
	// temp = 4



	int money,price,wrap;
	cin>>money>>price>>wrap;
	int num_c = 0,wrapper_left=0;


	num_c= money/price;
	wrapper_left= num_c;
	
	while(wrapper_left/wrap>=1)
	{
			//cout<<"num_c: "<<num_c<<"\t"<<"wrapper_left: "<<wrapper_left<<"\n";

		int temp = wrapper_left/wrap;

		num_c+= temp;
		wrapper_left = wrapper_left%wrap + temp;
					cout<<"num_c: "<<num_c<<"\t"<<"wrapper_left: "<<wrapper_left<<"\n";

	}

	

	cout<<"\nNumber of chocos:"<<num_c;

return 0;
}