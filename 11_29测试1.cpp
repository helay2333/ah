//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//typedef struct BNode
//{
//    char data;
//    struct BNode* l,*r;
//}BNode,*BiTree;
//void CreateBiTree(BiTree& T)
//{
//    char ch = ' ';
//    cin >> ch;
//    T = new BNode;
//    if (ch == '#') T = NULL;
//    else
//    {
//        T->data = ch;
//        CreateBiTree(T->l);
//        CreateBiTree(T->r);
//    }
//}
//void PreOrderTraverse(BiTree& T)
//{
//    if (T == NULL) return;
//    else
//    {
//        cout << T->data;
//        PreOrderTraverse(T->l);
//        PreOrderTraverse(T->r);
//    }
//}
//void InOrderTraverse(BiTree& T)
//{
//    if (T == NULL) return;
//    else
//    {
//        InOrderTraverse(T->l);
//        cout << T->data;
//
//        InOrderTraverse(T->r);
//    }
//}
//void PostOrderTraverse(BiTree& T)
//{
//    if (T == NULL) return;
//    else
//    {
//
//        PostOrderTraverse(T->l);
//        PostOrderTraverse(T->r);
//        cout << T->data;
//    }
//}
//int main()
//{
//    BiTree T;
//    CreateBiTree(T);//�������˳������������ 
//    PreOrderTraverse(T); cout << endl;//������� 
//    InOrderTraverse(T); cout << endl;//������� 
//    PostOrderTraverse(T); cout << endl;//�������
//
//    return 0;
//}