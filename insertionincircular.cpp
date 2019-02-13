#include <iostream>
using namespace std;
struct node 
{
	int data;
	node *next;
};
struct node *addEmpty(node **head,int val)
{
	if(*head!=NULL)
	{
		return *head;
	}
	node *ptr=new node;
	ptr->data=val;
	ptr->next=*head;
	return *head;
}
struct node *push(node **head,int m)
{
	if(*head==NULL)
	{
		return addEmpty(head,m);
	}
	node *ptr=new node;
	ptr->data=m;
	ptr->next=(*head)->next;
	(*head)->next=ptr;
	return *head;
}
void printList(node *head)
{
	node *ptr;
	ptr=head->next;
	do
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	while(ptr!=head->next);
}

int main()
{
	struct node *head=NULL;
	addEmpty(&head,13);
	push(&head,14);
	push(&head,10);
	push(&head,5);
	push(&head,3);
	printList(head);
	return 0;
}