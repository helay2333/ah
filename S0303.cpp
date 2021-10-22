//#include<iostream>
//using namespace std;
//typedef int Status;
//#define OK 1
//#define ERROR 0
//
//#include<string>
//typedef struct StackNode
//{
//    string data;
//    struct StackNode* next;
//}StackNode,* LinkStack;
//
//Status InitStack(LinkStack&s)
//{
//    s = NULL;
//    return OK;
//}
//void Push(LinkStack& s, string n)
//{
//    LinkStack p;
//    p = new StackNode;
//    p->data = n;
//    p->next = s;
//    s = p;
//}
//Status StackEmpty(LinkStack& s)
//{
//    if (s) return 0;
//    else return 1;
//}
//string GetTop(LinkStack& s)
//{
//    if (s != NULL)
//    {
//        return s->data;
//    }
//}
//Status Pop(LinkStack& s)
//{
//    if (s == NULL) return ERROR;
//    LinkStack p;
//    p = new StackNode;
//    p = s;
//    s = s->next;
//   
//    delete p;
//    return OK;
//}
//int main()
//{
//    LinkStack Ls;
//    InitStack(Ls); //初始化链栈 
//    int n;
//    string s;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        getline(cin, s);
//        Push(Ls, s);     //入栈 
//    }
//
//    while (!StackEmpty(Ls))
//    {
//        cout << GetTop(Ls) << endl; //取栈顶元素 
//        Pop(Ls);     //出栈 
//    }
//}