//#include<iostream>
//using namespace std;
////template<typename T>
////struct Single
////{
////    T data;
////    struct Single* next;
////};
//static int i = 0;
//template<typename T>
//
//class SingleList
//{
//    
//public:
//    T data;
//    SingleList* next;
//    //构造函数初始化
//    SingleList()
//    {
//        this ->next= NULL;
//    }
//
//    //展示
//    void show()
//    {
//        
//        SingleList* q;
//        q = this->next;
//        if (q == NULL)
//        {
//            cout << "Empty!" << endl;
//        }
//        else {
//            cout << "There are " << i << " scores in the Linklist:" << endl;
//            while (q!= NULL)
//            {
//                cout << q->data <<endl;
//                q = q->next;
//            }
//            i = 0;
//            cout << endl;
//        }
//        
//    }
//
//    //插入元素
//    void Insert(int s)
//    {
//        SingleList* p,*q;
//        q = this;
//        p = new SingleList;
//        if (q->next == NULL)
//        {
//            i++;
//            p->data = s;
//            q->next = p;
//            p->next = NULL;
//        }
//        else
//        {
//            while (q->next != NULL && s >= q->next->data)
//            {
//                q = q->next;
//            }
//            p = new SingleList;
//            p->data = s;
//            i++;
//            p->next = q->next;
//            q->next = p;
//            
//        }
//        
//    }
//
//    //合并
//    void MergeLink(SingleList& sb)
//    {
//        SingleList *pa,*pb,*q,*r,*p;
//        q = new SingleList;
//        
//        pa = this->next;
//        pb = sb.next;
//        r = new SingleList;
//        r ->next= pa;
//        q = r;
//        while (pa && pb)
//        {
//            if (pa->data <= pb->data)
//            {
//                q->next = pa;
//                q = pa;
//                pa = pa->next;  
//                i++;
//            }
//            else
//            {
//                q->next = pb;
//                q = pb;
//                pb = pb->next; 
//                i++;
//            }
//        }
//        q->next = pa ? pa : pb;
//        if (pa)
//        {
//            while (pa)
//            {
//                i++;
//                pa = pa->next;
//            }
//        }
//        else
//        {
//            while (pb)
//            {
//                i++;
//                pb = pb->next;
//            }
//        }
//        p = r->next;
//        this->next = p;
//    }
//
//
//};
//
//int main()
//{
//    SingleList<int> sa, sb;
//    sa.show(); //遍历链表 
//    int s;
//    for (int i = 0; i < 3; i++)
//    {
//        cin >> s;         sa.Insert(s);
//    }  //构造可有重复元素的非递减单链表sa
//    sa.show(); //遍历链表
//    for (int i = 0; i < 4; i++)
//    {
//        cin >> s;         sb.Insert(s);
//    } //构造可有重复元素的非递减单链表sa 
//    sb.show();
//    sa.MergeLink(sb); //合并两个链表 
//    sa.show();
//    return 0;
//}
