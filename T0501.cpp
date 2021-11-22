//#include<iostream>
//using namespace std;
//typedef struct
//{
//    char data;
//    struct Bnode* lchild, * rlchild;
//}Bnode,*BiTree;
//void CreateBiTree(BiTree &T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#') T = NULL;
//    
//    else
//    {
//        T = new Bnode;
//        CreateBiTree(T->lchild);
//        cout << T->data;
//        CreateBiTree(T->rlchild);
//    }
//}
//int LeafNode(BiTree T)
//{
//
//}
//int main()
//{
//    BiTree T;
//    CreateBiTree(T); //先序遍历顺序创建二叉树 
//    cout << LeafNode(T) << endl; //统计二叉树的叶结点个数
//    return 0;
//}