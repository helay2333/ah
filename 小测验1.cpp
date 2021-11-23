//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//typedef struct StackNode
//{
//	string data;
//	struct StackNode* next;
//}StackNode,* LinkStack;
//
//void InitStack(LinkStack& Ls)
//{
//	Ls = NULL;
//}
//
//void Push(LinkStack& Ls, string s)
//{
//	LinkStack p;
//	p = new StackNode;
//	p->data = s;
//	p->next = Ls;
//	Ls = p;
//
//}
//
//void Pop(LinkStack& Ls)
//{
//	if (Ls == NULL) return;
//	LinkStack p;
//	p = Ls;
//	Ls = Ls->next;
//	delete p;
//}
//string GetTop(LinkStack& Ls)
//{
//
//	return Ls->data;
//}
//int StackEmpty(LinkStack& Ls)
//{
//	if (Ls == NULL) return 1;
//	return 0;
//}
//
//int main()
//{
//	LinkStack Ls;
//	InitStack(Ls); //初始化链栈 
//	int n;
//	string s;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		getline(cin, s);
//		Push(Ls, s); 	//入栈 
//	}
//
//	while (!StackEmpty(Ls))
//	{
//		cout << GetTop(Ls) << endl; //取栈顶元素 
//		Pop(Ls); 	//出栈 
//	}
//}