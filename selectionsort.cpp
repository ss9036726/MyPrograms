#include <iostream>
using namespace std;
struct node
{
 	int data;
 	node *next;
};
node *push(node **head,int val)
{
	node *ptr=new node;
	node *n=new node;
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
	return *head;
}
void selectionsort(node *head)
{
	node *temp=new node;
	node *ptr1=new node;
	node *ptr2=new node;
	ptr1=head;
	ptr2=head->next;
	while(ptr1->next!=NULL)
	{
		while(ptr2->next!=NULL)
		{
			if(ptr2->data > ptr1->data)
			{
				temp=ptr2;
				ptr2=ptr1;
				ptr1=temp;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
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
	cout<<"Enter the Size of List : ";
	cin>>n;
	cout<<"Enter the Value : ";
	for(i=0;i<n;i++)
	{
		cin>>m;
		push(&head,m);
	}
	//display(head);
	selectionsort(head);
	//display(head);
	return 0;
}