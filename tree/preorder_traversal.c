/*

Types of Traversal in Binary tree

1)	Preorder Traversal				Root -> Left -> Right
2) Postorder Trversal				Left->Right->Root
3) In-Order Traversal				Left->Root->Right

*/

#include<stdio.h>
#include<malloc.h>


struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

//creating a function to create a node that returns the node to the main()
struct Node * createNode(int data){
	struct Node* n;
	n = (struct Node *) malloc(sizeof(struct Node));
	n->data =  data;
	n->left = NULL;
	n->right = NULL;
	
	return n;
}

void preorder( struct Node* root){
	if (root != NULL){
		printf("%d", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

int main(){
	
	//CONSTRUCTING NODES USING FUNCTION
	struct Node* root = createNode(1); //creating the root Node
	struct Node* root1 = createNode(2); //creating the left child of the root Node
	struct Node* root2 = createNode(3); //creating the right child of the root Node
	struct Node* root11 = createNode(4); //creating left child of the root1 node
	struct Node* root12 = createNode(5); //creating right child of the root1 node
			
	root->left = root1; //linking root's left child to root1
	root->right = root2; //linkingroot's right child to root2
	root1->left = root11; //linking root1's left to root11
	root1->right = root12; ///linking root1's right to root12
	
	
	preorder(root);
	
	return 0;
}