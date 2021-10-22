//#include<iostream>
//using namespace std;
//#define MAXSIZE 100
//#define ERROR 0
//#define OK 1
//typedef struct
//{
//    int* base;
//    int* top;
//    int stacksize;
//}SqStack;
//void InitStack(SqStack &sint)
//{
//    sint.base =new int[MAXSIZE];
//    sint.top = sint.base;
//    sint.stacksize = MAXSIZE;
//
//}
//int Push(SqStack &sint, int s)
//{
//    if (sint.top - sint.base == sint.stacksize) return ERROR;
//    *sint.top = s;
//    sint.top++;
//}
//int GetTop(SqStack& sint)
//{
//    if (sint.top == sint.base) return ERROR;
//    return *(sint.top-1);
//}
//int Pop(SqStack& sint)
//{
//    if (sint.top == sint.base) return ERROR;
//    --sint.top;
//    return 1;
//}
//int main()
//{
//    SqStack sint;
//    InitStack(sint);
//
//    int s;
//    for (int i = 0; i < 4; i++)
//    {
//        cin >> s;
//        Push(sint, s);
//    }
//
//    for (int i = 0; i < 4; i++)
//    {
//        int e = GetTop(sint);
//        Pop(sint);
//        cout << e << endl;
//    }
//    return 0;
//}