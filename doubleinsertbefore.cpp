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
void insertBefore(node *head,int val)
{
	node *ptr=new node;
	ptr->data=val;
	ptr->prev=head->prev;
	head->prev=ptr;
	ptr->next=head;
	if(ptr->prev!=NULL)
	{
		ptr->prev->next=ptr;
	}
}
void printList(node *n)
{
	node *l=new node;
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
	struct node* head=NULL;

	int i,n,m,m1;
	cout<<"Enter the size of the List : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m;
		push(&head,m);
	}
	cout<<"The List is : ";
	printList(head);
	cout<<endl<<"Enter the Value in a given Point : ";
	cin>>m1;
	insertBefore(head->next,m1);
	cout<<"The List is : ";
	printList(head);
	return 0;
}
