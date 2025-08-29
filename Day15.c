#include<stdio.h>
#include<string.h>
#define Max 256
int lengthoflongestsubstring(char *s)
{
    int n=strlen(s);
     int freq[Max]={0};
     int left=0,right=0;
     int maxlen=0;
    while(right<n){
       if(freq[(int)s[right]]==0)
{
    freq[(int)s[right]]++;
    maxlen=(right-left+1>maxlen)?right-left+1:maxlen;
     right++;
}
      else{
          freq[(int)s[left]]--;
          left++;
      }
    }
return maxlen;
}
int main(){
  char s[]="abcabcbb";
printf("Input:%s\n",s);
printf("Length of longest substring without repeating characters:%d\n",lengthoflongestsubstring(s));
return 0;
}
