#define _CRT_SECURE_NO_WARNINGS 1
//顺序表
#include<iostream>
using namespace std;
//typedef struct
//{
//	int *data;
//	int length;
//}Sqlist;
//void InitList(Sqlist& L)
//{
//    L.data= new int[100];
//    if (!L.data) return;
//    L.length = 0;
//}
//void ListInsert(Sqlist& L, int i,int d)
//{
//
//        int j = 0;
//        for (j = L.length; j >= i; j--)
//        {
//            L.data[j + 1] = L.data[j];
//        }
//        L.data[i] = d;
//        L.length++;
//    
//}
//void GetElem(Sqlist& L,int i,int &s)
//{
//    s = L.data[i];
//}
//int main()
//{
//    //线性表的的初始化、插入、取值
//    Sqlist Lscore; //用来存储学生《数据结构》成绩
//    InitList(Lscore); //初始化线性表 
//    int i;
//    for (i = 1; i <= 5; i++)
//    {
//        ListInsert(Lscore, i, 80 + i); //线性表中添加数据 
//        
//    }
//    int s1, s2; //
//    cin >> s1 >> s2; //输入两个成绩 
//    ListInsert(Lscore, 3, s1);
//    ListInsert(Lscore, 5, s2);
//    int len = Lscore.length;
//    int s;
//    for (i = 1; i <= len; i++)
//    {
//        GetElem(Lscore, i, s); //获取线性表中数据 
//        cout << s << endl;
//    }
//    return 0;
//}


//线性表
//typedef  struct Snode
//{
//	char data[100];
//    struct Snode* next;
//}Snode,* LinkList;
//void InitList(LinkList & L)
//{
//    L = new Snode;
//    L->next = NULL;
//}
//void showList(LinkList& L)
//{
//    if (!L->next)
//    {
//        cout << "empty!" << endl;
//        return;
//    }
//    else
//    {
//        LinkList p;
//        int i = 1;
//        for (p = L->next; p != NULL; p=p->next)
//        {
//            cout << i << ":" << p->data << endl;
//            i++;
//        }
//    }
//}
////前插
////void CreateList_H(LinkList& L,int n)
////{
////    int i  = 0;
////    LinkList p;
////    for (i = 0; i < n; i++)
////    {
////        p = new Snode;
////        cin >> p->data;
////        p->next = L->next;
////        L->next = p;
////    }
////}
////后插
//void CreateList_H(LinkList& L, int n)
//{
//    int i = 0;
//    LinkList p,q;
//    q = L;
//    for (i = 0; i < n; i++)
//    {
//        p = new Snode;
//        cin >> p->data;
//        p->next = NULL;
//        q->next = p;
//        q = p;
//    }
//}
//int main()
//{
//    LinkList Lname;
//    InitList(Lname); //初始化单链表 
//    showList(Lname); //单链表遍历 
//    CreateList_H(Lname, 5); //前插法创建单链表 
//    showList(Lname); //单链表遍历 
//    return 0;
//}


