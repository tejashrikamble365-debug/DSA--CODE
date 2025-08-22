#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reversewords(char *s){
    char *words[1000];
    int count=0;
    char *p=s;
while(*p){
     while(*p && isspace(*p)) p++;
     if(*p){
     words[count++]=p;
      while(*p && !isspace(*p)) p++;
      if(*p) *p++='\0';
  }
}
for(int i=count-1;i>=0;i--){
   printf("%s",words[i]);
    if(i>0) printf(" ");
  }
  printf("\n");
}
int main(){
    char str[]=" the sky is blue ";
     printf("Input:\"%s\"\n",str);
    printf("Output:\"");
    reversewords(str);
    printf("\n");
    return 0;
}

