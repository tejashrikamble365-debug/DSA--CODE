#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int v,e;
int adj[MAX][MAX],visited[MAX];
int dfs(int v,int parent){
    visited[v]=1;
    for(int u=0;u<v;u++){
       if(adj[v][u]){
         if(!visited[u]){
            if(dfs(u,v))return 1;
         }else if (u!=parent)return 1;
       }
    }
return 0;
}
int main(){
  scanf("%d%d",&v,&e);
  for( int i=0;i<e;i++){
    int a,b;scanf("%d%d",&a,&b);
    adj[a][b]=adj[b][a]=1;
  }
   for( int i=0;i<v;i++)
       if(!visited[i] && dfs(i,-1))
{
 printf("true\n");return 0;
}
printf("false\n");
return 0;
}
