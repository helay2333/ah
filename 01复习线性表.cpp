#define _CRT_SECURE_NO_WARNINGS 1
//˳���
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
//    //���Ա�ĵĳ�ʼ�������롢ȡֵ
//    Sqlist Lscore; //�����洢ѧ�������ݽṹ���ɼ�
//    InitList(Lscore); //��ʼ�����Ա� 
//    int i;
//    for (i = 1; i <= 5; i++)
//    {
//        ListInsert(Lscore, i, 80 + i); //���Ա���������� 
//        
//    }
//    int s1, s2; //
//    cin >> s1 >> s2; //���������ɼ� 
//    ListInsert(Lscore, 3, s1);
//    ListInsert(Lscore, 5, s2);
//    int len = Lscore.length;
//    int s;
//    for (i = 1; i <= len; i++)
//    {
//        GetElem(Lscore, i, s); //��ȡ���Ա������� 
//        cout << s << endl;
//    }
//    return 0;
//}


//���Ա�
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
////ǰ��
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
////���
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
//    InitList(Lname); //��ʼ�������� 
//    showList(Lname); //��������� 
//    CreateList_H(Lname, 5); //ǰ�巨���������� 
//    showList(Lname); //��������� 
//    return 0;
//}


