#include<stdio.h>
#include<stdlib.h>
typedef struct TreeNode
{
	int data;
	struct TreeNode *left, *right;
}TreeNode;

TreeNode n1 = { 1,NULL,NULL };
TreeNode n2 = { 4,NULL,&n1 };
TreeNode n3 = { 16,NULL,NULL };
TreeNode n4 = { 25,NULL,NULL };
TreeNode n5 = { 20,&n3,&n4 };
TreeNode n6 = { 15,&n2,&n5 };
TreeNode *root = &n6;

void inorder(TreeNode *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d-> ", root->data);
		inorder(root->right);
	}
}
void reverse_node(TreeNode *root)  // 루트노드를 기준으로 좌우 반전 시키는 함수 
{
	if (root == NULL)
		return;
	else if (root->left == NULL && root->right == NULL)  // 자식이 하나도 없을때
		return;
	else if (root->left != NULL || root->right != NULL)
	{
		reverse_node(root->left);
		reverse_node(root->right);
		TreeNode *temp = root->left;
		root->left = root->right;
		root->right = temp;
	}
}
int main()
{
	inorder(root);
	printf("\n");
	reverse_node(root);
	inorder(root);
	printf("\n");
}