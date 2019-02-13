#include <iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* push(node **top,int val)
{
	node *ptr=new node;
	ptr->data=val;
	ptr->next=NULL;
	if(*top==NULL)
	{
		*top=ptr;
	}
	else 
	{
		ptr->next=*top;
		*top=ptr;
	}
	return *top;
}
int peek( node **top)
{
	return ((*top)->data);
}
node* pop(struct node **top)
{
	node *ptr=new node;
	ptr=*top;
	if(*top==NULL)
	{
		cout<<"Stack UnderFlow"<<endl;
	}
	else
	{
		*top=(*top)->next;
		delete ptr;
	}
	return *top;
}
node *display(struct node **top)
{
	node *ptr;
	ptr=*top;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
	return *top;
}
int main()
{
	struct node *top=NULL;
	int i,n,m;
	cout<<"Enter the Value : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		push(&top,m);
	}
	display(&top);
	peek(&top);
	display(&top);
	pop(&top);
	display(&top);
	return 0;
}