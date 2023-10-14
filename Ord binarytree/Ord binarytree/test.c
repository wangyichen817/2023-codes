#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>




//�ص㲻����ɾ��ģ�ѧϰ�������ṹ
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


//ǰ��
void PreOrder(BTNode* root)
{
	//��������
	if (root == NULL)
	{
		return ;
	}
	//���ģ���������
	printf("%d ", root->val);
	PreOrder(root->left);
	PreOrder(root->right);
}

//����
void InOrder(BTNode* root)
{
	//��������
	if (root == NULL)
	{
		return;
	}

	//���ģ��󣬸�����
	InOrder(root->left);
	printf("%d ", root->val);
	InOrder(root->right);
}

//����
void EndOrder(BTNode* root)
{
	//��������
	if (root == NULL)
	{
		return;
	}

	//���ģ����ң���
	EndOrder(root->left);
	EndOrder(root->right);
	printf("%d ", root->val);
}

//�ڵ����
int TreeSize(BTNode* root);
//Ҷ�ӽڵ����
int TreeLeafSize(BTNode* root);
//��k��ڵ����
int TreeKLeafSize(BTNode* root,int k);


int TreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	//��Ϊ�շ���������+������+����(1)
	return TreeSize(root->left)+TreeSize(root->right)+1;

}

int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	//��������Ϊ�ռ�ΪҶ�ڵ㣬����1
	else if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	//��������ݹ�
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}


int TreeKLeafSize(BTNode* root,int k)
{
	assert(k > 0);
	if (root == NULL)
	{
		return 0;
	}
	//��k=1ʱ�����Ѿ��ߵ���k��
	if (k==1)
	{
		return 1;
	}
	//ÿ�ݹ�һ�μ�������һ�㣬�����Ҫk-1
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