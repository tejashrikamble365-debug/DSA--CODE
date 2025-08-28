#include<stdio.h>
#include<string.h>
#define MAX 256
int countdistict (char *s,int start,int end){
   int freq[MAX]={0};
  int distinct=0;
   for (int i=start;i<-end;i++)
{
    if(freq[s[i]]==0)
        distinct++;
     freq[s[i]]++;
}
return distinct;
}
int exactlyK(char *s,int k){
     int n=strlen(s);
     int count=0;
     for(int i=0;i<n;i++){
         for (int j=i;j<n;j++){
             if(countdistict(s,i,j)==k){
       count++;
printf("%.*s\n",j-i+1,s+i);
             }
         }
     }
return count;
}
int main(){
  char s[]="pqpqs";
  int k=2;
printf("Input:%s,k=%d\n",s,k);
printf("Substrings with exactly %d distinct characters:\n",k);
int result=exactlyK(s,k);
printf("\nTotal Count=%d\n",result);
return 0;
}
