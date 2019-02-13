#include <iostream>
using namespace std;
struct node 
{
	int data;
	node *next;
};
void SortedList(node **result,node *new_node);
struct node* push(node **head,int val)
{
	node *ptr=new node;
	node *ptr1=new node;
	ptr=*head;
	ptr1->data=val;
	ptr1->next=NULL;
	if(*head==NULL)
	{
		*head=ptr1;
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=ptr1;
	}
	return ptr;
}
struct node* insertion(node **head)
{
	struct node *ptr=NULL;
	node *ptr1=new node;
	ptr1=*head;
	while(ptr1!=NULL)
	{
		node *temp=new node;
		temp=ptr1->next;
		SortedList(&ptr,ptr1);
		ptr1=temp;
	}
	return ptr;
}
void SortedList(node **result,node *new_node)
{
	node *temp=new node;
	if(*result==NULL || (*result)->data >=new_node->data)
	{
		new_node->next=*result;
		*result=new_node;
	}
	else
	{
		temp=*result;
		while(temp->next!=NULL && temp->next->data < new_node->data)
		{
			temp=temp->next;
		}
		new_node->next=temp->next;
		temp->next=new_node;
	}
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
	node *head=NULL;
	node *result=NULL;

	int i,n,m;
	cout<<"Enter the Size of The List : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m;
		push(&head,m);
	}
	cout<<"The List is : ";
	display(head);
	result=insertion(&head);
	cout<<endl<<"The Sorted List is : ";
	display(result);
	return 0;
}