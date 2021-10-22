//#include<iostream>
//using namespace std;
//typedef struct Lnode
//{
//    string data;
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
//int ListInsert(LinkList& L, int i, string& s)
//{
//    LinkList p;
//    p = new Lnode;
//    p = L;
//    int j = 1;//
//    while (p && j  <i)
//    {
//        p = p->next;
//        j++;
//    }
//    if (!p || j>i)
//    {
//        return 0;
//    }
//    LinkList q;
//    q = new Lnode;
//    q->data = s;
//    q->next = p->next;
//    p->next = q;
//    return 1;
//    //LinkList p,q;
//    //q = new Lnode;
//    //p = new Lnode;
//    //p = L->next;
//    //q = L;
//
//    //int j ;
// 
//    //    for (j = 1; j<i; j++)
//    //    {
//    //        if (p)
//    //        {
//    //            q = p;
//    //            p = p->next;
//    //        }
//    //        else {
//    //            return 0;
//    //        }
//    //        
//    //    }
//    //    if (j == i)
//    //    {
//    //        LinkList r;
//    //        r = new Lnode;
//    //        r->data = s;
//    //        r->next = p;
//    //        q->next = r;
//    //        
//    //    }
//    //
//    ////cout << "成功了" << endl;
//    //if (p == NULL) return 0;
//    //else return 1;
//}
//int main()
//{
//    LinkList Lname;
//    InitList(Lname); //初始化单链表 
//    CreateList_R(Lname, 3); //后插法创建单链表 
//    showList(Lname); //单链表遍历 
//    int i;
//    string s;
//    cin >> i >> s;
//    if (ListInsert(Lname, i, s) != NULL) cout << "Insert success!" << endl;
//    else cout << "Error!" << endl;
//    showList(Lname); //单链表遍历
//    return 0;
//}