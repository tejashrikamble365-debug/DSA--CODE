#include<stdio.h>
#define MAX 100000
#define RANGE 100000
int main(){
  int arr[]={3,1,4,5,2,6,1,4};
   int n=sizeof(arr)/sizeof(arr[0]);
   int k=2;
   int freq[RANGE+1];
   for(int i=0;i<=RANGE;i++){
       freq[i]=0;
   }
   for(int i=0;i<n;i++){
       freq[arr[i]]++;
   }
int answer = -1;
for(int i=0;i<n;i++){
  if(freq[arr[i]]==k){
     answer=arr[i];
     break;
  }
}
printf("Output:%d\n",answer);
return 0;
}
