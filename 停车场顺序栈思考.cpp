//////#include<iostream>
//////using namespace std;
//////#define max 5
////////��
//////typedef struct
//////{
//////	char pai[7];
//////	int wei;
//////}car;
////////��ջ
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
//////			cout << "ͣ��������" << endl;
//////			break;
//////		}
//////		else {
//////			cin >> mystack.stack[mystack.top].wei;
//////			cin >> mystack.stack[mystack.top].pai;
//////			cout << "��ջԪ��" << "��λΪ" << mystack.stack[mystack.top].wei << "����Ϊ" << mystack.stack[mystack.top].pai << endl;
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
//////		cout << "��ջԪ��" << "��λΪ" << mystack.stack[mystack.top].wei << "����Ϊ" << mystack.stack[mystack.top].pai << endl;
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
//////	//��ʼ����ջ
//////	initstack(mystack);
//////	//��ջ
//////	stackpop(mystack);
//////	//��ջ
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
//#define maxstacksize 5 //�����ͣ5���� 
//typedef struct
//{
//	char carnum[7];//���ƺ�
//	int postion;//��λ�ú�
//}datatype;
//typedef struct
//{
//	datatype stack[maxstacksize];
//	int top;
//} seqstack;//ջ����Ϣ
//void stackinitiate(seqstack* s)   /* ��ʼ��˳��� */
//{
//	s->top = 0;
//}
//int stacknotempty(seqstack s)
//{
//	if (s.top <= 0)return 0;
//	else return 1;
//}
//
//int stackpush(seqstack* s, datatype x)  /*��ջ*/
//{
//	if (s->top >= maxstacksize)
//	{
//		printf("ͣ���������޷�����! \n");
//		return 0;
//	}
//	else
//	{
//		printf("---------------------");
//		printf("---------------------");
//		s->stack[s->top] = x;
//		x.postion = s->top;
//		s->top++;
//		printf("��⳵�ƺţ�%-7s", x.carnum);
//		printf("��⳵λ�ã�%-4d", x.postion);
//		return 1;
//	}
//}
//
//int stackpop(seqstack* s)  /*��ջ*/
//{
//	datatype d;
//	s->top--;
//	d = s->stack[s->top];
//	/*d.postion = s->top;*/
//	printf("\n");
//	printf("���⳵�ƺţ�%-7s", d.carnum);
//	printf("���⳵λ�ã�%-4d", d.postion);
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
//		printf("�����복����7λ���ƺţ�");
//		scanf("%s", incar.carnum);
//		if (stackpush(&mystack, incar) == 0) /*��ջ10������Ԫ��*/
//			break;
//	}
//	printf("���γ���ĳ�����Ϣ���£�\n");
//	while (stacknotempty(mystack))
//	{
//		stackpop(&mystack);//����
//
//	}
//
//
//
//
//}
