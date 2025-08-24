#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmpchar(const void *a,const void *b){
  return(*(char*)a-*(char*)b);
}
int cmpstr(const void *a,const void *b){
  return strcmp(*(const char**)a,*(const char**)b);
}
void sortstring(char *str){
  qsort(str,strlen(str),sizeof(char),cmpchar);
}
int main(){
  char *strs[]={"eat","tea","tan","ate","nat","bat"};
int n=sizeof(strs)/sizeof(strs[0]);
   char sorted[n][20];
  for(int i=0;i<n;i++){
    strcpy(sorted[i],strs[i]);
sortstring(sorted[i]);
  }
int visited[n];
memset(visited,0,sizeof(visited));
printf("[\n");
for(int i=0;i<n;i++){
 if(visited[i])continue;
printf(" [\%s\"",strs[i]);
visited[i]=1;
for(int j=i+1;j<n;j++){
 if(!visited[j]&&strcmp(sorted[i],sorted[j])==0){
printf(" [\%s\"",strs[j]);
visited[j]=1; 
}
}
printf("]\n");
}
printf("]\n");
return 0;
}


   
