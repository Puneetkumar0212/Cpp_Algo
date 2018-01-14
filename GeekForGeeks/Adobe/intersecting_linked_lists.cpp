#include<iostream>
using namespace std;
struct node
{
	int val;
	node *next;
};

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
		head2->next=NULL:

		



}