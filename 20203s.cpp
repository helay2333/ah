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
////栓删除链表元素
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
////查找链表元素
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
//	cout << "第" << i << "个元素的值为" << p->data << endl;
//	return OK;
//}
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
//	//删除链表元素
//	cout << "你想删除第几个元素？" << endl;
//	cin >> n;
//	if (DeleteStruct(L, n)) { cout << "删除成功"<<endl; }
//	else { cout << "删除失败" << endl; }
//	 	   cout << "展示你的链表了~~~" << endl;
//	Look(L);
//	//查找链表元素
//	cout << "输入你想要查看的元素" << endl;
//	cin >> n;
//	if (!FindStruct(L, n)) cout << "查找失败" << endl;;
//	
//
//	return 0;
//}