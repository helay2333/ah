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
//    //���Ա�ĵĳ�ʼ�������롢ȡֵ
//    Sqlist La, Lb; //�����洢ѧ�������ݽṹ���ɼ�
//    InitList(La), InitList(Lb); //��ʼ�����Ա� 
//    CreateList(La, 3); //�������Ա� 
//    cout << "Show La:" << endl;
//    Show(La); //�������Ա� 
//    CreateList(Lb, 4);
//    cout << "Show Lb:" << endl;
//    Show(Lb);
//    MergeList(La, Lb); //���������Ա�Ԫ�غϲ���La
//    cout << "After Merging:" << endl;
//    Show(La);
//
//    return 0;
//}
