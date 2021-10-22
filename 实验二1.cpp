//#include<iostream>
//using namespace std;
//typedef struct Stack
//{
//	int data;
//	struct Stack* next;
//}Stack,*LinkStack;
//void InitStack(LinkStack& s)
//{
//	s = new Stack;
//	s = NULL;
//}
//void Push(LinkStack& s)
//{
//	LinkStack p;
//	
//	int n;
//	cout << "输入你要添加多少数字" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		p = new Stack;
//		cin >> p->data;
//		p->next = s;
//		s = p;
//	}
//	
//}
//
//void Pop(LinkStack& s)
//{
//	LinkStack p;
//	p = new Stack;
//	
//	int n;
//	cout << "选择你想删除几个元素出来？" << endl;
//	cin >> n;
//	for (int i = 0; i< n; i++)
//	{
//		
//		cout << "删除了的值为" << s->data << endl;
//		p = s;
//		s = s->next;
//		delete p;
//		p = new Stack;
//		p = s;
//	}
//}
//
//int  StackTraverse(LinkStack& s)
//
//{
//	LinkStack p;
//	p = new Stack;
//	p = s;
//	if (!p)
//	{
//		cout << "栈为空啊嗷嗷嗷~~~" << endl;
//		return 0;
//	}
//	while (p)
//	{
//		cout << p->data << endl;
//		p = p->next;
//	}
//	return 1;
//}
//
//int main()
//{
//	LinkStack s;
//	InitStack(s);
//	Push(s);
//	StackTraverse(s);
//	Pop(s);
//	StackTraverse(s);
//
//
//	return 0;
//}