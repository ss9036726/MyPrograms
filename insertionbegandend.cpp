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
	ptr->data=val;
	ptr->next=*head;
	*head=ptr;
	return *head;
}
struct node* append(node **head,int val)
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
	struct node *head=NULL;

	push(&head,1);
	append(&head,4);
	push(&head,5);
	append(&head,6);

	printList(head);
	return 0;
}