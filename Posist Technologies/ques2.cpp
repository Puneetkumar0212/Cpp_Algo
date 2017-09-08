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
	cout<<"\n";
}

int findinnew(node *newlist , node *prev)
{
	int val = prev->value;
	node *temp = newlist;
	while(temp)
	{
		if(temp->value==val)
			{cout<<"\nFound common "<<val;return 1;}
		else
		temp=temp->next;
	}
return 0 ;
}

void insertinnew(node *newlist, int val,node *cur)
{
	node *p = new node();
	p->value=val;
	p->next=NULL;


	node *temp = newlist;

	while(temp)
	{
			// cur = temp;
			if(temp->next!=NULL&&temp->value<val&&temp->next->value>val)
			{
					node *right = temp->next;
					temp->next = p;
					p->next= right;
					return;
			}
			else if(temp->next==NULL)
			{
				temp->next=p;
				cur = p ;
				return;

			}
			temp = temp->next;
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
    	// display(head);
		
		node *head2=NULL;
		node *ptr2=NULL;

		while(head)
		{
				if(head2!=NULL)
				{
					if(findinnew(head2,head)==0)
					{
						// cout<<"Unique";
						 insertinnew(head2,head->value,ptr2);
						

					}
					else{
						// cout<<"Not Unique";
					}
				}
				else
				{
					
					node *f= new node();
					f->value = head->value;
					f->next= NULL;
					head2=f;
					ptr2=f;

					
				}
				head = head->next;
		}


display(head2);

}