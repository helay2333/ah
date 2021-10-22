//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX 5   //��������
//typedef struct node {
//	char num[10];
//}CarNode;    //������Ϣ ���������ƺ�
//
//typedef struct NODE {
//	CarNode stack[MAX + 1];
//	int top;
//}SeqStackCar;  //��ջģ�⳵��
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
//}LinkQueueCar;//�ö���ģ����
//
//void InitStack(SeqStackCar* s)//��ʼ��ջ
//{
//	s->top = 0;
//}
//int InitQueue(LinkQueueCar* Q)//��ʼ�����
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
//void Display(CarNode p, int number)//��ӡ��������Ϣ
//{
//	printf("\n>>�뿪�����ĳ��ƺ�:");
//	puts(p.num);
//}
//
//int Arrival(SeqStackCar* Enter, LinkQueueCar* W)//��������
//{
//	CarNode p;
//	QueueNode* t;
//	fflush(stdin);
//	printf("\n  �����복�ƺ�: ");
//	gets(p.num);
//	if (Enter->top < MAX)
//	{
//		Enter->top++;
//		printf("\n�����ڵ�%d�ų�λ\n", Enter->top);
//		Enter->stack[Enter->top] = p;
//		return(1);
//	}
//	else//��λ�������������
//	{
//		printf("\n>>��λ���������ڱ���ȴ���\n");
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
//			printf("�������뿪���ĳ�λ��/1--%d/", Enter->top);
//			scanf("%d", &number);
//			if (number >= 1 && number <= Enter->top) break;
//			else  printf("�����ڴ˳�λ�ţ����������룡\n");
//		}
//
//		while (Enter->top > number)//����������ʱջ
//		{
//			printf("������ʱջ\n");
//			Temp.top++;
//			Temp.stack[Temp.top] = Enter->stack[Enter->top];
//			Enter->top--;
//		}
//
//		p = Enter->stack[Enter->top];
//		Enter->top--;
//		while (Temp.top >= 1)//��ʱջ�еĳ��ٻص�ͣ��λ
//		{
//			printf("����ʱջ\n");
//			Enter->top++;
//			Enter->stack[Enter->top] = Temp.stack[Temp.top];
//			Temp.top--;
//		}
//
//		Display(p, number);
//		//�ж�ͨ�����Ƿ��г���ͣ��λ�Ƿ�����
//		if ((W->front != W->rear) && Enter->top < MAX)
//		{
//			q = W->front->next;
//			t = q->data;
//			Enter->top++;
//			printf(">>������ƺ�Ϊ%s�ĳ�����%d�ų�λͣ��\n", t.num, Enter->top);
//			W->front->next = q->next;
//			if (q == W->rear)	W->rear = W->front;
//			Enter->stack[Enter->top] = t;
//			free(q);
//		}
//		else printf(">>�㳵����û�г�\n");
//	}
//	else printf(">>��λ��û�г�\n");
//}
//
//void List1(SeqStackCar* S)
//{
//	int i;
//	if (S->top > 0)
//	{
//		printf("\n>>���ƺ�\t\t\t��λ   \n");
//		for (i = 1; i <= S->top; i++)
//		{
//			printf("%-s\t", S->stack[i].num);
//			printf("\t%-d\n", i);
//		}
//	}
//	else printf("\n>>��λ��û�г�\n");
//}
//
//void List2(LinkQueueCar* W)
//{
//	QueueNode* p;
//	p = W->front->next;
//	if (W->front != W->rear)
//	{
//		printf(">>�ȴ������ĳ��ƺ�Ϊ��\n");
//		while (p != NULL)
//		{
//			printf("%s\n", p->data.num);
//			p = p->next;
//		}
//	}
//	else printf("\n>>�����û�г�\n");
//}
//
//void List(SeqStackCar S, LinkQueueCar W)
//{
//	int flag = 1, tag;
//	while (flag)
//	{
//		printf("\n\n��ѡ��: 1 2 3��");
//		printf("\n1.��λ��Ϣ\n2.�����Ϣ\n3.�������˵�\n");
//		while (1)
//		{
//			scanf("%d", &tag);
//			if (tag >= 1 || tag <= 3)break;
//			else printf("\n ��ѡ��: 1 2 3\n");
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
//	printf("|                     ��ӭ����ͣ����                         |\n");
//	printf("|                                                            |\n");
//	printf("|       �����복�������ʽ����(������ƺţ����ʱ��)     |\n");
//	printf("|                                                            |\n");
//	printf("|               1-��� 2-�뿪 3-�鿴����                     |\n");
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
//			else printf("\n��ѡ��1 2 3");
//		}
//		switch (ch)
//		{
//		case 1:Arrival(&Enter, &Wait); break;//����ͣ��
//		case 2:Leave(&Enter, &Wait); break;//�����뿪
//		case 3:List(Enter, Wait); break;//�б��ӡ��Ϣ
//		default:break;
//		}
//	}
//	return 0;
//}
//
