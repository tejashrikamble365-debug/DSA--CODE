#include<stdio.h>
#include<string.h>
void swap(char *x,char *y){
    char temp=*x;
    *x=*y;
    *y=temp;
}
void permute(char *str,int l,int r,int *firstprinted){
    if(l==r){
      if(*firstprinted==0){
        printf("\"%s\"",str);
        *firstprinted=1;
      }else{
         printf(", \"%s\"",str);
      }
      }else{
          for(int i=l;i<=r;i++){
              swap((str+l),(str+i));
              permute(str,l+1,r,firstprinted);
              swap((str+l),(str+i));
          }
      }
    }
int main(){
  char str[]="abc";
  int n=strlen(str);
  int firstprinted=0;
  printf("[");
   permute(str,0,n-1,&firstprinted);
   printf("]\n");
   return 0;
}

           
