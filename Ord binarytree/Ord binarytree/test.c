#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>




//重点不是增删查改，学习二叉树结构
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	int val;
}BTNode;

BTNode* BuyNode(int x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc error");
		exit(-1);
	}
	node->left = NULL;
	node->right = NULL;
	node->val = x;
	return node;
}


//前序
void PreOrder(BTNode* root)
{
	//结束条件
	if (root == NULL)
	{
		return ;
	}
	//核心：根，左，右
	printf("%d ", root->val);
	PreOrder(root->left);
	PreOrder(root->right);
}

//中序
void InOrder(BTNode* root)
{
	//结束条件
	if (root == NULL)
	{
		return;
	}

	//核心：左，根，右
	InOrder(root->left);
	printf("%d ", root->val);
	InOrder(root->right);
}

//后序
void EndOrder(BTNode* root)
{
	//结束条件
	if (root == NULL)
	{
		return;
	}

	//核心：左，右，根
	EndOrder(root->left);
	EndOrder(root->right);
	printf("%d ", root->val);
}

//节点个数
int TreeSize(BTNode* root);
//叶子节点个数
int TreeLeafSize(BTNode* root);
//第k层节点个数
int TreeKLeafSize(BTNode* root,int k);


int TreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	//不为空返回左子树+右子树+自身(1)
	return TreeSize(root->left)+TreeSize(root->right)+1;

}

int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	//左右子树为空即为叶节点，返回1
	else if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	//否则继续递归
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}


int TreeKLeafSize(BTNode* root,int k)
{
	assert(k > 0);
	if (root == NULL)
	{
		return 0;
	}
	//当k=1时，则已经走到第k层
	if (k==1)
	{
		return 1;
	}
	//每递归一次即向下走一层，因此需要k-1
	return TreeKLeafSize(root->left,k-1) + TreeKLeafSize(root->right,k-1);
}




int main()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;

	PreOrder(node1);
	//InOrder(node1);
	//EndOrder(node1);

	int n= TreeKLeafSize(node1, 2);
	printf("%d", n);
	return 0;
}