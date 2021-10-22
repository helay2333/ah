//////#include<iostream>
//////using namespace std;
//////#define max 5
////////车
//////typedef struct
//////{
//////	char pai[7];
//////	int wei;
//////}car;
////////车栈
//////typedef struct
//////{
//////	int top;
//////	car stack[max];
//////}carstack;
//////
//////void initstack(carstack& mystack)
//////{
//////	mystack.top = 0;
//////}
//////void stackpop(carstack& mystack)
//////{
//////	while (1)
//////	{
//////		if (mystack.top >= max)
//////		{
//////			cout << "停车场满了" << endl;
//////			break;
//////		}
//////		else {
//////			cin >> mystack.stack[mystack.top].wei;
//////			cin >> mystack.stack[mystack.top].pai;
//////			cout << "进栈元素" << "车位为" << mystack.stack[mystack.top].wei << "车牌为" << mystack.stack[mystack.top].pai << endl;
//////			mystack.top++;
//////			
//////		}
//////	}
//////}
//////void stackpush(carstack& mystack)
//////{
//////	while (mystack.top != 0)
//////	{
//////		mystack.top--;
//////		cout << "出栈元素" << "车位为" << mystack.stack[mystack.top].wei << "车牌为" << mystack.stack[mystack.top].pai << endl;
//////	}
//////}
//////
//////
//////
//////
//////
//////int main()
//////{
//////	carstack mystack;
//////	//初始化车栈
//////	initstack(mystack);
//////	//入栈
//////	stackpop(mystack);
//////	//出栈
//////	stackpush(mystack);
//////	return 0;
//////}
////
//#define _crt_secure_no_warnings 1
//
//#include<iostream>
//using namespace std;
//#include <stdio.h>
//#include <stdlib.h>  
//#define maxstacksize 5 //最多能停5辆车 
//typedef struct
//{
//	char carnum[7];//车牌号
//	int postion;//车位置号
//}datatype;
//typedef struct
//{
//	datatype stack[maxstacksize];
//	int top;
//} seqstack;//栈的信息
//void stackinitiate(seqstack* s)   /* 初始化顺序表 */
//{
//	s->top = 0;
//}
//int stacknotempty(seqstack s)
//{
//	if (s.top <= 0)return 0;
//	else return 1;
//}
//
//int stackpush(seqstack* s, datatype x)  /*入栈*/
//{
//	if (s->top >= maxstacksize)
//	{
//		printf("停车场已满无法进入! \n");
//		return 0;
//	}
//	else
//	{
//		printf("---------------------");
//		printf("---------------------");
//		s->stack[s->top] = x;
//		x.postion = s->top;
//		s->top++;
//		printf("入库车牌号：%-7s", x.carnum);
//		printf("入库车位置：%-4d", x.postion);
//		return 1;
//	}
//}
//
//int stackpop(seqstack* s)  /*出栈*/
//{
//	datatype d;
//	s->top--;
//	d = s->stack[s->top];
//	/*d.postion = s->top;*/
//	printf("\n");
//	printf("出库车牌号：%-7s", d.carnum);
//	printf("出库车位置：%-4d", d.postion);
//
//	return 1;
//}
//void main()
//{
//	seqstack mystack;
//	int i;
//	datatype incar;
//	stackinitiate(&mystack);
//	while (1)
//	{
//		printf("\n");
//		printf("请输入车辆的7位车牌号：");
//		scanf("%s", incar.carnum);
//		if (stackpush(&mystack, incar) == 0) /*入栈10个数据元素*/
//			break;
//	}
//	printf("依次出库的车辆信息如下：\n");
//	while (stacknotempty(mystack))
//	{
//		stackpop(&mystack);//出库
//
//	}
//
//
//
//
//}
