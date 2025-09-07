#include<stdio.h>
#include<stdlib.h>
struct node{
  int val;
  struct node* left;
   struct node* right;
};
struct node* newnode(int val){
  struct node* node=(struct node*)malloc(sizeof(struct node));
   node->val=val;
   node->left=  node->right=NULL;
   return node;
}
struct node* findlca(struct node* root,int p,int q){
  if(root==NULL)return NULL;
  if(root->val==p||root->val==q)
    return root;
struct node* left=
findlca(root->left,p,q);
struct node* right=
findlca(root->right,p,q);
  if(left&&right)
     return root;
return(left!=NULL)?left:right;
}
int main(){
  struct node* root=newnode(3);
  root->left=newnode(5);
  root->right=newnode(1);
  root->left->left=newnode(6);
 root->left->right=newnode(2);
 root->right->left=newnode(0);
 root->right->right=newnode(8);
 root->left->right->left=newnode(7);
 root->left->right->right=newnode(4);
int p=5,q=1;
 struct node* lca=findlca(root,p,q);
 if(lca!=NULL)
   printf("LCA of%d and %d id: %s\n",p,q,lca->val);
else
   printf("Nodes not found in the tree.\n");
return 0;
}



  


