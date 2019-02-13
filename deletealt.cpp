#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
void deleteAlt(struct node *head)
{
	node *prev=new node;
	node *ptr=new node;
	prev=head;
	ptr=head->next;
	while(prev!=NULL && ptr!=NULL)
	{
		prev->next=ptr->next;
		delete ptr;
		prev=prev->next;
		if(prev!=NULL)
		{
			ptr=prev->next;
		}
	}
}
struct node* push(node **head,int val)
{
	node *ptr=new node;
	ptr->data=val;
	ptr->next=*head;
	*head=ptr;
	return *head;
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
	struct node *head=NULL;

	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	cout<<"The List is : ";
	printList(head);
	deleteAlt(head);
	cout<<"The Alternate value is : ";
	printList(head);
}