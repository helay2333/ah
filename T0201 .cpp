//#include<iostream>
//using namespace std;
//typedef struct Lnode
//{
//    int data;
//    struct Lnode* next;
//}Lnode,*LinkList;
//void InitList(LinkList& L)
//{
//    L = new Lnode;
//    L->next = NULL;
//}
//void CreateList_Up(LinkList& L,int n)
//{
//    LinkList p,q;
//    for (int i = 0; i < n; i++)
//    {
//        q = L;
//        p = new Lnode;
//        cin >> p->data;
//        while (q->next != NULL && q->next->data < p->data)
//        {
//            
//            q = q->next;
//            
//        }
//        if (q->next != NULL)
//        {
//            if (q->next->data != p->data)
//            {
//                p->next = q->next;
//                q->next = p;
//            }
//            
//        }
//        else {
//            p->next = q->next;
//            q->next = p;
//        }
//   
//        
//        
//    }
//}
//void showList(LinkList& L)
//{
//    LinkList p;
//    p = new Lnode;
//
//    int i = 1;
//    for (p = L->next; p != NULL; p = p->next)
//    {
//        cout << i << ":" << p->data << endl;
//        i++;
//    }
//}
//void MergeList(LinkList& L1, LinkList& L2, LinkList& L3)
//{
//    LinkList p1, p2, p3,p;
//    p1 = L1->next;
//    p2 = L2->next;
//    p3 = L3;
//    p = new Lnode;
//    p =p3;
//    while (p1 && p2)
//    {
//        if (p1->data > p2->data)
//        {
//            p->next = p2;
//            p = p2;
//            p2 = p2->next; 
//
//        }
//        else if (p1->data < p2->data)
//        {
//            p->next = p1;
//            p = p1;
//            p1 = p1->next;
//        }
//        else{
//            p->next = p1;
//            p = p1;
//            p1 = p1->next;
//            p2 = p2->next;
//        }
//    }
//    p->next = p1 ? p1 : p2;
//    p3 = p;
//}
//int main()
//{
//    LinkList La, Lb, Lc;
//    InitList(La); InitList(Lb); InitList(Lc); //初始化带头结点的单链表(存储int类型数据) 
//    CreateList_Up(La, 3); //创建递增单链表（去掉重复数据） 
//    cout << "Show La:" << endl;
//    showList(La); //单链表遍历 
//    CreateList_Up(Lb, 4); //创建递增单链表（去掉重复数据） 
//    cout << "Show Lb:" << endl;
//    showList(Lb); //单链表遍历 
//
//    MergeList(La, Lb, Lc);
//    cout << "Show Lc:" << endl;
//    showList(Lc); //单链表遍历
//    return 0;
//}
