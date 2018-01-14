#include<iostream>
#include<cmath>
using namespace std;
struct node
{
	int val;
	node *next;
};

int findlen(node *head)
{
	int len = 0 ;
	node *n = head;
	while(n!=NULL)
		{
			len++;
			n = n->next;
		}


	return len;	
}


void fun(node *a , node *b)
{

	int lena = findlen(a);
	int lenb = findlen(b);
	int max = (lena>lenb)?lena:lenb;
	int diff = abs(lena-lenb);
	int d =diff;
	// cout<<diff<<"\n";
	if(lena>lenb)
		while(diff--)
		{
			
			a = a->next;
			
		}
	else
		while(diff--)
		{
			
			b = b->next;
			
		}
	// max -= d;
	// cout<<a->val<<"\n"<<b->val;
	while(a!=NULL && b!=NULL && max--)
	{
		if(a==b)
			{	
				cout<<"\nThey intersect at "<<a->val<<endl;
				return;
			}
		a=a->next;
		b=b->next;		
	}
cout<<"\nThey do not intersect\n";
return;

}



int main()
{

	/*Head1 = 3 , 6, 9 , 15 ,30*/
	/*Head2 = 10, 15 , 30 */
	/* common node starts at 15*/

		node *head1 = new node;
		node *head2 = new node;
		node *start1 = head1;
		node *start2 = head2;

	    /*Adding temp values*/

		head2->val=10;


		head1->val=3;
		node *h12 = new node;
		h12->val=6;
		head1->next = h12;
		head1= head1->next;


		node *h13 = new node;
		h13->val=9;
		head1->next = h13;
		head1= head1->next;



		node *h14 = new node;
		h14->val=15;
		head1->next = h14;
		head2->next = h14;
		head1= head1->next;
		head2=head2->next;

		node *h15 = new node;
		h15->val=30;
		head1->next = h15;
		head2->next = h15;
		head1= head1->next;
		head2=head2->next;

		head1->next=NULL;
		head2->next=NULL;

		fun(start1,start2);




}