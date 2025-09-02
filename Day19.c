#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 100 
int stack[MAX];
int top=-1;
void push(int x){
  stack[++top]=x;
}
int pop(){
  return stack[top--];
}
int evaluatepostfix(char* expr){
  char* token=strtok(expr," ");
while(token!=NULL){
  if(isdigit(token[0])||(token[0]=='-'&&isdigit(token[1]))){
push(atoi(token));
  }
else{
int b=pop();
int a=pop();
switch(token[0]){
case'+':push(a+b);
  break;
case'-':push(a-b);
  break;
case'*':push(a*b);
  break;
case'/':push(a/b);
  break;
  }
}
token=strtok(NULL," ");
}
return pop();
}
int main(){
  char expr[]="2 1 + 3 *";
   int result=evaluatepostfix(expr);
printf("Result:%d\n",result);
return 0;
}


