#include<stdio.h>
#include<string.h>
char* longestcommonprefix(char strs[][100], int n){
  static char prefix[100];
  int i,j;
  if(n==0)return"";
  strcpy(prefix,strs[0]);
  for(i=1;i<n;i++){
     j=0;
    while(prefix[j]&&strs[i][j]&&prefix[j]==strs[i][j]){
          j++;
}
     prefix[j]='\0';
    if(prefix[0]=='\0'){
       return"";
  }
}
return prefix;
}
int main(){
 char strs[3][100] ={"flower","flow","flight"};
 int n=3;
 char *result=longestcommonprefix(strs,n);
 if(strlen(result)>0)
 printf("Longest Common Prefix:\"%s\n",result);
 else
 printf("No Common Prefix\n");
 return 0;
}
