#include <iostream>
using namespace std;

struct tree {
	int data;
	tree *left;
	tree *right;
};

tree *insert(tree *head,int val){
	tree *ptr = new tree;
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
		} else {
			ptr2->left=ptr;
		}
	}
	return head;
}

void searchVal(tree *head,int val){
	if(head==NULL){
		cout<<"Not Found"<<endl;
	}else if(val == head->data){
		cout<<"Found"<<endl;
	} else if(val > head->data){
		searchVal(head->right,val);
	}else{
		searchVal(head->left,val);
	}
}

void displayTree(tree *head){
	if(head==NULL){
		return;
	}
	
	cout<<head->data<<" ";
	displayTree(head->left);
	displayTree(head->right);
}

int main(){
	tree *head=NULL;
	int i,n,m;
	cout<<"Enter the size of the tree : ";
	cin>>n;
	cout<<"Enter the value : ";
	for(i=0;i<n;i++){
		cin>>m;
		head=insert(head,m);
	}
	displayTree(head);
	cout<<endl;
	int val;
	cin>>val;
	searchVal(head,val);
	return 0;
}
