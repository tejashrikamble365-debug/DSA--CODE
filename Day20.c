#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct{
   int arr[MAX];
   int top;
}stack;
void init(stack* s){
  s->top=-1;
}
int isEmpty(stack* s){
  return s->top==-1;
}
int isFull(stack* s){
  return s->top==MAX - 1;
}
void push(stack* s,int val){
  if(isFull(s)){
   printf("Stack Overflow!\n");
   return;
  }
s->arr[++(s->top)]=val;
}
int pop(stack* s){
  if(isEmpty(s)){
   printf("Stack Underflow!\n");
   return -1;
  }
  return s->arr[(s->top)--];
}
int peek(stack* s){
  if(isEmpty(s)){
   return -1;
  }
 return s->arr[s->top];
}
void sortedinsert(stack* s,int val){
    if(isEmpty(s)||val>peek(s)){
push(s,val);
      return;
    }
  int temp=pop(s);
sortedinsert(s, val);
push(s,temp);
}
void sortstack(stack* s){
   if(!isEmpty(s)){
   int temp=pop(s);
   sortstack(s);
  sortedinsert(s,temp);
   }
}
void printstack(stack* s){
  for(int i=0;i<=s->top;i++)
{
   printf("%d",s->arr[i]);
}
  printf("\n");
}
int main(){
  stack s;
  init(&s);
  push(&s,3);
  push(&s,1);
  push(&s,4);
  push(&s,2);
  printf("Original Stack: ");
 printstack(&s);
 sortstack(&s);
 printf("Sorted Stack: ");
  printstack(&s);
return 0;
}
   


  


  

  

