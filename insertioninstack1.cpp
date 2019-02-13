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
	ptr->data=val;
	ptr->next=NULL;
	if(*head==NULL)
	{
		*head=ptr;
	}
	else
	{
		ptr->next=*head;
		*head=ptr;
	}
	return *head;
}
int peek(node **head)
{
	return ((*head)->data);
}
node *pop(node **top)
{
	node *ptr=new node;
	ptr=*top;
	if(*top==NULL)
	{
		cout<<"Stack is UnderFlow"<<endl;
	}
	else 
	{
		*top=(*top)->next;
		delete ptr;
	}
	return *top;
}
node *display(node **head)
{
	node *ptr;
	ptr=*head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
	return (*head);
}
int main()
{
	struct node *head=NULL;
	int i,n,m;
	cout<<"Enter the Value : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		push(&head,m);
	}
	display(&head);
	peek(&head);
	cout<<"Value After Poping : "<<endl;
	pop(&head);
	display(&head);
	return 0;
}