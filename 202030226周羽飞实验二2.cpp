//#include <iostream>
//using namespace std;
//
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -2
//
//#define MAXQSIZE 100
//
//typedef int Status;
//typedef float QElemType;
//
//typedef struct liandui
//{
//	QElemType data;
//	struct liandui* next;
//}liandui, * QueueNode;
//
//typedef struct
//{
//	QueueNode front;
//	QueueNode rear;
//}LinkQueue;
////初始化 
//Status InitQueue(LinkQueue& Q)
//{
//	Q.front = Q.rear = new liandui;
//	Q.front->next = NULL;
//	return OK;
//}
//
//Status EnQueue(LinkQueue& Q, QElemType e)
//{
//	QueueNode p;
//	p = new liandui;
//	p->data = e;
//	p->next = NULL;
//	Q.rear->next = p;
//	Q.rear = p;
//	return OK;
//}
////出队 
//Status DeQueue(LinkQueue& Q, QElemType& e)
//{
//	if (Q.front == Q.rear) return ERROR;
//	QueueNode p = Q.front->next;
//	e = p->data;
//	Q.front->next = p->next;
//	if (Q.rear == p) Q.rear = Q.front;
//	delete p;
//	return OK;
//}
//
//QElemType GetHead(LinkQueue& Q)
//{
//	if (Q.front != Q.rear)
//		return Q.front->next->data;
//}
//
//int main()
//{
//	LinkQueue M;
//	InitQueue(M); 
//	QElemType s;
//	int i, n;
//	cin >> n;
//	for (i = 1; i < n; i++)
//	{
//		cin >> s;
//		EnQueue(M, s);
//	}
//	for (i = 1; i < n; i++)
//	{
//		while (!DeQueue(M, s))
//			cout << " ";
//		cout << s;
//
//	}
//	return 0;
//}
