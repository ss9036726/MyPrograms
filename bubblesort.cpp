#include <iostream>
using namespace std;

struct node 
{
	int data;
	node *next;
};
void push(node **head,int val)
{
	node *ptr=new node;
	node *n=new node;
	ptr=*head;
	n->data=val;
	n->next=NULL;
	if(*head==NULL)
	{
		*head=n;
	}
	else 
	{
		ptr=*head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=n;
	}
}
void bsort(node *head,int n)
{
	int temp;
	node *ptr=head;
	for(int i=0;i<n;i++)
	{
		while(ptr->next)
		{
			if(ptr->data > ptr->next->data)
			{
				temp=ptr->data;
				ptr->data=ptr->next->data;
				ptr->next->data=temp;
				ptr=ptr->next;
			}
			else 
			{
				ptr=ptr->next;
			}
		}
		ptr=head;
	}
	//return *head;
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
	struct node* head=NULL;
	int i,n,m;
	cout<<"Enter the Value : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		push(&head,m);
	}
	//display(head);
	bsort(head,n);
	display(head);
	return 0;
}