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
//	ELemType *elem;//�洢�ռ�Ļ���ַ
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
//    //���Ա�ĵĳ�ʼ�������롢ȡֵ
//    Sqlist Lscore; //�����洢ѧ�������ݽṹ���ɼ�
//    InitList(Lscore); //��ʼ�����Ա� 
//    int i, s;
//    for (i = 1; i <= 3; i++) //����3��ѧ���ɼ�����ӵ����Ա��� 
//    {
//        cin >> s;
//        ListInsert(Lscore, i, s); //���Ա���������� 
//    }
//
//    int loc;
//    cin >> loc; //����Ҫɾ����λ��
//    if (ListDelete(Lscore, loc) == OK) cout << "delete success!" << endl;
//    else cout << "Error!" << endl;
//
//    for (i = 1; i <= Lscore.length; i++) //�������Ա� 
//    {
//        int ele;
//        GetElem(Lscore, i, ele);
//        cout << ele << endl;
//    }
//
//    return 0;
//}