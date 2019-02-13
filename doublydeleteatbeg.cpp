#include <iostream>
using namespace std;

struct node 
{
    int data;
    node *next,*prev;
};

node *insert(node **head,int val)
{
    node *ptr=new node ;
    ptr->data=val;
    ptr->next=*head;
    ptr->prev=NULL;
    if(*head!=NULL)
    {
        (*head)->prev=ptr;
    }
    *head=ptr;
    return *head;
}

node *deleteatBeg(node *head)
{
    if(head==NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else 
    {
        node *ptr=head;
        head=head->next;
        if(head!=NULL)
        {
            head->prev=NULL;
        }
        delete ptr;
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
    cout<<"Enter the size of list : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(i=0;i<n;i++)
    {
        cin>>m;
        insert(&head,m);
    }
    cout<<"The List is : ";
    printList(head);
    res=deleteatBeg(head);
    cout<<endl<<"After Deleting node at beg the list is : ";
    printList(res);
    return 0;
}