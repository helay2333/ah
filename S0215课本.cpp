//#include<iostream>
//using namespace std;
//typedef struct PNode
//{
//    float coef;//系数
//    int expn; //指数
//    struct PNode* next; //指针域
//}PNode, * Polynomial;
//void show(Polynomial& a)
//{
//    Polynomial p;
//    if (a == NULL)
//    {
//        cout << "Empty!" << endl;
//    }
//    else
//    {
//        cout << "f(x)=";
//        for (p = a->next; p != NULL; p = p->next)
//        {
//            if (p->expn == 0) {
//                cout << p->coef<<"+";
//            }
//            else if(p->expn==1){
//                cout << p->coef << "*x"<<"+";
//            }
//            else if(p->expn>1&&p->next!=NULL){
//                cout << p->coef << "*x^" << p->expn << "+";
//            }
//            else if (p->expn > 1 && p->next == NULL)
//            {
//                cout << p->coef << "*x^" << p->expn;
//
//            }
//        }
//        cout << endl;
//    }
//}
//void CreatePolyn(Polynomial& a,int n)
//{
//    Polynomial p,q,r;
//    a = new PNode;
//    a->next = NULL;
//    for (int i = 0; i < n; i++) {
//        p = new PNode;
//        cin >> p->coef >> p->expn;
//        r = a;
//        q = a->next;
//        while (q && q->expn < p->expn) {
//            r = p;
//            q = q->next;
//        }
//        p->next = q;
//        r->next = p;
//    }
//    
//}
//
//
//
//
//int main()
//{
//    Polynomial pa = NULL, pb = NULL;
//    show(pa);
//    CreatePolyn(pa, 3);
//    show(pa);
//    CreatePolyn(pb, 4);
//    show(pb);
//    return 0;
//}