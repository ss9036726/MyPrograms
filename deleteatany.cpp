#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node *insert(node **head,int val)
{
	node *ptr=new node;
	ptr->data=val;
	ptr->next=NULL;
	if(*head==NULL)
	{
		*head=ptr;
	}
	else 
	{
		node *ptr1=*head;
		while(ptr1->next!=NULL)
		{
			ptr1=ptr1->next;
		}
		ptr1->next=ptr;
	}
	return *head;
}

node *deleteatAny(node *head,int pos)
{
	if(pos==0)
	{
		return head->next;
	}
	head->next=deleteatAny(head->next,pos-1);
	return head;
	
	/*
	if(pos==0)
	{
		return head->next;
	}
	node *ptr=head;
	node *ptr1=head;
	int i;
	for(i=0;i<pos;i++)
	{
		ptr1=ptr;
		if(ptr->next==NULL)
		{
			break;
		}
		ptr=ptr->next;
	}
	ptr1->next=ptr->next;
	return head;
	*/
	
	/*node *ptr=head;
	node *ptr1=head;
	int i;
	for(i=0;i<pos;i++)
	{
		ptr1=ptr;
		ptr=ptr->next;
	}
	ptr1->next=ptr->next;
	delete(ptr);
	return head;*/
}

void display(node *head)
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
	int i,n,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		insert(&head,m);
	}
	display(head);
	int pos;
	cin>>pos;
	deleteatAny(head,pos);
	display(head);
	return 0;
}
