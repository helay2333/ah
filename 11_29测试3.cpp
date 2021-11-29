//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#define MAX 100
//using namespace std;
//typedef struct Lnode
//{
//	char data[MAX];
//	struct Lnode* next;
//}Lnode,*LinkList;
//void InitList(LinkList& L)
//{
//	L = new Lnode;
//	if (!L) return;
//	L->next = NULL;
//}
//void showList(LinkList& L)
//{
//	if (L->next == NULL)
//	{
//		cout << "empty" << endl;
//		return ;
//	}
//	LinkList p;
//	p = new Lnode;
//	int i = 1;
//	for (p = L->next; p != NULL; p = p->next)
//	{
//		cout << i << ":" << p->data << endl;
//		i++;
//	}
//}
//void CreateList_H(LinkList& L,int n)
//{
//	//L = new Lnode;
//	LinkList p;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		p = new Lnode;
//		cin >> p->data;
//		p->next = L->next;
//		L->next = p;
//
//	}
//}
//
//int main()
//{
//	LinkList Lname;
//	InitList(Lname); //初始化单链表 
//	showList(Lname); //单链表遍历 
//	CreateList_H(Lname, 4); //前插法创建单链表 
//	showList(Lname); //单链表遍历 
//	return 0;
//}