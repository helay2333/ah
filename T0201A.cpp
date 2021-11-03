//#include<iostream>
//using namespace std;
//static int i = 0;
//template<typename T>
//class SingleList
//{
//public:
//    T data;
//    SingleList<T>* next;
//    void show();
//    void Insert(T s);
//    void MergeLink(SingleList<T>s);
//    SingleList() {
//        next = NULL;
//    }
//};
//template<typename T>
//void SingleList<T>::show()
//{
//    if (next == NULL) {
//        cout << "Empty!"<< endl;
//    }
//    else
//    {
//        SingleList *p;
//        p = next;
//        cout << "There are " << i << "scores in the Linklist:" << endl;
//        while (p!= NULL)
//        {
//            cout << data << endl;
//            p = p->next;
//        }
//    }
//}
//template<typename T>
//void SingleList<T>::Insert(T s)
//{
//    SingleList<T>* p, *q;
//    q=next;
//    cin >> p->data;
//    if (q->next == NULL)
//    {
//        i++;
//        q->next = p;
//        p->next = NULL;
//    }
//    else
//    {
//        while (q->next != NULL)
//        {
//            while (p->data > q->next->data)
//            {
//                q = q->next;
//            }
//            if (p->data < q->next->data)
//            {
//                p->next = q->next;
//                q->next = p;
//                i++;
//            }
//            else break;
//        }
//       
//    }
//}
//template<typename T>
//void SingleList<T>::MergeLink(SingleList<T>s)
//{
//    SingleList* p1, *p2, *p3,*p;
//    p1 = next->next;
//    p2 = s->next;
//    p3 = s->next;
//    p = p3;
//    while (p1 && p2)
//    {
//        if (p1->data > p2->data)
//        {
//            p3->next = p2;
//
//            p3 = p2;
//
//            p2 = p2->next;
//        }
//        else if (p1->data < p2->data)
//        {
//            p3->next = p1;
//            p3 = p1;
//            p1 = p1->next;
//        }
//        else {
//            p3->next = p1;
//            p3 = p1;
//            p1 = p1->next;
//            p2 = p2->next;
//        }
//    }
//    p3->next = p1 ? p1 : p2;
//}
//int main()
//{
//    SingleList<int> sa, sb;
//    sa.show(); //遍历链表 
//    int s;
//    for (int i = 0; i < 3; i++)
//    {
//        cin >> s;         sa.Insert(s);
//    }  //构造无重复元素的递增单链表sa
//    sa.show(); //遍历链表
//    for (int i = 0; i < 4; i++)
//    {
//        cin >> s;         sb.Insert(s);
//    } //构造无重复元素的递增单链表sa 
//    sb.show();
//    sa.MergeLink(sb); //合并两个链表，去除重复元素 
//    sa.show();
//    return 0;
//}