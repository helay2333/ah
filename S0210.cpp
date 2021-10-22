//#include<iostream>
//using namespace std;
//typedef struct DuLnode
//{
//    struct DuLnode* one;
//    int data;
//    struct DuLnode* next;
//
//
//}DuLnode,*DuLinkList;
//
//void InitDuLNode(DuLinkList&L)
//{
//    L = new DuLnode;
//    L->one = NULL;
//    L->next = NULL;
//   
//}
//
//void CreateDuL_H(DuLinkList& L1, int i)
//{
//    DuLinkList p;
//    int j;
//    for (j = 0; j < i; j++)
//    {
//        p = new DuLnode;
//        cin >> p->data;
//        p->next = L1->next;
//        p->one = L1;
//        L1->next = p;
//        /*if (p->next != NULL) p->next->one = p;*/
//
//    }
//}
////void CreateDuL_H(DuLinkList& L,int n)
////{
////    DuLinkList p,q;
////    p = new DuLnode;
////    cin >> p->data;
////   
////    L->next = p;
////    p->next = NULL;
////    for (int i = 1; i < n; i++) {
////        q = new DuLnode;
////        cin >> q->data;
////        q->next = L->next;
////        L->next = q;
////        p = q;
////    }
////}
//void show(DuLinkList& L)
//{
//    DuLinkList p;
//    p = new DuLnode;
//    //p = L;
//    int i = 1;
//    for (p = L->next; p!=NULL; p = p->next)
//    {
//        cout << i << ":" << p->data << endl;
//        i++;
//    }
//
//
//
//}
//
//
//int main()
//{
//    DuLinkList L;
//    InitDuLNode(L); //初始化双向链表 
//    CreateDuL_H(L, 4); //前插法创建双向链表 
//    show(L); //遍历双向链表 
//    return 0;
//}