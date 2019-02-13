#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node* push(node **head,int m)
{
	node *ptr=new node;
	ptr->data=m;
	ptr->next=*head;
	*head=ptr;
	return *head;
}
void printMiddle(struct node *head)
{
	node *slow_ptr=head;
	node *fast_ptr=head;
	if(head!=NULL)
	{
		while(fast_ptr!=NULL && fast_ptr->next!=NULL)
		{
			fast_ptr=fast_ptr->next->next;
			slow_ptr=slow_ptr->next;
		}
		cout<<slow_ptr->data;
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
	struct node *head=NULL;
	int i,n,m;
	cout<<"Enter the Size of list : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Value : ";
		cin>>m;
		push(&head,m);
	}
	cout<<"The list is : ";
	display(head);
	cout<<endl;
	cout<<"The Middle Element is : ";
	printMiddle(head);
	return 0;
}