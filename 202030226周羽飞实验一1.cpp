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
////˨ɾ������Ԫ��
//int  DeleteStruct(LinkList &L, int n)
//{
//	LinkList p,q;
//	p= q = new Lnode;
//	p = L;
//	int i = 0;
//	if (n <= i) return ERROR;
//	for (i=0; i <n; i++)
//	{
//		if (p->next != NULL)
//		{
//			q = p;
//			p = p->next;
//		}
//		else {
//			return ERROR;
//		}
//	}
//	q->next = p->next ;	
//	delete p;
//	return OK;
//}
//
////��������Ԫ��
//int FindStruct(LinkList& L, int n)
//{
//	LinkList p;
//	p = new Lnode;
//	int i = 0;
//	p = L;
//	if (n <= i) return ERROR;
//	for ( i = 0; i < n; i++)
//	{
//		if (p->next)
//		{
//			p = p->next;
//		}
//		else return ERROR;
//		
//	}
//	cout << "��" << i << "��Ԫ�ص�ֵΪ" << p->data << endl;
//	return OK;
//}
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
//	//ɾ������Ԫ��
//	cout << "����ɾ���ڼ���Ԫ�أ�" << endl;
//	cin >> n;
//	if (DeleteStruct(L, n)) { cout << "ɾ���ɹ�"<<endl; }
//	else { cout << "ɾ��ʧ��" << endl; }
//	 	   cout << "չʾ���������~~~" << endl;
//	Look(L);
//	//��������Ԫ��
//	cout << "��������Ҫ�鿴��Ԫ��" << endl;
//	cin >> n;
//	if (!FindStruct(L, n)) cout << "����ʧ��" << endl;;
//	
//
//	return 0;
//}