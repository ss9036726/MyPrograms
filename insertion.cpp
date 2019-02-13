#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
void sorting(node **result,node *val);
struct node* push(node **head,int val)
{
	node *ptr=new node;
	ptr->data=val;
	ptr->next=*head;
	*head=ptr;
	return *head;
}
struct node* insertion(node **head)
{
	node *ptr=NULL;
	node *ptr1=new node;
	ptr1=*head;
	while(ptr1!=NULL)
	{
		node *temp=new node;
		temp=ptr1->next;
		sorting(&ptr,ptr1);
		ptr1=temp;
	}
	return ptr;
}
void sorting(node **result,node *val)
{
	node *temp=new node;
	if(*result==NULL || (*result)->data >=val->data)
	{
		val->next=*result;
		*result=val;
	}
	else
	{
		temp=*result;
		while(temp->next!=NULL && temp->next->data < val->data)
		{
			temp=temp->next;
		}
		val->next=temp->next;
		temp->next=val;
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
	struct node *head=NULL;
	struct node *result=NULL;

	int i,n,m;
	cout<<"Enter the Sie of the List : ";
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
	cout<<endl<<"The Sorted List is :";
	display(result);
	return 0;
}