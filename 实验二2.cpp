//#include<iostream>
//using namespace std;
//typedef struct stack
//{
//	int data;
//	struct stack* next;
//}stack,*linkstack;
//void initstack(linkstack& s)
//{
//	s = new stack;
//	s = NULL;
//}
//void push(linkstack& s)
//{
//	linkstack p;
//	
//	int n;
//	cout << "输入你要添加多少数字" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		p = new stack;
//		cin >> p->data;
//		p->next = s;
//		s = p;
//	}
//	
//}
//
//void pop(linkstack& s)
//{
//	linkstack p;
//	p = new stack;
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
//		p = new stack;
//		p = s;
//	}
//}
//
//int  stacktraverse(linkstack& s)
//
//{
//	linkstack p;
//	p = new stack;
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
//	linkstack s;
//	initstack(s);
//	push(s);
//	stacktraverse(s);
//	pop(s);
//	stacktraverse(s);
//
//
//	return 0;
//}