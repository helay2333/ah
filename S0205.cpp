//#include<iostream>
//using namespace std;
//typedef string ElemType;
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
//void showList(LinkList& L)
//{
//    LinkList p;
//    
//    if (!L->next)
//    {
//        cout << "empty!" << endl;
//    }
//    p = new Lnode;
//    p = L->next;
//    int i = 1;
//    while (p)
//    {
//        cout << i << ":" << p->data << endl;
//        i++;
//        p = p->next;
//    }
//}
//void CreateList_R(LinkList& L,int n)
//{
//    LinkList p,q;
//    p = new Lnode;
//    L->next = p;
//    cin >> p->data;
//    p->next = NULL;
//    for (int j = 1; j < n; j++)
//    {
//        q = new Lnode;
//        cin >> q->data;
//        q->next = NULL;
//        p->next = q;
//        p = q;
//    }
//}
//
//
//int main()
//{
//    LinkList Lname;
//    InitList(Lname); //��ʼ�������� 
//    showList(Lname); //��������� 
//    CreateList_R(Lname, 5); //��巨���������� 
//    showList(Lname); //��������� 
//    return 0;
//}