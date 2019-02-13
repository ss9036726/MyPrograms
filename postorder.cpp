#include <iostream>
using namespace std;

struct tree
{
    int data;
    struct tree *left,*right;
};

tree *insert(tree *head,int data)
{
    tree *ptr=new tree;
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    if(head==NULL)
    {
        head=ptr;
    }
    else 
    {
        tree *ptr1=head;
        tree *ptr2;
        char ch;
        while(ptr1!=NULL)
        {
            if(ptr->data > ptr1->data)
            {
                ptr2=ptr1;
                ptr1=ptr1->right;
                ch = 'r';
            }
            else 
            {
                ptr2=ptr1;
                ptr1=ptr1->left;
                ch = 'l';
            }
        }
        if(ch=='r')
        {
            ptr2->right=ptr;
        }
        else 
        {
            ptr2->left=ptr;
        }
    }
    return head;
}

void postOrder(tree *head)
{
    if(head==NULL)
    {
        return ;
    }
    postOrder(head->left);
    postOrder(head->right);
    cout<<head->data<<" ";
}

int main()
{
    tree *head=NULL;
    int i,n,m;
    cout<<"Enter the size of tree : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(i=0;i<n;i++)
    {
        cin>>m;
        head=insert(head,m);
    }
    cout<<"The tree is : ";
    postOrder(head);
    return 0;
}