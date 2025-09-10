#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int adj[MAX],deg[MAX],dist[MAX],visited[MAX];
int bfs(int V,int start,int end){
    int q[MAX],f=0,r=0;
    for(int i=0;i<V;i++)
      dist[i]= -1;
q[r++]=start;visited[start]=1;dist[start]=0;
 while(f<r){
   int v=q[f++];
    for(int i=0;i<deg[v];i++){
    int u=adj[v][i];
    if(!visited[u]){
     visited[u]=1;
     dist[u]=dist[v]+1;
     if(u==end)return dist[u];
      }
    }
 }
return -1;
}
int main(){
   int V,E ,u,vstart, end;
    scanf("%d%d",&V,&E);
        for(int i=0;i<E;i++){
           scanf("%d%d",&u,&v);
           adj[u][deg[u]++]=v;
             adj[u][deg[v]++]=u;
        }
   scanf("%d%d",&start,&end);
   printf("%d\n",bfs(V,start,end));
  return 0;
}






  

       

