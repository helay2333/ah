//#include<iostream>
//using namespace std;
//typedef struct stackNode
//{
//    int data;
//    struct stackNode* next;
//}stackNode,*LinkNode;
//void printStack(LinkNode& L)
//{
//    while (L != NULL)
//    {
//        cout << L->data;
//        L = L->next;
//    }
//}
//void conversion(int n)
//{
//    LinkNode p;
//    LinkNode L;
//    L = NULL;
//    while (n != 0)
//    {
//        p = new stackNode;
//        p->data = n % 8;
//        p->next = L;
//        L = p;
//        n = n / 8;
//    }
// 
// 
//   
//    printStack(L);
//    
//}
//int main()
//{
//    int n;
//    cin >> n;
//    conversion(n); //十进制n转换为八进制 
//    cout << endl;
//    return 0;
//}