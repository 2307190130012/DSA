//tree implemnetation
#include<stdio.h>
#include<stdlib.h>

  struct node{
int data ;
node* left;
node* right;
};

node* create(int data){
	node* newnode=(node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode; 
}
node * insert(node* root , int value){
	if(root==NULL){
	return create(value);
}
if(value<root->data){
	root->left=insert(root,value);
}
if(value>root->data){
	root->right=insert(root,value);
}
return root;
}
void preorder(node* root){
	if(root!=NULL){
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
main(){
	node *root=NULL;
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,15);
	root=insert(root,7);
	root=insert(root,3);

	preorder(root);

}
