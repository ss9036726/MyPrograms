#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct node{
    int data;
    node *singlelink;
};

node *head; //head pointer used to store address of first node
node *q;//back tacking pointer during creation of Single linked list

void SelectionSort(node *head); //passing head node
void add(int save);
void Display(node *head); //passing head node


int main(){


        int value;
        int maxsize;
        srand(time(0)); // this is to generate different numbers at every runtime
        cout<<"How many numbers, you want to sort : ";
        cin>>maxsize;  // number of digits to be generated
        cout<<endl;
        for(int i=0;i < maxsize;i++)
        {
            cin>>value; // generate random numbers (data sets will change depends on fraction
            add(value);
        }

        cout<<"Initial single link list : ";
        Display(head);
        cout<<endl;
        SelectionSort(head);
        cout<<endl<<endl<<"After Applying selection Sort...."<<endl;
        cout<<endl;
        Display(head);
}



void SelectionSort(node *r){ //r is the pointer to the first node
    while(r != NULL){
        node *p=NULL;
        node *q=r;
        int temp=r->data;
        while(q!= NULL){
            if( temp > q->data){
                p=q; //p points to the smallest element in the list
                temp=q->data;
            }
            q=q->singlelink; //q goes to the next node
        }
        if(p!=NULL)
            swap( p->data,r->data);
        r=r->singlelink; //r goes to the next node

        Display(head);
    }
}
void add(int save){
    node *newNode=new node;
    if(head==NULL){
        newNode->data=save;
        head=newNode;
        q=newNode; //back tracking for further insertion in list
        newNode->singlelink=NULL;
    }
    else{
        newNode->data=save;
        q->singlelink=newNode;
        q=newNode; //update q to the current node
        newNode->singlelink=NULL;
    }
}
void Display(node *head){

        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->singlelink; //head goes to the next node
        }
        cout<<endl;

}