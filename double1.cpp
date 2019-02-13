#include <iostream>
using namespace std;

class double1 
{
public:
	struct node
	{
		int data;
		node *next,*prev;
	}*p;
	double1();
	void insert_at_beg(int m);
	//int insert_at_end(int m);
	void display();
};
double1::double1()
{
	p=NULL;
}
void double1::insert_at_beg(int m)
{
	node *temp=new node;
	temp->data=m;
	temp->next=p;
	temp->prev=NULL;
	if(p!=NULL)
	{
		p->prev=m;
	}
	p=m;
}
void double1::display()
{
	node *n;
	n=p;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
	cout<<endl;
}
int main()
{
	double1 d;
	int i,n,m;
	cout<<"Enter the Size of List : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		d.insert_at_beg(m);
	}
	d.display();
	return 0;
}