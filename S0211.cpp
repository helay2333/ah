//#include<iostream>
//using namespace std;
//#define OK 1
//typedef struct DuLnode
//{
//    struct DuLnode* one;
//    int data;
//    struct DuLnode* next;
//
//
//}DuLnode,*DuLinkList;
//void InitDuLNode(DuLinkList& L)
//{
//
//    L = new DuLnode;
//    L->one = NULL;
//    L->next = NULL;
//
//}
//
//void CreateDuL_H(DuLinkList& L,int n)
//{
//    DuLinkList p,q;
//    p = new DuLnode;
//    cin >> p->data;
//   
//    L->next = p;
//    p->next = NULL;
//    for (int i = 1; i < n; i++) {
//        q = new DuLnode;
//        cin >> q->data;
//        q->next = L->next;
//        L->next = q;
//        p = q;
//    }
//}
////void CreateDuL_H(DuLinkList& L,int n)
////{
////    //后插
////    DuLinkList p,q;
////    p = new DuLnode;
////    /*cin >> p->data;
////    L->next = p;
////    p->next = NULL;*/
////    p = L;
////    for (int i = 0; i < n; i++) {
////        q = new DuLnode;
////        cin >> q->data;
////        p->next = q;
////        q->next = NULL;
////        p = q;
////
////    }
////
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
//}
//
//int ListInsert_DuL(DuLinkList& L,int i,int &s)
//{
//    DuLinkList p, q;
//    p = new DuLnode;
//    q = new DuLnode;
//    int j = 1;
//    p = L;
//    if (j > i) {
//        return 0;
//        }
//        for ( ; j <= i; j++) {
//            if (p->next)
//            {
//                q = p;
//                p = p->next;
//            }
//            else {
//                //cout << "aaa" << endl;
//                return 0;
//            }
//        } 
//
//            DuLinkList r;
//            r = new DuLnode;
//            r->data = s;
//            r->next = q->next;
//            q->next = r;
//            return 1;
//
//}
//int main()
//{
//    DuLinkList L;
//    InitDuLNode(L); //初始化双向链表 
//    CreateDuL_H(L, 4); //后插法创建双向链表 
//    show(L); //遍历双向链表 
//    int i, s;
//    cout << "Please input the location and number you want to insert:" << endl;
//    cin >> i >> s;
//    if (ListInsert_DuL(L, i, s) == OK)
//        cout << "Insert success!" << endl;
//    else
//        cout << "Insert Error!" << endl;
//    show(L);
//    return 0;
//}
