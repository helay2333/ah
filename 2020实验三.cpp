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
////����Ԫ��
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
////չʾ����
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
//
//void AddStruct(LinkList& L1, LinkList& L2, LinkList& L3)
//{
//	LinkList p1, p2;
//	p1 = L1->next;
//	p2 = L2->next;
//	L3 = L1;
//	LinkList p3;
//	p3 = L3;
//	while (p1 && p2)
//	{
//		if (p1->data >= p2->data)
//		{
//			p3->next = p2;
//			p3 = p2;
//			p2 = p2->next;
//		}
//		else
//		{
//			p3->next = p1;
//			p3 = p1;
//			p1 = p1->next;
//		}
//	}
//	p3->next = p1 ? p1 : p2;
//	delete L2;
//}
//
//int main()
//{
//	LinkList L1,L2;
//	InitStruct(L1);
//	InitStruct(L2);
//	cout << "����1 3 6 8��Ϊ��һ���������" << endl;
//	InsertStruct(L1, 4);
//	cout << "����2 4 5 7 9 10 12��Ϊ�ڶ����������" << endl;
//	InsertStruct(L2, 7);
//	//չʾ����
//	cout << "չʾ���������~~~" << endl;
//	LinkList L3;
//	InitStruct(L3);
//	AddStruct(L1, L2, L3);
//	Look(L3);
//	
//
//	return 0;
//}