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
////������ֵ
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
////����Ԫ��
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
//    int ls;
//    cin >> ls; //����Ҫ���ҵĳɼ� 
//    //�����Ա��в��ң�����Ԫ����ţ����Ҳ�������0 
//    int loc = LocateElem(Lscore, ls);
//    if (loc == 0) cout << "Not found!" << endl;
//    else cout << "Loc:" << loc << endl;
//
//    return 0;
//}
