//tree implemnetation
#include<stdio.h>
#include<stdlib.h>

struct node{
	
int data ;
 struct node* left;
 struct node* right;

};

 struct node* create(int data){
	struct node* newnode=(node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode; 
}
 struct node* insert(struct node* root , int value){
	if(root==NULL){
	return create(value);
}
if(value<root->data){
	root->left=insert(root->left,value);
}
if(value>root->data){
	root->right=insert(root->right,value);
}
return root;
}
void preorder( struct node* root){
	if(root!=NULL){
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(struct node* root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
}
void postorder( struct node*root)
{
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d\n",root->data);
	}
	
	
}
main(){
	 struct node *root=NULL;
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,15);
	root=insert(root,7);
	root=insert(root,3);
printf("preorder treversal:\n");
preorder(root);
	
printf("inorder treversal:\n");

inorder(root);


printf("postorder treversal:\n");
postorder(root);
}
 
