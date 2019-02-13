#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
bool checkValue(node *head,int val);
struct node* push(node **head,int val)
{
	node *ptr=new node;
	node *ptr1=new node;
	ptr->data=val;
	ptr->next=NULL;
	if(*head==NULL)
	{
		*head=ptr;
	}
	else 
	{
		ptr1=*head;
		while(ptr1->next!=NULL)
		{
			ptr1=ptr1->next;
		}
		ptr1->next=ptr;
	}
	return *head;
}
/*struct node* intersection(node *a,node *b)
{
	if(a==NULL && b==NULL)
	{
		return NULL;
	}
	else if(a->data < b->data)
	{
		return intersection(a->next,b);
	}
	else if(a->data > b->data)
	{
		return intersection(a,b->next);
	}
	else 
	{
		node *temp=new node;
		temp->data=a->data;
		temp->next=intersection(a->next,b->next);
		return temp;
	}
}*/
struct node* intersection(node *a,node *b)
{
	node *ptr=new node;
	ptr=NULL;
	node *ptr1=new node;
	ptr1=a;
	while(ptr1!=NULL)
	{
		if(checkValue(b,ptr1->data))
		{
			push(&ptr,ptr1->data);
		}
		ptr1=ptr1->next;
	}
	return ptr;
}
bool checkValue(node *head,int val)
{
	node *temp=new node;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==val)
		{
			return 0;
		}
		temp=temp->next;
	}
	return 1;
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
	struct node *a=NULL;
	struct node *b=NULL;
	struct node *val=NULL;
	int i,n,n1,m,m1;
	cout<<"Enter the Size of First List : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m;
		push(&a,m);
	}
	cout<<"The First List is : ";
	printList(a);
	cout<<endl;
	cout<<"Enter the Size of Second List : ";
	cin>>n1;
	for(i=0;i<n1;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m1;
		push(&b,m1);
	}
	cout<<"The Second List is : ";
	printList(b);
	val=intersection(a,b);
	cout<<"The intersection of Two List is : ";
	printList(val);
	return 0;
}