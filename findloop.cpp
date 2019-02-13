#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};
struct node *push(struct node **head,int m);
node* push(node **head,int m)
{
	node *temp=new node;
	temp->data=m;
	temp->next=*head;
	*head=temp;
	return *head;
}

struct node *detectloop(struct node *head);
node* detectloop(node *head)
{
	node *fast,*slow;
	fast=head;
	slow=head;
	while(fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			cout<<"Loop Found";
			break;
		}
	}
	return 0;

}

int main()
{
	struct node *head=NULL;
	int i,n,m;
	cout<<"Enter the size of list : ";
	for(i=0;i<n;i++)
	{
		cout<<"The Value is : ";
		cin>>m;
		push(&head,m);
	}
	head->next->next->next->next=head;
	detectloop(head);
	return 0;
}