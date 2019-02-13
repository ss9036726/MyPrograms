#include <iostream>
using namespace std;

struct node 
{
	int data;
	node *next;
};
node* pushF(node **front,node **rear,int m)
{
	node *temp,*n;
	temp=*front;
	n=new node;
	n->data=m;
	n->next=NULL;
	if((*front)==NULL)
	{
		*front=n;
		*rear=n;
	}
	else 
	{
		n->next=(*front);
		(*front)=n;
	}
	return (*front);
}
node* pushE(node **front,node **rear,int m1)
{
	node *temp,*n;
	temp=*rear;
	n=new node;
	n->data=m1;
	n->next=NULL;
	if((*front)==NULL)
	{
		*front=n;
		*rear=n;
	}
	else 
	{
		n->next=(*rear);
		(*rear)=n;
	}
	return (*rear);
}
void display(struct node **front,struct node **rear)
{
	node *temp;
	temp=*front;
	while(temp!=(*rear)->next)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	struct node* front=NULL;
	struct node* rear=NULL;

	int i,n,m;
	cout<<"Enter the size : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		pushF(&front,&rear,m);
	}
	display(&front,&rear);
	int m1;
	cin>>m1;
	pushE(&front,&rear,m1);
	display(&front,&rear);
	return 0;
}