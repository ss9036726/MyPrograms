#include<iostream>
using namespace std;
#define SIZE 10
class Queue
{
    int a[SIZE];
    int rear;   
    int front;  
  
    public:
    Queue()
    {
        rear = front = -1;
    }
    void enqueue(int x);     
    int dequeue();
    void display();
};

void Queue::enqueue(int x)
{
	a[rear++]=x;
}

int Queue::dequeue()
{
	return a[front++];
}

void Queue::display()
{
	for(int i=front;i<=rear;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.dequeue();
    q.enqueue(6);
    q.display();
    q.dequeue();
    q.dequeue();
    q.enqueue(7);
    
    q.display();
    
    return 0;
}
