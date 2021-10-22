//#include<iostream>
//using namespace std;
//typedef string ElemType;
//typedef int Status;
//#define OK 1
//typedef struct Lnode
//{
//    ElemType data;
//    struct Lnode* next;
//}Lnode,*LinkList;
//void InitList(LinkList& L)
//{
//    L = new Lnode;
//    L->next = NULL;
//}
//void showList(LinkList &L)
//{
//    Lnode* p;
//    p = new Lnode;
//    p = L->next;
//    if (!L->next)
//    {
//    
//    cout << "empty!" << endl;
//    }
//    int i = 1;
//    while (p)
//    {
//        cout << i << ":" << p->data << endl;
//        i++;
//        p = p->next;
//   }
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
//Status GetElem(LinkList& L, int i, string& s)
//{
//    LinkList p;
//    p = new Lnode;
//    p = L->next;
//    int j = 1;
//
//        while (p)
//        {
//            if (j == i)
//            {
//                s = p->data;
//                return 1;
//            }
//            p = p->next;
//            j++;
//        }
//        return 0;
//}
//
//int main()
//{
//    LinkList Lname;
//    InitList(Lname); //初始化单链表 
//    CreateList_R(Lname, 3); //后插法创建单链表 
//    showList(Lname); //单链表遍历 
//    string s;
//    int i;
//    cin >> i;
//    if (GetElem(Lname, i, s) == OK)     cout << s << endl;
//    else cout << "Error!" << endl;
//    return 0;
//}