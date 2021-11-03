//#include<iostream>
//using namespace std;
//typedef struct Bnode
//{
//    char data;
//    struct Bnode* left;
//    struct Bnode* right;
//
//}Bnode,* BiTree;
//void CreateBiTree(BiTree& T)
//{
//    T = new Bnode;
//    char ch;
//    cin >> ch;
//    if (ch == '#') T = NULL;
//    else 
//    {
//        T->data = ch;
//        CreateBiTree(T->left);
//        CreateBiTree(T->right);
//    }
//}
//void Copy(BiTree& T,BiTree &T2)
//{
//    if (T != NULL)
//    {
//        T2 = T;
//        Copy(T->left, T2->left);
//        Copy(T->right, T2->right);
//    }
//}
//void PostOrderTraverse(BiTree& T)
//{
//    if (T != NULL)
//    {
//        PostOrderTraverse(T->left);
//        PostOrderTraverse(T->right);
//        cout << T->data;
//        
//    }
//}
//
//int Depth(BiTree& T)
//{
//    int  m = 0;
//    int  n = 0;
//    if (T == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        m = Depth(T->left)+1;
//        n = Depth(T->right)+1;
//    }
//    return m > n ? m : n;
//}
//
//int NodeCount(BiTree& T)
//{
//    int count = 0;
//    if (!T)
//    {
//        return 0;
//    }
//    else
//    {
//        count = NodeCount(T->left) + NodeCount(T->right)+1;
//        
//    }
//}
//
//
//int main()
//{
//    BiTree T, S;
//    CreateBiTree(T);//先序遍历顺序建立二叉链表 
//    Copy(T, S);
//    PostOrderTraverse(S); 
//    cout << endl;//后序遍历
//    cout << Depth(S) << endl; //计算二叉树深度
//    cout << NodeCount(S) << endl; //计算二叉树中结点个数
//
//    return 0;
//}