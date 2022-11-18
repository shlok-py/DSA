#include<stdio.h>
#include<malloc.h>

/*
Program to construct the following tree using linked list


		2
	   / \
	  /   \ 
	1		4
												

*/




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

int main(){
	/*
	//constructing root Node
	struct Node* root;
	
	root = (struct Node *) malloc (sizeof(struct Node));
	root->data = 2;
	root->left = NULL;
	root->right = NULL;
	
	
	//constructing the first node as root1
	struct Node* root1;
	
	root1 = (struct Node *) malloc (sizeof(struct Node));
	root1->data = 1;
	root1->left = NUL;
	root1->right = NULL;
	
	
	//constructing the second node root 2
	struct Node* root2;
	
	root2 = (struct Node *) malloc (sizeof(struct Node));
	root2->data = 4;
	root2->left = NUL;
	root2->right = NULL;
	
	//linking root1 as left child of root and root2 as right child of root
	root->left = root1;
	root->right = root1;
	*/
	
	
	//CONSTRUCTING NODES USING FUNCTION
	struct Node* root = createNode(2); //creating the root Node
	struct Node* root1 = createNode(1); //creating the left child of the root Node
	struct Node* root2 = createNode(4); //creating the right child of the root Node
	
	root->left = root1; //linking root's left child to root1
	root->right = root2; //linkingroot's right child to root2
	
	printf("rootNode-----> %d\n", root->data);
	printf("leftchild-----> %d\n", root1->data);
	printf("rightchild-----> %d\n", root2->data);
	
	
	return 0;
}