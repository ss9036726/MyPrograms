#include <iostream>
using namespace std;

struct tree 
{
    int data;
    tree *left,*right;
};

tree *newNode(int data)
{
    tree *ptr=new tree;
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}

tree *insert(tree *head,int data)
{
    if(head==NULL)
    {
        return newNode(data);
    }

    if(data > head->data)
    {
        head->right = insert(head->right,data);
    }
    else if(data < head->data)
    {
        head->left = insert(head->left,data);
    }
    return head;
}

void inOrder(tree *head)
{
    if(head==NULL)
    {
        return ; 
    }
    inOrder(head->left);
    cout<<head->data<<" ";
    inOrder(head->right);
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
        head=insert(head,m);
    }
    cout<<"The InOreder of the tree is : ";
    inOrder(head);
    cout<<endl;
    return 0;
}
