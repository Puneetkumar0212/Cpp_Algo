#include<iostream>
using namespace std;

struct node 
{
	int value;
	node *next ;
};

void display(node *head)
{
	node *temp=head;
	while(temp)
	{
		cout<<temp->value<<" ";
		temp=temp->next;
	}
}
int main()
{
		int n ;
		cin>>n;
		node *ptr=NULL;
		node *head=NULL;

		for(int i = 0 ; i < n ; i ++)
		{
			node *p = new node();
			cin>>p->value;
			p->next=NULL;

			if(ptr!=NULL)
			{
				ptr->next = p;
				ptr = ptr->next;

			}
			else
				{ptr=p;head=p;}

		}


}