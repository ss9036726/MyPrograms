#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};

node *insert(node **head,int val)
{
	node *ptr=new node;
	ptr->data=val;
	ptr->next=*head;
	ptr->prev=NULL;
	if(*head!=NULL){
		(*head)->prev=ptr;
	}
	*head=ptr;
	return *head;
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
	int i,n,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		insert(&head,m);
	}
	printList(head);
	return 0;
}
