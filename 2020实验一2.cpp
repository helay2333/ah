//#include<iostream>
//using namespace std;
//#define ERROR 0
//#define OK 1
//typedef struct Lnode
//{
//	int data;
//	struct Lnode* next;
//
//}Lnode,*LinkList;
//int InitStruct(LinkList &L)
//{
//	L = new Lnode;
//	if (!L) return ERROR;
//	L->next = NULL;
//	return OK;
//}
////插入元素
//void InsertStruct(LinkList& L, int n)
//{
//	LinkList p,q;
//	p = L;
//	
//	for (int i = 0; i < n; i++)
//	{
//		q = new Lnode;
//		cin >> q->data;
//		q->next = NULL;
//		p->next = q;
//		p = q;
//	}
//}
//
//
////展示链表
//void Look(LinkList& L)
//{
//	LinkList p;
//	p = new Lnode;
//	int i = 1;
//	for (p = L->next; p != NULL; p = p->next)
//	{
//		cout << i << ":" << p->data << endl;
//		i++;
//	}
//}
//void SumStruct(LinkList& L)
//{
//	LinkList p;
//	p = new Lnode;
//	int sum = 0;
//	for (p = L->next; p != NULL; p = p->next)
//	{
//		sum += p->data;
//	}
//	cout << "求和为" << sum << endl;
//}
//int main()
//{
//	LinkList L;
//	InitStruct(L);
//	int n;
//	cout << "输入你要创建的链表长度" << endl;
//	cin >> n;
//	InsertStruct(L, n);
//	//展示链表
//	cout << "展示你的链表了~~~" << endl;
//	Look(L);
//	//求和链表
//	SumStruct(L);
//	
//	
//
//	return 0;
//}