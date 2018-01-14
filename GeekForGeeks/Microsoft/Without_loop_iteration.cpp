#include <iostream>
using namespace std;
int N;
void add(int n )
{
	if(n==N)
		{
			cout<<N<<" ";
			return ;
		}
	else
	{
		cout<<n<<" ";
		add(n+5);
	}
}
void del(int n )
{
	if(n<=0)
		{cout<<n<<" ";
			add(n+5);
		}
	else
	{
		cout<<n<<" ";
		del(n-5);
	}
	return ;
}




int main() {

	int num;
	cin>>num;
	N=num;
	del(num);
	
	
	return 0;
}