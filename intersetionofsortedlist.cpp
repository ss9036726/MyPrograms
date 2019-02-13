#include <iostream>
using namespace std;
struct node 
{
	int data;
	node *next;
};
node *push(node **head,int m)
{
	node *ptr=new node;
	ptr->data=m;
	ptr->next=*head;
	*head=ptr;
	return *head;
}
node* sortintersect(node *a,node *b)
{
	if(a==NULL && b==NULL)
	{
		return NULL;
	}
	else if(a->data < b->data)
	{
		return (sortintersect(a->next,b));
	}
	else if(a->data > b->data)
	{
		return (sortintersect(a,b->next));
	}
	else 
	{
		node *temp=new node;
		temp->data=a->data;
		temp->next=sortintersect(a->next,b->next);
		return temp;
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
	struct node *a=NULL;
	struct node *b=NULL;
	struct node *intersect=NULL;

	int i,n,n1,m,m1;
	cout<<"Enter the size of First List : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m;
		push(&a,m);
	}
	cout<<"The First List is : ";
	display(a);
	cout<<endl;
	cout<<"Enter the size of Second List : ";
	cin>>n1;
	for(i=0;i<n1;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m1;
		push(&b,m1);
	}
	cout<<"The Second List is : ";
	display(b);
	cout<<endl;
	intersect=sortintersect(a,b);
	cout<<"List Containing the common item is : ";
	display(intersect);
	cout<<endl;
	return 0;
}