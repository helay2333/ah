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
//    InitList(La); InitList(Lb); InitList(Lc); //��ʼ����ͷ���ĵ�����(�洢int��������) 
//    CreateList_Up(La, 3); //��������������ȥ���ظ����ݣ� 
//    cout << "Show La:" << endl;
//    showList(La); //��������� 
//    CreateList_Up(Lb, 4); //��������������ȥ���ظ����ݣ� 
//    cout << "Show Lb:" << endl;
//    showList(Lb); //��������� 
//
//    MergeList(La, Lb, Lc);
//    cout << "Show Lc:" << endl;
//    showList(Lc); //���������
//    return 0;
//}
