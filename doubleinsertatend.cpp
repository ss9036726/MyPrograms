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
	ptr1=*head;
	ptr->data=val;
	ptr->next=NULL;
	if(*head==NULL)
	{
		ptr->prev=NULL;
		(*head)=ptr;
	}
	else 
	{
		while(ptr1->next!=NULL)
		{
			ptr1=ptr1->next;
		}
		ptr1->next=ptr;
		ptr->prev=ptr1;
	}
	return *head;
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

	int i,n,m;
	cout<<"Enter the size of list : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the value : ";
		cin>>m;
		push(&head,m);
	}
	cout<<"The list is : ";
	printList(head);
	return 0; 
}