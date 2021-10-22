//#include<iostream>
//using namespace std;
//#define MAX 5
////车牌车位
//typedef struct
//{
//	int wei;
//	char pai[7];
//	
//}carMessage;
//typedef struct
//{
//	carMessage Stack[MAX];//每一辆车
//	//int top;	//数组元素
//}De;
//
////初始化栈
//void InitStack(De& mystack)
//{
//	//mystack.top = 0;
//
//}
//
////为栈添加车
//void addCar(De& mystack)
//{
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "输入第"<<i+1<<"辆车(车位   车牌)" << endl;
// 		cin >> mystack.Stack[i].wei >> mystack.Stack[i].pai;
//	}
//}
//
//
////展示
//void showStack(De& mystack)
//{
//	for (int i = 0; i < MAX; i++)
//	{
//		
//		cout << "第" << i + 1 << "车位为" << mystack.Stack[i].wei << "车牌是"<< mystack.Stack[i].pai<<endl;
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