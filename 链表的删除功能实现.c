//#include<stdio.h>
//#include<malloc.h>
//#define LEN sizeof(struct Student)
//struct Student
//{
//	int num;
//	float score;
//	struct Student* next;
//};
//struct Student* creat()
//{
//	struct Student* p1 = NULL, * p2 = NULL;
//	int n = 0;
//	p1 = malloc(LEN);
//	
//	struct Student* head=NULL;
//	scanf_s("%d%f", &p1->num, &p1->score);
//	while (p1->num != 0)
//	{
//		if (n == 0)
//		{
//			head = p1;
//		}
//		n++;
//		p2 = p1;
//		p1 = malloc(LEN);
//		scanf_s("%d%f", &p1->num, &p1->score);
//		p2->next = p1;
//	}
//	p2->next = NULL;
//	if (p1 != NULL)
//	{
//		free(p1);
//	}
//	return head;
//};
//void print(struct Student *pt)
//{
//
//	printf("Scores are:\n");
//	for (; pt->next != NULL; pt = pt->next)
//	{
//		printf("num:%d,score:%.2f\n", pt->num, pt->score);
//
//	}
//	if (pt->next == NULL)
//	{
//		printf("num:%d,score:%.2f\n", pt->num, pt->score);
//	}
//
//}
//struct Student * del(struct Student* p)
//{
//	int num;
//	printf("请输入要删除的数据num\n");
//	scanf_s("%d", &num);
//	//没找到
//	int i = 0;
//	struct Student* head = p;
//	struct Student* p1 =p;
//	
//	while (p->next != NULL)
//	{
//		
//		if (p->next == NULL&&p->num!=num)
//		{
//			printf("没找到");
//		}
//		else if(num == p->num){
//			printf("num:%d deleted", num);
//			if (num == head->num)
//			{
//				head = head->next;
//				break;
//			}
//			else if(num == p->num)
//			{
//				p1->next = p->next;
//				break;
//				
//			}
//		}
//		p1 = p;
//		p = p->next;
//	}
//
//	return head;
//
//}
//int main()
//{
//	struct Student* pt;
//	pt = creat();
//	print(pt);
//	pt = del(pt);
//	print(pt);
//	return 0;
//}