//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//typedef struct StackNode
//{
//	int data;
//	struct StackNode* next;
//}StackNode, * LinkStack;
//
//void InitStack(LinkStack& Ls)
//{
//	Ls = NULL;
//}
//
//void Push(LinkStack& Ls, int s)
//{
//	LinkStack p;
//	p = new StackNode;
//	p->data = s;
//	p->next = Ls;
//	Ls = p;
//
//}
//
//void Pop(LinkStack& Ls,int &e)
//{
//	if (Ls == NULL) return;
//	LinkStack p;
//	p = Ls;
//	e = Ls->data;
//	Ls = Ls->next;
//	delete p;
//}
//void conversion(int n)
//{
//	LinkStack L;
//	L = new StackNode;
//	int e;
//	InitStack(L);
//	while (n)
//	{
//		Push(L, n % 8);
//		n = n / 8;
//	}
//	while (L != NULL)
//	{
//		Pop(L, e);
//		cout << e;
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	conversion(n); //十进制n转换为八进制 
//	cout << endl;
//	return 0;
//}