//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include<iostream>
//using namespace std;
//typedef struct BiTNode
//{
//	char data;
//	struct BiTNode* lchild, * rchild; 
//}BiTNode, * BiTree;
//
//void CreateTree(BiTree& T)
//{
//	char ch, trmp;
//	cin >> ch;
//	if (ch == '#')
//		T = NULL;
//	else
//	{
//		T = (BiTNode*)malloc(sizeof(BiTNode)); 
//		T->data = ch;
//		CreateTree(T->lchild);
//		CreateTree(T->rchild);
//	}
//}
//
//bool TreeEmpty(BiTree T)
//{
//	if (T == NULL)
//		return true;
//	return false;
//}
//
//void InOrderTraverse(BiTree T)
//{
//	if (T)
//	{
//		InOrderTraverse(T->lchild);
//		printf("%c  ", T->data);
//		InOrderTraverse(T->rchild);
//	}
//}
//
//void PreOrderTraverse(BiTree T)
//{
//	if (T)
//	{
//		printf("%c  ", T->data);
//		PreOrderTraverse(T->lchild);
//		PreOrderTraverse(T->rchild);
//	}
//}
//
//void PostOrderTraverse(BiTree T)
//{
//	if (T)
//
//	{
//
//		PostOrderTraverse(T->lchild);
//		PostOrderTraverse(T->rchild);
//		printf("%c  ", T->data);
//	}
//}
//
//int Depth(BiTree T)
//{
//	int m = 0,
//		n = 0; 
//	if (TreeEmpty(T))
//		return 0;
//	else
//	{
//		m = Depth(T->lchild); 
//		n = Depth(T->rchild);
//		if (m > n)
//			return m + 1;
//		return n + 1;
//	}
//}
//
//int NodeCount(BiTree T)
//{
//	if (T == NULL)
//		return 0;
//	else
//		return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
//}
//
//int cd(BiTree T)
//{
//	int s;
//	cin >> s;
//	if (s != 4)
//	{
//		while (s != 4)
//		{
//			if (s == 1)
//				PreOrderTraverse(T); printf("\n");
//			if (s == 2)
//				InOrderTraverse(T); printf("\n");
//			if (s == 3)
//				PostOrderTraverse(T); printf("\n");
//			cin >> s;
//		}
//		printf("遍历结束\n");
//	}
//	else
//		printf("遍历结束\n");
//}
//
//int main()
//{
//	BiTree T;
//	CreateTree(T);
//	printf("1:先序遍历\n2:中序遍历\n3:后序遍历\n4:结束\n");
//	cd(T);
//
//	printf("深度是%d\n", Depth(T));
//	printf("节点数是%d\n", NodeCount(T));
//	return 0;
//}