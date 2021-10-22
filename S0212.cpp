//#include<iostream>
//using namespace std;
//#define OK 1
//typedef struct DuLnode
//{
//    struct DuLnode* one;
//    int data;
//    struct DuLnode* next;
//}DuLnode, * DuLinkList;
//
//
//void InitDuLNode(DuLinkList& L)
//{
//    L = new DuLnode;
//    L->next = NULL;
//    L->one = NULL;
//}
//void CreateDuL_H(DuLinkList& L,int n)
//{
//    DuLinkList p;
//    for (int i = 0; i < n; i++)
//    {
//        p = new DuLnode;
//        cin >> p->data;
//        
//        p->one = L->one;
//        L->one = p;
//        p->next = L;
//    }
//}
//void show(DuLinkList& L)
//{
//    DuLinkList p;
//    p = new DuLnode;
//    //p = L->one;
//    int i = 1;
//    for (p = L->one; p != NULL; p = p->one)
//    {
//        cout << i << ":" << p->data << endl;
//        i++;
//    }
//}
//
//int ListDelete_DuL(DuLinkList& L, int i)
//{
//    DuLinkList p,q;
//    q = p = new DuLnode;
//    int j = 1;
//    p = L->one;
//    while(p->one != NULL&&j <i)
//    {       
//        p = p->one;
//        //p->next = q;
//       /* p->one = q->one->one;*/
//        j++;
//
//    }
//    cout << "j" << j << endl;
//    //cout << "过了吗" << endl;
//    if (i>0&&j == i + 1 &&p!=NULL)
//    {
//        p->next->one = p->one;
//
//        if (p->one != NULL)
//        {
//            p->one->next = p->next;
//        }
//        
//        
//       return 1;
//    }
//    else {
//        return 0;
//    }
//    
// 
//}
//
//
//
//int main()
//{
//    DuLinkList L;
//    InitDuLNode(L); //初始化双向链表 
//    CreateDuL_H(L, 4); //后插法创建双向链表 
//    show(L); //遍历双向链表 
//    int i;
//    cout << "Please input the location you want to delete:" << endl;
//    cin >> i;
//    if (ListDelete_DuL(L, i) == OK)
//        cout << "Delete success!" << endl;
//    else
//        cout << "Delete Error!" << endl;
//    show(L);
//    return 0;
//}