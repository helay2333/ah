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
//void SumStruct(LinkList& L)
//{
//	LinkList p;
//	p = new Lnode;
//	int sum = 0;
//	for (p = L->next; p != NULL; p = p->next)
//	{
//		sum += p->data;
//	}
//	cout << "���Ϊ" << sum << endl;
//}
//int main()
//{
//	LinkList L;
//	InitStruct(L);
//	int n;
//	cout << "������Ҫ������������" << endl;
//	cin >> n;
//	InsertStruct(L, n);
//	//չʾ����
//	cout << "չʾ���������~~~" << endl;
//	Look(L);
//	//�������
//	SumStruct(L);
//	
//	
//
//	return 0;
//}