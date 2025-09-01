#include<stdio.h>
#include<math.h>
int main(){
  long long N;
  int count=0;
printf("Enter a positive integer: ");
scanf("%lld",&N);
for(long long i=1;i<=sqrt(N);i++){
  if(N%i==0){
    if(i==(N/i)){
      count++;
    } else {
count+=2;
    }
  }
}
printf("Total number of Divisors:%d\n",count);
return 0;
}
