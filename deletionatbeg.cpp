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
    ptr->next=*head;
    (*head)=ptr;
    return *head;
}

node *deleteBeg(node *head)
{
    node *ptr=new node;
    if(head!=NULL)
    {
        ptr=head;
        head=head->next;
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
    res=deleteBeg(head);
    cout<<"The List is : ";
    printList(res);
    return 0;
}