//#include<iostream>
//using namespace std;
//#define MAXSIZE 100
//#define OVERFLOW -2
//typedef int ELemType;
//typedef struct
//{
//    ELemType* elem;
//    int length;
//}Sqlist;
//void InitList(Sqlist& Lscore)
//{
//    Lscore.elem = new ELemType[MAXSIZE];
//    if (!Lscore.elem) exit(OVERFLOW);
//    Lscore.length = 0;
//}
////插入数值
//void ListInsert(Sqlist& Lscore, int i, int& s)
//{
//    int j;
//    for ( j = Lscore.length; j >= i; j++)
//    {
//        Lscore.elem[j] = Lscore.elem[j - 1];
//    }
//    Lscore.elem[i-1] = s;
//    Lscore.length++;
//}
////查找元素
//int LocateElem(Sqlist& Lscore,int ls)
//{
//    int i;
//    for ( i = 0; i < Lscore.length; i++)
//    {
//        if (Lscore.elem[i] == ls)
//        {
//            return i + 1;
//        }
//    }
//    if (i == Lscore.length) return 0;
//}
//int main()
//{
//    //线性表的的初始化、插入、取值
//    Sqlist Lscore; //用来存储学生《数据结构》成绩
//    InitList(Lscore); //初始化线性表 
//    int i, s;
//    for (i = 1; i <= 3; i++) //输入3个学生成绩，添加到线性表中 
//    {
//        cin >> s;
//        ListInsert(Lscore, i, s); //线性表中添加数据 
//    }
//
//    int ls;
//    cin >> ls; //输入要查找的成绩 
//    //在线性表中查找，返回元素序号，若找不到返回0 
//    int loc = LocateElem(Lscore, ls);
//    if (loc == 0) cout << "Not found!" << endl;
//    else cout << "Loc:" << loc << endl;
//
//    return 0;
//}
