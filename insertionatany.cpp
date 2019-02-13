#include <iostream>
using namespace std;

struct node {
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

node *insertionatany(node *head,int pos,int val)
{
	node *ptr = new node;
	node *ptr1 = new node;
	ptr->data=val;
	ptr->next=NULL;
	if(pos==0)
	{
		ptr->next=head;
		head=ptr;
		return head;
	}
	else 
	{
		ptr1=head;
		for(int i=0;i<pos-1;i++)
		{
			ptr1=ptr1->next;
		}
		ptr->next=ptr1->next;
		ptr1->next=ptr;
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
	int pos,n1;
	cin>>pos;
	cin>>n1;
	res = insertionatany(head,pos,n1);
	printList(res);
	return 0;
}
