//#include<iostream>
//using namespace std;
//#define MAXSIZE 100
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -2
//
//typedef int ELemType;
//typedef struct
//{
//	ELemType *elem;//存储空间的基地址
//	int length;	
//}Sqlist;
//void InitList(Sqlist& Lscore)
//{
//    Lscore.elem = new ELemType[MAXSIZE];
//    if (!Lscore.elem) exit(OVERFLOW);
//    Lscore.length = 0;
//}
//void  ListInsert(Sqlist& Lscore, int i, int s)
//{
//    for (int j = Lscore.length; j >= i; j--)
//    {
//        Lscore.elem[j] = Lscore.elem[j - 1];
//    }
//    Lscore.elem[i - 1] = s;
//    Lscore.length++;
//}
//int  ListDelete(Sqlist& Lscore, int loc)
//{
//    int j;
//    if (loc<1 || loc>Lscore.length) return ERROR;
//    for (j = loc; j < Lscore.length; j++)
//    {
//        Lscore.elem[j - 1] = Lscore.elem[j];
//        
//    }
//    Lscore.length--;
//    return OK;
//
//}
//void  GetElem(Sqlist& Lscore, int i, int &ele)
//{
//    ele = Lscore.elem[i - 1];
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
//    int loc;
//    cin >> loc; //输入要删除的位置
//    if (ListDelete(Lscore, loc) == OK) cout << "delete success!" << endl;
//    else cout << "Error!" << endl;
//
//    for (i = 1; i <= Lscore.length; i++) //遍历线性表 
//    {
//        int ele;
//        GetElem(Lscore, i, ele);
//        cout << ele << endl;
//    }
//
//    return 0;
//}