//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//typedef struct BiNode
//{
//	char data;
//	struct BiNode* l, * r;
//}BiNode,*BiTree;
//
//void CreateBiTree(BiTree& T)
//{
//	char ch;
//	cin >> ch;
//	if (ch == '#') T = NULL;
//	else {
//		T = new BiNode;
//		T->data = ch;
//		CreateBiTree(T->l);
//		CreateBiTree(T->r);
//	}
//}
//void PreOrderTraverse(BiTree& T)
//{
//	if (T != NULL)
//	{
//		cout << T->data;
//		PreOrderTraverse(T->l);
//		PreOrderTraverse(T->r);
//
//	}
//	else return;
//}
//void InOrderTraverse(BiTree& T)
//{
//	if (T != NULL)
//	{
//
//		InOrderTraverse(T->l);
//		cout << T->data;
//		InOrderTraverse(T->r);
//
//	}
//	else return;
//}
//void PostOrderTraverse(BiTree& T)
//{
//	/// <summary>
//	/// ABC##DE#G##F###
//	/// </summary>
//	/// <param name="T"></param>
//	if (T != NULL)
//	{
//
//		PostOrderTraverse(T->l);
//		PostOrderTraverse(T->r);
//		cout << T->data;
//
//	}
//	else return;
//}

//int main()
//{
//	BiTree T;
//	CreateBiTree(T);//先序遍历顺序建立二叉链表 
//	PreOrderTraverse(T); cout << endl;//先序遍历 
//	InOrderTraverse(T); cout << endl;//中序遍历 
//	PostOrderTraverse(T); cout << endl;//后序遍历
//
//	return 0;
//}