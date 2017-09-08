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

int findinnew(node *newlist , node *prev)
{
	int val = prev->value;
	node *temp = newlist;
	while(temp)
	{
		if(temp->value==val)
			return 1;

		temp=temp->next;
	}
return 0 ;
}

void insertinnew(node *newlist, node *prev,node *cur)
{
	node *p = NULL;
	int val = prev->value;
	p->value=val;
	p->next=NULL;
	node *temp = newlist;
	while(temp)
	{
			cur = temp;
			if(temp->next!=NULL&&temp->value<val&&temp->next->value>val)
			{
					node *right = temp->next;
					temp->next = p;
					p->next= right;
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
    	display(head);
		
		node *head2=NULL;
		node *ptr2=NULL;
		node *start=head;
		while(start)
		{
				if(head2==NULL)
				{
					head2->value=start->value;
					head2->next=NULL;
					ptr2=head2;
				}
				else
				{
					if(findinnew(head2,head)==0)
					{
						insertinnew(head2,start,ptr2);

					}

				}
				start=start->next;
		}


display(head2);

}