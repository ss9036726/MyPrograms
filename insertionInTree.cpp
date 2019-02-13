#include <iostream>
using namespace std;

struct tree{
	int data;
	tree *left;
	tree *right;
};

tree *insert(tree *head,int val){
	tree *ptr=new tree;
	ptr->data=val;
	ptr->left=NULL;
	ptr->right=NULL;
	if(head==NULL){
		head=ptr;
	}
	else{
		tree *ptr1=head;
		tree *ptr2;
		char ch;
		while(ptr1!=NULL){
			if(ptr->data > ptr1->data){
				ptr2=ptr1;
				ptr1=ptr1->right;
				ch = 'r';
			} else{
				ptr2=ptr1;
				ptr1=ptr1->left;
				ch = 'l';
			}
		}
		if(ch == 'r'){
			ptr2->right=ptr;
		} else{
			ptr2->left=ptr;
		}
	}
	return head;
}

void displayTree1(tree *head){
	if(head==NULL){
		return;
	}
	cout<<head->data<<" ";
	displayTree1(head->left);
	displayTree1(head->right);
}

void displayTree2(tree *head){
	if(head==NULL){
		return;
	}
	displayTree2(head->left);
	cout<<head->data<<" ";
	displayTree2(head->right);
}

void displayTree3(tree *head){
	if(head==NULL){
		return;
	}
	displayTree3(head->left);
	displayTree3(head->right);
	cout<<head->data<<" ";
}

int main(){
	tree *head=NULL;
	int i,n,m;
	cout<<"Enter the size of the tree : ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		head=insert(head,m);
	}
	displayTree1(head);
	cout<<endl;
	displayTree2(head);
	cout<<endl;
	displayTree3(head);
	cout<<endl;
	return 0;
}
