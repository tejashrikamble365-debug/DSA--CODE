#include<stdio.h>
void primefactorization(long long n){
   printf("prime factors: [");
   int first=1;
  while(n%2==0){
     if(!first)printf(", ");
     printf("2");
     n/=2;
     first=0;
  }
for(long long i=3;i*i<=n;
  i+=2){
     while(n%i==0){
          if(!first)printf(", ");
     printf("%lld",i);
     n/=i;
     first=0;
  }
  }
   if(n>2){
      if(!first)printf(", ");
     printf("%lld",n);
   }
   printf("]\n");
}
int main(){
  long long N=18;
printf("Input:N=%lld\n",N);
primefactorization(N);
return 0;
}
