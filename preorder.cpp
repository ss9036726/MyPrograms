#include <iostream>
using namespace std;

struct tree{
    int data;
    struct tree *right,*left;
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

void preOrder(tree *head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    preOrder(head->left);
    preOrder(head->right);
}

int main()
{
    tree *head=NULL;
    int i,n,m;
    cout<<"Enter the size of the tree : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(int i=0;i<n;i++)
    {
        cin>>m;
        head=insert(head,m);
    }
    cout<<"The tree is : ";
    preOrder(head);
    return 0;
}