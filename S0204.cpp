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
////������ı��� 
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
//
//void CreateList_H(LinkList& L,int i)
//{
//    Lnode* p;
//    for (int j = 0; j < i; j++)
//    {
//        p = new Lnode;
//        cin >> p->data;
//        p->next = L->next;
//        L->next = p;
//    }
//}
//
//
//int main()
//{
//    LinkList Lname;
//    InitList(Lname); //��ʼ�������� 
//    showList(Lname); //��������� 
//    CreateList_H(Lname, 5); //ǰ�巨���������� 
//    showList(Lname); //��������� 
//    return 0;
//}