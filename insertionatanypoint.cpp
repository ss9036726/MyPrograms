#include <iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
};

node *insert(node **head,int val)
{
    node *ptr=new node;
    ptr->data=val;
    ptr->next=NULL;
    if(*head==NULL)
    {
        *head=ptr;
    }
    else 
    {
        node *ptr1=*head;
        while(ptr1->next!=NULL)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=ptr;
    }
    return *head;
}

node *insertAtAny(node *head,int data,int postition)
{
    node *ptr=new node;
    node *ptr1=new node;
    ptr->data=data;
    ptr->next=NULL;
    if(postition==0)
    {
        ptr->next=head;
        head=ptr;
    }
    else 
    {
        ptr1=head;
        for(int i=0;i<postition-1;i++)
        {
            ptr1=ptr1->next;
        }
        ptr->next=ptr1->next;
        ptr1->next=ptr;
    }
    return head;
}

void printList(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    node *head=NULL;
    node *res=NULL;
    int i,n,m;
    cout<<"Enter the size of the List : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(i=0;i<n;i++)
    {
        cin>>m;
        insert(&head,m);
    }
    cout<<"The List is : ";
    printList(head);
    int n1,m1;
    cout<<"Enter the position : ";
    cin>>n1;
    cout<<"Enter the value : ";
    cin>>m1;
    res=insertAtAny(head,m1,n1);
    cout<<"The New List is : ";
    printList(res);
    return 0;
}