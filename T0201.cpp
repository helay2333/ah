//#include<iostream>
//using namespace std;
//typedef struct Lnode
//{
//    int data;
//    struct Lnode* next;
//}Lnode,*LinkList;
//
//void InitList(LinkList& a)
//{
//    a = new Lnode;
//    a->next = NULL;
//}
//
//void CreateList_Up(LinkList& a,int n)
//{
//    LinkList p,q;
//    p = q= new Lnode;
//    a->next =q;
//    
//    for (int i = 0; i < n; i++)
//    {
//        cin >> p->data;
//        while (p->data < q->data&&p->next == NULL)
//        {
//            
//            p = p->next;
//        }
//        
//
//
//    }
//}
//
//void showList(LinkList& a)
//{
//
//}
//
//void MergeList(LinkList& a,LinkList&b,LinkList &c)
//{
//
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