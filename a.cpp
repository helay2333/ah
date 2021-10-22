//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX 5   //车库容量
//typedef struct node {
//	char num[10];
//}CarNode;    //车辆信息 ，包括车牌号
//
//typedef struct NODE {
//	CarNode stack[MAX + 1];
//	int top;
//}SeqStackCar;  //用栈模拟车库
//
//
//typedef struct car
//{
//	CarNode data;
//	struct car* next;
//}QueueNode;
//
//typedef struct Node
//{
//	QueueNode* front;
//	QueueNode* rear;
//}LinkQueueCar;//用队列模拟便道
//
//void InitStack(SeqStackCar* s)//初始化栈
//{
//	s->top = 0;
//}
//int InitQueue(LinkQueueCar* Q)//初始化便道
//{
//	Q->front = (QueueNode*)malloc(sizeof(QueueNode));
//	if (Q->front != NULL)
//	{
//		Q->front->next = NULL;
//		Q->rear = Q->front;
//		return(1);
//	}
//	else
//		return(-1);
//}
//void Display(CarNode p, int number)//打印车场的信息
//{
//	printf("\n>>离开车辆的车牌号:");
//	puts(p.num);
//}
//
//int Arrival(SeqStackCar* Enter, LinkQueueCar* W)//车辆到达
//{
//	CarNode p;
//	QueueNode* t;
//	fflush(stdin);
//	printf("\n  请输入车牌号: ");
//	gets(p.num);
//	if (Enter->top < MAX)
//	{
//		Enter->top++;
//		printf("\n车辆在第%d号车位\n", Enter->top);
//		Enter->stack[Enter->top] = p;
//		return(1);
//	}
//	else//车位已满，车进便道
//	{
//		printf("\n>>车位已满，请在便道等待！\n");
//		t = (QueueNode*)malloc(sizeof(QueueNode));
//		t->data = p;
//		t->next = NULL;
//		W->rear->next = t;
//		W->rear = t;
//		return(1);
//	}
//}
//
//void Leave(SeqStackCar* Enter, LinkQueueCar* W)
//{
//	SeqStackCar Temp;
//	int  number;
//	CarNode p, t;
//	QueueNode* q;
//	InitStack(&Temp);
//	if (Enter->top > 0)
//	{
//		while (1)
//		{
//			printf("请输入离开车的车位号/1--%d/", Enter->top);
//			scanf("%d", &number);
//			if (number >= 1 && number <= Enter->top) break;
//			else  printf("不存在此车位号，请重新输入！\n");
//		}
//
//		while (Enter->top > number)//车辆进入临时栈
//		{
//			printf("进入临时栈\n");
//			Temp.top++;
//			Temp.stack[Temp.top] = Enter->stack[Enter->top];
//			Enter->top--;
//		}
//
//		p = Enter->stack[Enter->top];
//		Enter->top--;
//		while (Temp.top >= 1)//临时栈中的车再回到停车位
//		{
//			printf("出临时栈\n");
//			Enter->top++;
//			Enter->stack[Enter->top] = Temp.stack[Temp.top];
//			Temp.top--;
//		}
//
//		Display(p, number);
//		//判断通道上是否有车及停车位是否已满
//		if ((W->front != W->rear) && Enter->top < MAX)
//		{
//			q = W->front->next;
//			t = q->data;
//			Enter->top++;
//			printf(">>便道车牌号为%s的车进入%d号车位停车\n", t.num, Enter->top);
//			W->front->next = q->next;
//			if (q == W->rear)	W->rear = W->front;
//			Enter->stack[Enter->top] = t;
//			free(q);
//		}
//		else printf(">>便车道里没有车\n");
//	}
//	else printf(">>车位里没有车\n");
//}
//
//void List1(SeqStackCar* S)
//{
//	int i;
//	if (S->top > 0)
//	{
//		printf("\n>>车牌号\t\t\t车位   \n");
//		for (i = 1; i <= S->top; i++)
//		{
//			printf("%-s\t", S->stack[i].num);
//			printf("\t%-d\n", i);
//		}
//	}
//	else printf("\n>>车位里没有车\n");
//}
//
//void List2(LinkQueueCar* W)
//{
//	QueueNode* p;
//	p = W->front->next;
//	if (W->front != W->rear)
//	{
//		printf(">>等待车辆的车牌号为：\n");
//		while (p != NULL)
//		{
//			printf("%s\n", p->data.num);
//			p = p->next;
//		}
//	}
//	else printf("\n>>便道里没有车\n");
//}
//
//void List(SeqStackCar S, LinkQueueCar W)
//{
//	int flag = 1, tag;
//	while (flag)
//	{
//		printf("\n\n请选择: 1 2 3：");
//		printf("\n1.车位信息\n2.便道信息\n3.返回主菜单\n");
//		while (1)
//		{
//			scanf("%d", &tag);
//			if (tag >= 1 || tag <= 3)break;
//			else printf("\n 请选择: 1 2 3\n");
//		}
//		switch (tag)
//		{
//		case 1:List1(&S); break;
//		case 2:List2(&W); break;
//		case 3:flag = 0; break;
//		default:break;
//		}
//	}
//}
//void menu()
//{
//	printf(" ____________________________________________________________\n");
//	printf("|                                                            |\n");
//	printf("|                     欢迎光临停车场                         |\n");
//	printf("|                                                            |\n");
//	printf("|       请输入车库命令，格式如下(命令，车牌号，入库时间)     |\n");
//	printf("|                                                            |\n");
//	printf("|               1-入库 2-离开 3-查看车辆                     |\n");
//	printf("|____________________________________________________________|\n");
//}
//
//int main()
//{
//	SeqStackCar Enter, Temp;
//	LinkQueueCar Wait;
//	int ch;
//	InitStack(&Enter);
//	InitQueue(&Wait);
//	while (1)
//	{
//		while (1)
//		{
//			menu();
//			scanf("%d", &ch);
//			if (ch >= 1 && ch <= 4)break;
//			else printf("\n请选择：1 2 3");
//		}
//		switch (ch)
//		{
//		case 1:Arrival(&Enter, &Wait); break;//车辆停车
//		case 2:Leave(&Enter, &Wait); break;//车辆离开
//		case 3:List(Enter, Wait); break;//列表打印信息
//		default:break;
//		}
//	}
//	return 0;
//}
//
