#include<stdio.h>
#include<string.h>
int expandaroundcenter(char *s,int left,int right){
  int n=strlen(s);
while(left>=0 && right<n && s[left]==s[right]){
left--;
right++;
}
return right-left-1;
}
void longestpalindrome(char *s,char *result){
  int n=strlen(s);
if(n==0){
result[0]='\0';
return;
}
int start=0,maxlen=1;
for(int i=1;i<n;i++){
int len1=expandaroundcenter(s,i,i);
int len2=expandaroundcenter(s,i,i+1);
int len=(len1>len2)?len1:len2;
    if(len>maxlen){
    maxlen=len;
    start=i-(len-1)/2;
  }
}
strncpy(result,s+start,maxlen);
result[maxlen]='\0';
}
int main(){
     char s[]="babad";
    char result[1001];
     longestpalindrome(s,result);
      printf("Input: %s\n",s);
      printf("Longest Palindromic Substring:%s\n",result);
return 0;
}
