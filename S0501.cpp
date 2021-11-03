//#include<iostream>
//using namespace std;
//
//typedef struct BiTnode
//{
//    char data;
//    struct BiTnode* left, * right;
//}BiTnode,*BiTree;
//
//void CreateBiTree(BiTree &L)
//{
//    L = new BiTnode;
//    char ch = '\0';
//    cin >> ch;
//   
//    if (ch == '#')
//    {
//        L = NULL;
//    }
//    else
//    {
//        L->data = ch;
//        CreateBiTree(L->left);
//        CreateBiTree(L->right);
//    }
//}
//
//void PreOrderTraverse(BiTree L)
//{
//    
//    if (L)
//    {
//        cout << L->data ;
//        PreOrderTraverse(L->left);
//        PreOrderTraverse(L->right);
//    }
//}
//
//void InOrderTraverse(BiTree L)
//{
//    if (L)
//    {
//        InOrderTraverse(L->left);
//        cout << L->data;
//
//        InOrderTraverse(L->right);
//    }
//}
//
//void PostOrderTraverse(BiTree L)
//{
//    if (L)
//    {
//        PostOrderTraverse(L->left);
//        PostOrderTraverse(L->right);
//        cout << L->data;
//
//    }
//}
//int Depth(BiTree L)
//{
//    int m = 0 ,n =  0;
//    if (L==NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        m = Depth(L->left);
//        n = Depth(L->right);
//        if (m > n) return m + 1;
//        else return n + 1;
//    }
//}
//
//int NodeCount(BiTree L)
//{
//    static int count = 1;
//    if (L == NULL) return count;
//    else
//    {     
//            if (L->left == NULL && L->right == NULL)
//            {
//                count++;
//            }
//            NodeCount(L->left);
//            NodeCount(L->right);
//           
//    }
//    return count;
//}
//int main()
//{
//    BiTree T;
//    CreateBiTree(T);//先序遍历顺序建立二叉链表 
//    PreOrderTraverse(T); cout << endl;//先序遍历 
//    InOrderTraverse(T); cout << endl;//中序遍历 
//    PostOrderTraverse(T); cout << endl;//后序遍历
//    cout<<NodeCount(T) << endl;
//    return 0;
//}