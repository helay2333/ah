//#include <iostream>
//using namespace std;
//
//#define OK 1
//#define ERROR 0
//
//typedef int Status;
//typedef int ElemType;
//
////´æ´¢½á¹¹ 
//typedef struct lianzhan
//{
//	ElemType data;
//	struct lianzhan* next;
//	int stacksize;
//}lianzhan, * LinkStack;
//
//
//Status InitStack(LinkStack& s)
//{
//	s = NULL;
//	return OK;
//}
//
//Status Push(LinkStack& s, ElemType e) 
//{
//	LinkStack p = new lianzhan;
//	p->data = e;
//	p->next = s;
//	s = p;
//	return OK;
//}
//
//Status Pop(LinkStack& s, ElemType& e) 
//{
//	if (s == NULL) return ERROR;
//	e = s->data;
//	LinkStack p = s;
//	s = s->next;
//	delete p;
//	return OK;
//}
//
//
//ElemType GetTop(LinkStack s) 
//{
//	if (s != NULL)
//		return s->data;
//}
//
//Status StackEmpty(LinkStack& s) 
//{
//	if (s == NULL) return OK;
//	return ERROR;
//}
//
//void yunsuan(int N)
//{
//	LinkStack s;
//	InitStack(s);
//	while (N)
//	{
//		Push(s, N % 8); 
//		N = N / 8;
//	}
//
//	while (!StackEmpty(s))  
//	{
//		ElemType e;
//		Pop(s, e);  
//		cout << e;
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	yunsuan(n); 
//	cout << endl;
//	return 0;
//}