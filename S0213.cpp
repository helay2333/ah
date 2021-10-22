//#include<iostream>
//using namespace std;
//typedef int ELemType;
//#define MAXSIZE 100
//typedef struct Sqlist
//{
//    ELemType* elem;
//    int length;
//}Sqlist;
//
//void InitList(Sqlist& a)
//{
//    a.elem = new ELemType[MAXSIZE];
//    a.length = 0;
//}
//void CreateList(Sqlist& a,int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a.elem[i];
//        a.length++;
//    }
//}
//void Show(Sqlist& a)
//{
//    for (int i = 0; i < a.length; i++)
//    {
//        cout << a.elem[i];
//        cout << endl;
//    }
//    
//}
//void MergeList(Sqlist& a, Sqlist b)
//{
//    int j = 0;
//    for (int i = 0; i < b.length; i++)
//    {
//        for ( j = 0; j < a.length; j++)
//        {
//            if (b.elem[i] == a.elem[j])
//            {
//                break;
//            }
//        }
//        if (b.elem[i] != a.elem[j]) {
//            a.elem[a.length] = b.elem[i];
//            a.length++;
//        }
//              
//    }
//}
//int main()
//{
//    //线性表的的初始化、插入、取值
//    Sqlist La, Lb; //用来存储学生《数据结构》成绩
//    InitList(La), InitList(Lb); //初始化线性表 
//    CreateList(La, 3); //创建线性表 
//    cout << "Show La:" << endl;
//    Show(La); //遍历线性表 
//    CreateList(Lb, 4);
//    cout << "Show Lb:" << endl;
//    Show(Lb);
//    MergeList(La, Lb); //将两个线性表元素合并到La
//    cout << "After Merging:" << endl;
//    Show(La);
//
//    return 0;
//}
