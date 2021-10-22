//#include<iostream>
//using namespace std;
//typedef struct PNode
//{
//    float coef;//系数
//    int expn; //指数
//    struct PNode* next; //指针域
//}PNode, * Polynomial;
//
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
//            else if(p->next!=NULL&&p->coef!=0){
//                cout << p->coef << "*x^" << p->expn << "+";
//            }
//            else if (p->next == NULL && p->coef != 0)
//            {
//                cout << p->coef << "*x^" << p->expn;
//
//            }
//            else if (p->coef == 0) {
//                cout << 0 << endl;
//            }
//        }
//        cout << endl;
//    }
//}
//void CreatePolyn(Polynomial& a,int n)
//{
//    
//    Polynomial p,q,r;
//    r= q =  p = new PNode;
//    a = new PNode;
//    a->next = NULL;
//    int l = 0;
//    for (int i = 0; i < n; i++) {
//        p = new PNode;
//        a->expn = 0;
//        r = q = a;
//        /*q->next = NULL;
//        q->expn = 0;*/  
//        q->expn = 0;
//        cin >> p->coef >> p->expn;
//        p->next = NULL;
//        for (int x = 0; x <=l; x++) {            
//                
//                if (q != NULL) {
//                    if (q!= NULL) {
//                        if (p->expn >= q->expn)
//                        {
//                            r = q;
//                            q = q->next;
//                        }
//                        else
//                        {
//                            p->next = q;
//                            r->next = p;
//                            break;
//                        }
//                    }
//                }
//        }
//        if (r->next == NULL || q==NULL)
//        {
//            r->next = p;
//          
//        }
//        l++;
//    }
//}
//void AddPolyn(Polynomial& a, Polynomial& b)
//{
//    Polynomial add;
//    add = new PNode;
//    //add->next = NULL;
//    Polynomial pa, pb,padd;
//    padd = new PNode;
//    add->next = padd;
//    pa = a->next;
//    pb = b->next;
//    padd = add->next;
//    while (pa != NULL && pb != NULL) {
//        if (pa->expn < pb->expn)
//        {
//            if (!padd->next)
//            {
//                padd->next = pa;
//                pa = pa->next;
//                padd = padd->next;
//            }
//            else {
//                padd = pa;
//                pa = pa->next;
//                padd = padd->next;
//            }
//           
//            
//        }
//        else if(pa->expn > pb->expn)
//        {
//            if (!padd->next)
//            {
//                padd->next = pb;
//                pb = pb->next;
//                padd = padd->next;
//            }
//            else {
//                padd = pb;
//                pb = pb->next;
//                padd = padd->next;
//            }
//
//            
//        }
//        else if(pa->expn == pb->expn){
//            padd->coef = pa->coef + pb->coef;
//            padd->expn = pa->expn;
//            pa = pa->next;
//            pb = pb->next;
//            padd->next=NULL;
//        }
//    }
//    padd->next = pa ? pa : pb;
//    a->next = add->next;
//}
//int main()
//{
//    Polynomial pa = NULL, pb = NULL;
//    CreatePolyn(pa, 3);
//    show(pa);
//    CreatePolyn(pb, 3);
//    show(pb);
//    AddPolyn(pa, pb);
//    show(pa);
//    return 0;
//}