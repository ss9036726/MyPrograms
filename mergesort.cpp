#include <iostream>
using namespace std;
struct node
{	
	int data;
	node *next;	
};
node* push(node **head,int val)
{
	node *ptr=new node;
	ptr->data=val;
	ptr->next=*head;
	*head=ptr;
	return *head;
}
node* mergesort(node *a,node *b)
{
	node *ptr,*ptr1,*ptr2;
	ptr=ptr1=NULL;
	while(1)
	{
		if(a==NULL)
		{
			ptr1->next=b;
			break;
		}
		if(b==NULL)
		{
			ptr1->next=a;
			break;
		}

		if(a->data <= b->data)
		{
			ptr2=a;
			a=a->next;
		}
		else
		{
			ptr2=b;
			b=b->next;
		}

		if(ptr==NULL)
		{
			ptr=ptr1=ptr2;
		}
		else
		{
			ptr1->next=ptr2;
			ptr1=ptr2;
		}
		ptr1->next=NULL;
	}
	return ptr;
}
void display(node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
	cout<<endl;
}

int main()
{
	struct node *a=NULL;
	struct node *b=NULL;
	struct node *merges=NULL;
	push(&a,9);
	push(&a,4);
	push(&a,8);
	push(&a,5);
	cout<<endl;
	cout<<"The first List is : ";
	display(a);
	cout<<endl;
	push(&b,1);
	push(&b,7);
	push(&b,3);
	push(&b,2);
	cout<<"The second List is : ";
	display(b);
	cout<<endl;
	merges=mergesort(a,b);
	display(merges);
	return 0;
}