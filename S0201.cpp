//#include<iostream>
//using namespace std;
//#include<iomanip>
//typedef int ELemType;
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -2
//#define MAXSIZE 100
//
//typedef struct
//{
//	ELemType *elem;//存储空间的基地址
//	int length;	
//}Sqlist;
////初始化线性表
//int InitList(Sqlist& Lscore)
//{
//	Lscore.elem = new ELemType[MAXSIZE];
//	if (!Lscore.elem) exit(OVERFLOW);
//	Lscore.length = 0;
//	return OK;
//}
////获取线性表中的数据
//void GetElem(Sqlist& Lstore, int i, int &s)
//{
//	s = Lstore.elem[i - 1];
//	
//}
////插入数据到线性表中
//int ListInsert(Sqlist& Lstore,int i ,int score)
//{
//	if (i<1 || i>Lstore.length+1) return ERROR;
//		for (int j = Lstore.length; j >=i; j--)//这里处理甚至避免了length为0的情况
//		{
//			Lstore.elem[j] = Lstore.elem[j - 1];
//
//		}
//		Lstore.elem[i-1] = score;
//		Lstore.length++;
//	
//	return OK;
//}
//int main()
//{
//	Sqlist Lscore;
//	InitList(Lscore);//初始化线性表
//	int i;
//	for (i = 1; i <= 5; i++)
//	{
//		ListInsert(Lscore, i, 80 + i);//插入数据到线性表中
//	}
//	int s1, s2;
//	cin >> s1 >> s2;
//	ListInsert(Lscore, 3, s1);
//	ListInsert(Lscore, 5, s2);
//	int len = Lscore.length;
//	int s;
//	for (i = 1; i <= len; i++)
//	{
//		GetElem(Lscore, i, s);//获取线性表中的数据
//		cout << s << endl;
//	}
//	return 0;
//}