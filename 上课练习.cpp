//#include<iostream>
//using namespace std;
//typedef struct LNode
//{
//	int data;
//	struct LNode *next;
//}LNode,*LinkList;
//void CreatLink(LinkList &L,int n) {
//	L = new LNode;
//	L->next = NULL;
//	LinkList p = L;
//	LinkList r = new LNode;
//	int i;
//	/*p->data = 1;
//	p->next = NULL;*/
//	for (i = 0; i < n; i++)
//	{
//		cin >> r->data;
//		r->next = NULL;
//		p = r;
//		r = new LNode;
//		p->next = r;
//		
//	}
//}
//void print(LinkList &L)
//{
//	LinkList p;
//	p = L;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		cout << p->data<< endl;
//		p = p->next;
//	}
//}
//int main()
//{
//	LinkList L = NULL;
//	CreatLink(L, 5);
//	cout << "Êä³öÁ´±í" << endl;
//	print(L);
//	return 0;
//}