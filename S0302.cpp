//#include<iostream>
//using namespace std;
//#define MAXSIZE 100
//#define OVERFLOW 2
//typedef struct 
//{
//    float *top;
//    float* base;
//    int size;
//}SqStack;
////初始化
//void InitStack(SqStack& s)
//{
//    s.base = new float[MAXSIZE];
//    if (!s.base) exit(OVERFLOW);
//    s.top = s.base;
//    s.size = MAXSIZE;
//}
////入栈
//void Push(SqStack& s,float a)
//{
//    if (s.top - s.base != s.size)
//    {
//        *(s.top) = a;
//        s.top++;
//    }
//}
////判断是否为空
//int StackEmpty(SqStack& s)
//{
//    if (s.base != s.top)
//        return 0;
//    else return 1;
//}
////求栈的长度
//int StackLength(SqStack& s)
//{
//    float* p;
//    p = s.base;
//    int i = 0;
//    while (p != s.top)
//    {
//        p++;
//        i++;
//    }
//    return i;
//}
////遍历
//void StackTraverse(SqStack& s)
//{
//    float* p;
//    p = s.base;
//    while (p != s.top)
//    {
//        cout << *p << endl;
//        p++;
//
//    }
//}
////清空栈
//void ClearStack(SqStack& s)
//{
//
//    while (s.base != s.top) {
//        float* p;
//        p = s.top;
//        s.top--;
//       
//    }
//}
////销毁栈
//void DestroyStack(SqStack& s)
//{
//    if (s.base) {
//        delete s.base;
//        s.size = 0;
//        s.base = s.top = NULL;
//    }
//}
//int main()
//{
//    SqStack sint;
//    InitStack(sint);
//
//    int n;
//    float s;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> s;
//        Push(sint, s);
//    }
//    if (!StackEmpty(sint))
//    {
//        cout << "There are " << StackLength(sint) << " numbers in the stack:" << endl;
//        StackTraverse(sint); //从栈底到栈顶遍历 
//    }
//    cout << "ClearStack()" << endl;
//    ClearStack(sint);
//    cout << StackLength(sint) << endl;
//    DestroyStack(sint);
//    return 0;
//}