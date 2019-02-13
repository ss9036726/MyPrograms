#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
struct node* newnode(int data)
{
	node *temp=new node;
	temp->data=data;
	temp->next=NULL;
	return temp;
}
void push(struct node **head,int m)
{
	node *temp=new node;
	temp->data=m;
	temp->next=*head;
	*head=temp;
}
struct node* add(struct node* first,struct node* second)
{
	struct node *res=NULL;
	struct node *temp,*prev=NULL;
	int carry=0,sum;
	while(first!=NULL || second!=NULL)
	{
		sum=carry+(first?first->data:0)+(second?second->data:0);
		carry=(sum>=10)?1:0;
		sum=sum%10;
		temp=newnode(sum);

		if(res==NULL)
			res=temp;
		else
			prev->next=temp;
			prev=temp;
		if(first)
		{
			first=first->next;
		}
		if(second)
		{
			second=second->next;
		}
	}
	if(carry>0)
	{
		temp->next=newnode(carry);
	}
	return res;
}
void printList(struct node* n)
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
	struct node* res=NULL;
	struct node* first=NULL;
	struct node* second=NULL;

	push(&first,9);
	push(&first,9);
	push(&first,7);
	push(&first,5);
	cout<<"The first list is : ";
	printList(first);

	push(&second,9);
	push(&second,1);
	push(&second,5);
	cout<<"The Second List is : ";
	printList(second);

	res=add(first,second);
	cout<<"The Result is : ";
	printList(res);
	return 0;
}	