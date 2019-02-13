#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next,*prev;
};

node* push(struct node **head,int m)
{
	node *temp=new node;
	temp->data=m;
	temp->next=(*head);
	temp->prev=NULL;
	if((*head)!=NULL)
	{
		(*head)->prev=m;
	}
	(*head)=m;
	return (*head);
}
void printList(struct node *n)
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
	push(&head,5);
	push(&head,7);
	push(&head,8);
	push(&head,9);

	cout<<"The list is : ";
	printList(head);
	return 0;
}