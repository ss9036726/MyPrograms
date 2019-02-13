#include <iostream>
using namespace std;

struct tree {
    int data;
    tree *left,*right;
};

tree *insertinTree(tree *head,int val)
{
    tree *ptr=new tree;
    ptr->data=val;
    ptr->right=NULL;
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
            if(ptr->data >= ptr1->data)
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
        if(ch == 'r')
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

tree *findMin(tree *head)
{
    while(head->left!=NULL)
    {
        head=head->left;
    }
    return head;
}

tree *deleteNode(tree *head,int val)
{
    if(head==NULL)
    {
        return head;
    }
    else if(val > head->data)
    {
        head->right = deleteNode(head->right,val);
    }
    else if(val < head->data)
    {
        head->left = deleteNode(head->left,val);
    }
    else 
    {
        if(head->left==NULL && head->right==NULL)
        {
            delete head;
            head=NULL;
        }
        else if(head->left==NULL)
        {
            tree *ptr=head;
            head=head->right;
            delete ptr;
        }
        else if(head->right==NULL)
        {
            tree *ptr1=head;
            head=head->left;
            delete ptr1;
        }
        else 
        {
            tree *ptr2=findMin(head->right);
            head->data=ptr2->data;
            head->right=deleteNode(head->right,ptr2->data);
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

void inOrder(tree *head)
{
    if(head==NULL)
    {
        return;
    }
    inOrder(head->left);
    cout<<head->data<<" ";
    inOrder(head->right);
}

void postOrder(tree *head)
{
    if(head==NULL)
    {
        return;
    }
    postOrder(head->left);
    postOrder(head->right);
    cout<<head->data<<" ";
}

int main()
{
    tree *head=NULL;
    int i,n,m;
    cout<<"Enter the size of the tree : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(i=0;i<n;i++)
    {
        cin>>m;
        head=insertinTree(head,m);
    }
    cout<<"The PreOrder of the Tree is : ";
    preOrder(head);
    cout<<endl<<"Thre InOrder of the Tree is : ";
    inOrder(head);
    cout<<endl<<"The PostOrder of the Tree is : ";
    postOrder(head);
    cout<<endl<<endl;
    int n1,m1;
    cout<<"Enter the given Nodes in tree : ";
    cin>>n1;
    cout<<"Enter the value : ";
    for(i=0;i<n1;i++)
    {
        cin>>m1;
        head=insertinTree(head,m1);
    }
     cout<<"The PreOrder of the Tree is : ";
    preOrder(head);
    cout<<endl<<"Thre InOrder of the Tree is : ";
    inOrder(head);
    cout<<endl<<"The PostOrder of the Tree is : ";
    postOrder(head);
    cout<<endl<<endl;
    int n2,m2;
    cout<<"Enter the given nodes to be deleted in tree : ";
    cin>>n2;
    cout<<"Enter the value : ";
    for(i=0;i<n2;i++)
    {
        cin>>m2;
        head=deleteNode(head,m2);
    }
    cout<<"The PreOrder of the Tree is : ";
    preOrder(head);
    cout<<endl<<"Thre InOrder of the Tree is : ";
    inOrder(head);
    cout<<endl<<"The PostOrder of the Tree is : ";
    postOrder(head);
    cout<<endl;
    return 0;
}