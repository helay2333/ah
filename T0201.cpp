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