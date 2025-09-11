#include <stdio.h>
#include <stdlib.h>
struct Node { int val; struct Node *l, *r; };
struct Node* newNode(int v) {
    struct Node* n = malloc(sizeof(struct Node));
    n->val = v; n->l = n->r = NULL; return n;
}
int isMirror(struct Node* a, struct Node* b) {
    if (!a && !b) return 1;
    if (!a || !b) return 0;
    return a->val==b->val && isMirror(a->l,b->r) && isMirror(a->r,b->l);
}
int isSym(struct Node* root) {
    return !root || isMirror(root->l, root->r);
}
int main() {
    struct Node* r = newNode(1);
    r->l=newNode(2); r->r=newNode(2);
    r->l->l=newNode(3); r->l->r=newNode(4);
    r->r->l=newNode(4); r->r->r=newNode(3);
    printf(isSym(r)?"true\n":"false\n");
}
