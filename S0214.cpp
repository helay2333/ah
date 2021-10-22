//#include<iostream>
//using namespace std;
//typedef struct Snode
//{
//    int score;
//    struct Snode* next;
//}Snode,*Sqlist;
//void InitList(Sqlist& a)
//{
//    a = new Snode;
//    a->next = NULL;
//}
//
//void CreateList_Up(Sqlist& a, int n)
//{
//    Sqlist p,q,r;
//    p = new Snode;
//    p = a;
//    for (int i = 0; i < n; i++)
//    {
//        q = new Snode;
//        cin >> q->score;
//        q->next = NULL;
//        p->next = q;
//        p = p->next;
//    }
//   
//    for (int i = 0; i < n; i++)
//    {
//        q = a;
//        p = a->next;
//        while (p->next != NULL)
//        {
//            if (p->score > (p->next->score))
//            {
//                q->next = p->next;
//                q = p->next;
//                p->next = q->next;
//                q->next = p;
//            }
//            else {
//                p = p->next;
//                q = q->next;
//            }
//        }
//    }
//  
//}
//void Show(Sqlist& a)
//{
//    Sqlist p;
//    p = new Snode;
//    for (p = a->next; p != NULL; p=p->next)
//    {
//        cout << p->score << endl;
//    }
//}
//void MergeList_Sq(Sqlist &a, Sqlist &b, Sqlist& c)
//{
//    Sqlist pA,pB,pC;
//    pA=pB=pC = new Snode;
//    pA = a->next;
//    pB = b->next;
//    pC = c;
//    while (pA && pB)
//    {
//        if (pA->score <= pB->score)
//        {
//            pC->next = pA;
//            pC = pA;
//            pA = pA->next;
//        }
//        else
//        {
//            pC->next = pB;
//            pC = pB;
//            pB = pB->next;
//        }
//    }
//    pC->next = pA ? pA : pB;
//    delete b;
//
//
//
//
//
//}
//
//
//
//
//int main()
//{
//    //线性表的的初始化、插入、取值
//    Sqlist La, Lb, Lc; //用来存储学生《数据结构》成绩
//    InitList(La), InitList(Lb), InitList(Lc); //初始化线性表 
//    CreateList_Up(La, 3); //创建非递减链表 
//    cout << "Show La:" << endl;
//    Show(La); //遍历线性表 
//    CreateList_Up(Lb, 4);
//    cout << "Show Lb:" << endl;
//    Show(Lb);
//    MergeList_Sq(La, Lb, Lc); //将两个线性表元素合并到Lc(非递减)
//    cout << "After Merging:" << endl;
//    Show(Lc);
//
//    return 0;
//}