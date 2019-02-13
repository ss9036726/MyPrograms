#include <iostream>
using namespace std;

int vert,edge,v,cost[10][10],visited[10],visit[10],queue[10],rear,front,i,j;

int main(){
	cin>>vert;
	cin>>edge;
	for(int a=1;a<=edge;a++){
		cin>>i>>j;
		cost[i][j]=1;
	}
	cin>>v;
	cout<<v<<" "<<endl;
	cout<<"Visited Vertex is : ";
	cout<<v<<" ";
	visited[v]=1;
	int k=1;
	while(k<vert){
		for(j=1;j<=vert;j++){
			if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1){
				visit[j]=1;
				queue[rear++]=j;
			}
		}
		v=queue[front++];
		cout<<v<<" ";
		k++;
		visit[v]=0;
		visited[v]=1;
	}
	return 0;
}
