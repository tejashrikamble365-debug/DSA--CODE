#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node{
 int val;
struct node* left;
struct node* right;
};
struct node*  newnode(int val){
   struct node*  node=(struct node* )malloc(sizeof(struct node));
node->val=val;
node->left=node->right=NULL;
return node;
}
int isBST(struct node* root,long minVal,long maxVal){
  if(root==NULL)return 1;
  if(root->val<=minVal||root->val>=maxVal)
    return 0;
  return isBST(root->left,minVal,root->val) && isBST(root->right,root->val,maxVal);
}
int main(){
  struct node* root=newnode(2);
  root->left=newnode(1);
  root->right=newnode(3);
  if(isBST(root,LONG_MIN,LONG_MAX))
    printf("true\n");
  else
    printf("false\n");
return 0;
}
  
