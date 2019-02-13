#include <iostream>
using namespace std;

struct node 
{
	int data;
	node *next;
	node *prev;
};

node *insert(node **head,int val)
{
	node *ptr=new node;
	ptr->data=val;
	ptr->next=NULL;

	if(*head==NULL)
	{
		*head=ptr;
		ptr->prev=NULL;
	}
	else
	{
		node *ptr1=*head;
		while(ptr1->next!=NULL)
		{
			ptr1=ptr1->next;
		}
		ptr1->next=ptr;
		ptr->prev=ptr1;
	}
	return *head;
}

node *reverse(node *head)
{
	node *ptr=new node;
	while(head!=NULL)
	{
		ptr=head->prev;
		head->prev=head->next;
		head->next=ptr;
		head=head->prev;
	}
	if(ptr!=NULL)
	{
		head=ptr->prev;
	}
	return head;
}

void printList(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	node *head=NULL;
	node *res=NULL;
	int i,n,m;
	cin>>n;
	for(i=0;i<n;i++)	
	{
		cin>>m;
		insert(&head,m);
	}
	printList(head);
	res = reverse(head);
	printList(res);
	return 0;
}
