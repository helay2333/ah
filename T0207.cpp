//#include<iostream>
//using namespace std;
//typedef struct Lnode
//{
//    int data;
//    struct Lnode* next;
//}Lnode,*LinkList;
//void InitList(LinkList &L)
//{
//    L = new Lnode;
//    if (!L) exit(-2);
//    L->next = NULL;
//}
//void showList(LinkList& L)
//{
//    LinkList p;
//    p = L->next;
//    int i = 1;
//    if (L->next == NULL)
//    {
//        cout << "empty!" << endl;
//    }
//    else
//    {
//        while (p)
//        {
//            cout << i << ":" << p->data << endl;
//            i++;
//            p = p->next;
//        }
//    }
//}
//void CreateList_R(LinkList& L,int n)
//{
//    LinkList p,q;
//    q = L;
//    for (int i = 0; i < n; i++)
//    {
//        p = new Lnode;
//        cin >> p->data;
//        q->next = p;
//        p->next = NULL;
//        q = p;
//    }
//}
//void Inverse(LinkList& L)
//{
//    LinkList p, q,r;
//    r = p = q = new Lnode;
//    p = L->next;
//    q = p->next;
//    
//    while (q!=NULL)
//    {
//        r = q->next;
//        q->next = p;
//        if (p == L->next) p->next = NULL;
//        p = q;
//        q = r;
//    }
//    L->next = p;
//}
//int main()
//{
//    LinkList Lscore;
//    InitList(Lscore); //��ʼ�������� 
//    showList(Lscore); //��������� 
//    CreateList_R(Lscore, 4); //��巨���������� 
//    showList(Lscore);
//    Inverse(Lscore);
//    cout << "After inversing:" << endl;
//    showList(Lscore); //���������
//    return 0;
//}