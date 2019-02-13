#include <iostream>
using namespace std;

struct tree{
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
	}else{
	tree *ptr1=head;
	tree *ptr2;
	char ch;
	while(ptr1!=NULL){
		if(ptr->data > ptr1->data){
			ptr2=ptr1;
			ptr1=ptr1->right;
			ch = 'r';
		}else{
			ptr2=ptr1;
			ptr1=ptr1->left;
			ch = 'l';
		}
	}
	if(ch == 'r'){
		ptr2->right=ptr;
	}else{
		ptr2->left=ptr;
	}
	}
	return head;
}

tree *findMin(tree *head){
	while(head->left!=NULL){
		head=head->left;
	}
	return head;
}

tree *deleteTree(tree *head,int val){
	if(head==NULL){
		return head;
	}
	else if(val > head->data){
		head->right=deleteTree(head->right,val);
	} else if(val < head->data){
		head->left=deleteTree(head->left,val);
	} else {
		//No Child
		if(head->left==NULL && head->right==NULL){
			delete head;
			head=NULL;
		} 
		//with One Child
		else if(head->left==NULL){
			tree *ptr=head;
			head=head->right;
			delete ptr;
		} else if(head->right==NULL){
			tree *ptr1=head;
			head=head->left;
			delete ptr1;
		} 
		//with Two Child
		else{
			tree *ptr2=findMin(head->right);
			head->data=ptr2->data;
			head->right=deleteTree(head->right,ptr2->data);
		}
	}
	return head;
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
	tree *res=NULL;
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
	//Deletion from tree 
	int n1,m1;
	cin>>n1;
	for(i=0;i<n1;i++){
		cin>>m1;
		res = deleteTree(head,m1);
	}
	displayTree(res);
	cout<<endl;
	return 0;
}
