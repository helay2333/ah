//#include<iostream>
//using namespace std;
//#include<string>
//
//typedef struct Lnode
//{
//    string data;
//    struct Lnode* next;
//
//}Lnode,*LinkList;
//
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
//int LocateElem(LinkList& L, string& s)
//{
//    LinkList p;
//    p = new Lnode;
//    p = L;
//    while (p)
//    {
//        if (p->data == s)
//        {
//            return 1;
//        }
//        p = p->next;
//    }
//    if (p == NULL) return 0;
//}
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
//    string s;
//    cin >> s;
//    if (LocateElem(Lname, s) != NULL) cout << "Found!" << endl;
//    else cout << "Not found!" << endl;
//    return 0;
//}