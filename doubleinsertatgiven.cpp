#include <iostream>
using namespace std;
struct node 
{
	int data;
	node *next;
	node *prev;
};
struct node* push(node **head,int val)
{
	node *ptr=new node;
	node *ptr1=new node;
	ptr->data=val;
	ptr->next=NULL;
	if(*head==NULL)
	{
		ptr->prev=NULL;
		*head=ptr;
	}
	else 
	{
		ptr1=*head;
		while(ptr1->next!=NULL)
		{
			ptr1=ptr1->next;
		}
		ptr1->next=ptr;
		ptr->prev=ptr1;
	}
	return *head;
}
void insertAfter(node *head,int val)
{
	node *ptr=new node;
	ptr->data=val;
	ptr->next=head->next;
	head->next=ptr;
	ptr->prev=head;
	if(ptr->next!=NULL)
	{
		ptr->next->prev=ptr;
	}
}
void printList(node *n)
{
	node *l=new node;
	cout<<"The List is : ";
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		l=n;
		n=n->next;
	}
	cout<<endl;
}
int main()
{
	struct node *head=NULL;

	int i,n,m,m1;
	cout<<"Enter the Size of list : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m;
		push(&head,m);
	}
	printList(head);
	cout<<"Enter at given Position : ";
	cin>>m1;
	insertAfter(head->next,m1);
	printList(head);
	return 0;
}