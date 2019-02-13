#include <iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
};

node *insert(node **head,int data)
{
    node *ptr=new node;
    ptr->data=data;
    ptr->next=NULL;
    if(*head==NULL)
    {
        *head=ptr;
    }
    else 
    {
        node *ptr2=*head;
        while(ptr2->next!=NULL)
        {
            ptr2=ptr2->next;
        }
        ptr2->next=ptr;
    }
    return *head;
}

node *deleteEnd(node *head)
{
    node *ptr,*ptr1;
    if(head==NULL)
    {
        cout<<"The List is Empty "<<endl;
    }
    else 
    {
        ptr=head;
        ptr1=head;
        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        if(ptr==head)
        {
            head=NULL;
        }
        else 
        {
            ptr1->next=NULL;
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
    node *head = NULL;
    node *res = NULL;
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
    res=deleteEnd(head);
    cout<<"The List is : ";
    printList(res);
    return 0;
}