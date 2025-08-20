#include<stdio.h>
void findSubarrayWithZeroSum(int arr[],int n){
 for(int start=0;start<n;start++){
     int sum=0;
      for(int end=start;end<n;end++){
          sum+=arr[end];
          if(sum==0){
             printf("%d,%d)\n",start,end);
           }
        }
    }  
}
int main(){
  int arr[]={1,2,-3,3,-1,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("Input: [");
  for(int i=0;i<n;i++){
   printf("%d",arr[i]);
   if(i<n-1) printf(",");
}
printf("]\n");
printf("Output:\n");
findSubarrayWithZeroSum(arr,n);
return 0;
}
