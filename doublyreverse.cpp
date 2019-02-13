#include <iostream>
using namespace std;

struct doubly{
    int data;
    doubly *next,*prev;
};

doubly *insertatbeg(doubly **head,int val)
{
    doubly *ptr = new doubly;
    ptr->data = val;
    ptr->next = NULL;

    if(*head==NULL)
    {
        ptr->prev=NULL;
        *head=ptr;
    }
    else 
    {
        doubly *ptr1= *head;
        while(ptr1->next!=NULL)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=ptr;
        ptr->prev=ptr1;
    }
    return *head;
}

doubly *reverseList(doubly *head)
{
    doubly *ptr=NULL;
    while(head!=NULL)
    {
        ptr=head->prev;
        head->prev=head->next;
        head->next=ptr;
        head=head->prev;
    }
    if(ptr!=NULL)
    {
        head=ptr->prev;
    }
    return head;
}

void printList(doubly *head)
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
    doubly *head = NULL;
    int i,n,m;
    cout<<"Enter the size of list : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(i=0;i<n;i++)
    {
        cin>>m;
        insertatbeg(&head,m);
    }
    cout<<"The List is : ";
    printList(head);
    doubly *res=NULL;
    res=reverseList(head);
    cout<<"\n The reverse List is : ";
    printList(res);
    return 0;
}