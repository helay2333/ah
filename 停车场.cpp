//#include<iostream>
//using namespace std;
//#define MAX 5
////���Ƴ�λ
//typedef struct
//{
//	int wei;
//	char pai[7];
//	
//}carMessage;
//typedef struct
//{
//	carMessage Stack[MAX];//ÿһ����
//	//int top;	//����Ԫ��
//}De;
//
////��ʼ��ջ
//void InitStack(De& mystack)
//{
//	//mystack.top = 0;
//
//}
//
////Ϊջ��ӳ�
//void addCar(De& mystack)
//{
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "�����"<<i+1<<"����(��λ   ����)" << endl;
// 		cin >> mystack.Stack[i].wei >> mystack.Stack[i].pai;
//	}
//}
//
//
////չʾ
//void showStack(De& mystack)
//{
//	for (int i = 0; i < MAX; i++)
//	{
//		
//		cout << "��" << i + 1 << "��λΪ" << mystack.Stack[i].wei << "������"<< mystack.Stack[i].pai<<endl;
//		
//	}
//}
//
//
//
//
//int main()
//{
//	De MyStack;
//	InitStack(MyStack);
//	addCar(MyStack);
//	showStack(MyStack);
//
//
//
//	return 0;
//}