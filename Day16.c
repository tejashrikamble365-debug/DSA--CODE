#include<stdio.h>
long long gcd(long long a,long long b){
  while(b!=0){
    long long temp=b;
    b=a%b;
    a=temp;
  }
return a;
}
long long lcm(long long a,long long b){
   return(a/gcd(a,b))*b;
}
int main(){
  long long N=4,M=6;
  long long result=lcm(N,M);
  printf("Input:N=%lld.M=%lld\n",N,M);
  printf("LCM=%lld\n",result);
  return 0;
}
