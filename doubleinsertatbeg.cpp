#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	node *prev;
};
void push(node **head,int val)
{
	node *ptr=new node;
	ptr->data=val;
	ptr->next=*head;
	ptr->prev=NULL;
	if((*head) != NULL)
	{
		(*head)->prev=ptr;
	}
	(*head)=ptr;
}
void printList(node *n)
{
	node *last=new node;
	//last=n;
	cout<<"The List is : ";
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		last=n;
		n=n->next;
	}
	cout<<endl;
}

int main()
{
	struct node *head=NULL;

	int i,n,m;
	cout<<"Enter the Value : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m;
		push(&head,m);
	}
	printList(head);
	return 0;
}