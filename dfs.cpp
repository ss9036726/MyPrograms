#include <iostream>
using namespace std;

int vert,edge,v,cost[10][10],visited[10],visit[10],i,j,stack[10],top;

int main()
{
    cout<<"Enter the vertex : ";
    cin>>vert;
    cout<<"Enter the edge : ";
    cin>>edge;

    for(int a=1;a<=edge;a++)
    {
        cin>>i>>j;
        cost[i][j]=1;
    }

    cout<<"Enter the initial vertex ";
    cin>>v;
    cout<<v<<endl;
    cout<<"Visited vertex is : ";
    cout<<v<<" ";
    visited[v]=1;
    int k=1;
    while(k<vert)
    {
        for(j=vert;j>=1;j--)
        {
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                stack[top++]=j;
            }
        }
        v = stack[--top];
        cout<<v<<" ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
    return 0;
}