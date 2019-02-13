#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
struct node* push(node **head,int val)
{
	node *ptr=new node;
	node *ptr1=new node;
	ptr1->data=val;
	ptr1->next=NULL;
	if(*head==NULL)
	{
		*head=ptr1;
	}
	else
	{
		ptr=*head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=ptr1;
	}
	return *head;
}
bool valid(node *first,node *second)
{
	while(first!=NULL || second!=NULL)
	{
		if(first->data!=second->data)
		{
			return false;
		}
		first=first->next;
		second=second->next;
	}
	return (first==NULL && second==NULL);
}
void printList(node *n)
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
	struct node* first=NULL;
	struct node* second=NULL;
	int i,n,n1,m,m1;
	cout<<"Enter the First List : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m;
		push(&first,m);
	}
	printList(first);
	cout<<endl;
	cout<<"Enter the second List : ";
	cin>>n1;
	for(i=0;i<n1;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m1;
		push(&second,m1);
	}
	printList(second);
	cout<<endl;
	valid(first,second)?cout<<"Valid":cout<<"Invalid";
	return 0;
}