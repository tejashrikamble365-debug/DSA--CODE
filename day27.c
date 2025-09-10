#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int adj[MAX][MAX],deg[MAX],dist[MAX],visited[MAX];
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
   int V,E ,u,v,start, end;
    scanf("%d%d",&V,&E);
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];   
int visited[MAX];    
int dist[MAX];       
int V, E;

int bfs(int start, int end) {
    int queue[MAX], front = 0, rear = 0;
    for (int i = 0; i < V; i++) visited[i] = 0, dist[i] = -1;

    queue[rear++] = start;
    visited[start] = 1;
    dist[start] = 0;

    while (front < rear) {
        int node = queue[front++];
        for (int i = 0; i < V; i++) {
            if (adj[node][i] && !visited[i]) {
                visited[i] = 1;
                dist[i] = dist[node] + 1;
                queue[rear++] = i;
                if (i == end) return dist[i]; 
            }
        }
    }
    return -1;
}

int main() {
    scanf("%d %d", &V, &E);
    for (int i = 0; i < E; i++) {
        int u, v; scanf("%d %d", &u, &v);
        adj[u][v] = adj[v][u] = 1; 
    }
    int start, end;
    scanf("%d %d", &start, &end);

    int ans = bfs(start, end);
    printf("%d\n", ans);

    return 0;
}
           scanf("%d%d",&u,&v);
           adj[u][deg[u]++]=v;
             adj[u][deg[v]++]=u;
        }
   scanf("%d%d",&start,&end);
   printf("%d\n",bfs(V,start,end));
  return 0;
}






  

       
