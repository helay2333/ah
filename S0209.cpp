//#include<iostream>
//using namespace std;
//typedef struct Lnode
//{
//    string data;
//    struct Lnode* next;
//}Lnode, * LinkList;
//void InitList(LinkList& L)
//{
//    L = new Lnode;
//    L->next = NULL;
//}
//void showList(LinkList& L)
//{
//    Lnode* p;
//    p = new Lnode;
//    p = L->next;
//    if (!L->next)
//    {
//
//        cout << "empty!" << endl;
//    }
//    int i = 1;
//    while (p)
//    {
//        cout << i << ":" << p->data << endl;
//        i++;
//        p = p->next;
//    }
//}
//void CreateList_R(LinkList& L, int n)
//{
//
//    LinkList p, r;
//
//    r = L;
//    for (int i = 0; i < n; i++)
//    {
//        p = new Lnode;
//        cin >> p->data;
//        p->next = NULL;
//        r->next = p;
//        r = p;
//    }
//}
//
//int ListDelete(LinkList& L, int i)
//{
//    LinkList p,q;
//    p = new Lnode;
//    q = new Lnode;
//    q = L;
//    p = L->next;
//    for (int j = 1; j < i; j++)
//    {
//        
//        if (p)
//        {
//            q = p;
//            p = p->next;
//            }
//        
//     
//        
//    }
//    
//    if (p)
//    {
//        q->next = p->next;
//        delete p;
//        return 1;
//    }
//    else return 0;
//}
//
//
//
//
//
//
//
//
//int main()
//{
//    LinkList Lname;
//    InitList(Lname); //初始化单链表 
//    CreateList_R(Lname, 3); //后插法创建单链表 
//    showList(Lname); //单链表遍历 
//    int i;
//    cin >> i;
//    if (ListDelete(Lname, i) != NULL) cout << "Delete success!" << endl;
//    else cout << "Error!" << endl;
//    showList(Lname); //单链表遍历
//    return 0;
//}