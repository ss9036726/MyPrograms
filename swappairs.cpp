#include <iostream>
using namespace std;

struct node 
{
	int data;
	node *next;
};
void push(struct node** head,int m)
{
	node *temp=new node;
	temp->data=m;
	temp->next=*head;
	*head=temp;
}
node* swap_pair(struct node* list)
{
 	node *p=new node;
 	node *t=new node;
 	p=list;
 	t=p->next;
 	while(1) {
 		node *q=NULL;
 		node *temp=NULL;
 		q=p->next;
 		temp=q->next;
 		if(temp==NULL && temp->next==NULL)
 		{
 			p->next=NULL;
 			break;
 		}
 		p->next=temp->next;
 		p=temp; 	
 	}
	return t;
}
void printlist(struct node *n)
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
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);

	cout<<"List After calling pair wise :";
	printlist(head);
	swap_pair(head);
	cout<<"List Before calling pair wise : ";
	printlist(head);

	return 0;
}