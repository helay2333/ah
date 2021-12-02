#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
//using namespace std;
//typedef struct Tree
//{
//	char data;
//	struct Tree* l, * r;
//}Tree,*TreeList;
//void CreatTree(TreeList& L)
//{
//	char ch = ' ';
//	cin >> ch;
//	if (ch == '#') L = NULL;
//	else
//	{
//		L = new Tree;
//		L->data = ch;
//		CreatTree(L->l);
//		CreatTree(L->r);
//	}
//}
////计算总节点数
//int Cout(TreeList& L)
//{
//	if (L == NULL) return 0;
//	else
//	{
//		return Cout(L->l) + Cout(L->r) + 1;
//	}
//}
//int YCout(TreeList& L)
//{
//	if (L == NULL) return 0;
//	if (L->l == NULL && L->r == NULL)
//	{
//		return 1;
//	}
//	else return YCout(L->l) + YCout(L->r);
//}
//void Print(TreeList& L)
//{
//	if (L==NULL) return;
//	else
//	{
//		cout << L->data;
//		Print(L->l);
//		Print(L->r);
//	}
//}
//int deep(TreeList& L)
//{
//	int m = 0;
//	int n = 0;
//	if (L == NULL) return 0;
//	else
//	{
//		m = deep(L->l)+1;
//		n = deep(L->r)+1;
//	}
//	return m > n ? m : n;
//
//	
//}
//int main()
//{
//	TreeList L;
//	CreatTree(L);
//	Print(L);
//	int t = deep(L);
//	printf("%d", t);
//	return 0;
//}