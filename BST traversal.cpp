
#include <stdio.h>
#include <stdlib.h>
struct node {
	int info;
	struct node* left;
	struct node* right;
};

struct node* newNode(int info)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->info=info; 
	node->left= NULL;
	node->right = NULL;  
	return (node); 
}

void Inordertraverse( struct node* node)  // Left node Right
{
	if(node==NULL){
		return; 
	}
	Inordertraverse(node->left);
	printf("%d ", node->info); 
	Inordertraverse(node->right); 
	
}

void Preordertraverse( struct node* node){
	
	if(node==NULL){
		return; 
	}
	printf("%d ", node->info); 
	Preordertraverse( node->left);
	Preordertraverse( node->right);
}

void Postordertraverse(struct node* node){
	if(node==NULL){
		return; 
	}
	
	Postordertraverse(node->left);
	Postordertraverse(node->right);
	printf("%d  " , node->info );
}

int main()
{
	
	struct node* root = newNode(11);
	root->left = newNode(22);
	root->right = newNode(33);
	root->left->left = newNode(44);
	root->left->right = newNode(55);
	root->right->left = newNode(66); 
	root->right->right = newNode(77);


	printf("\nInorder traversal of binary tree is \n");
	Inordertraverse(root);
	
	printf("\n PreOrder traversal of binary tree is: \n");
	Preordertraverse(root); 
	
	printf("\n PostOrder trversal of binary tree is: \n"); 
	Postordertraverse(root); 

	getchar();
	return 0;
}
