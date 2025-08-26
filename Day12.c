#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool isvalid(char *s){
      char stack[1000];
      int top=-1;
      for(int i=0;s[i]!='\0';i++)
{
     char ch=s[i];
    if(ch=='('||ch=='{'||ch=='['){
         stack[++top]=ch;
    }
    else{
        if(top==-1)return false;
         char topchar=stack[top--];
        if((ch==')'&&topchar!='(') || (ch=='}'&&topchar!='{') || (ch==']'&&topchar!='[')){
           return false;
        }
    }
}
 return top==-1;
}
int main(){
   char s[]="[{()}]";
   if(isvalid(s))
       printf("true\n");
    else
       printf("false\n");
    return 0;
}

