//#include<stdio.h>
//#include<malloc.h>
//#define len sizeof(struct student)
//struct student {
//	int num;
//	float score;
//	struct student* next;
//};
//int n;
//struct student* creat()
//{
//	n = 0;
//	struct student* head;
//	struct student* p1, * p2;
//	p1 = p2 = NULL;
//	p1 = p2 = (struct student*)malloc(len);
//	scanf_s("%d%f", &p1->num, &p1->score);
//	head = NULL;
//	while (p1->num != 0)
//	{
//		n++;
//		if (n == 1) head = p1;
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1 = (struct student*)malloc(len);
//		scanf_s("%d%f", &p1->num, &p1->score);
//	}
//	p2->next == NULL;
//	if (p1 != NULL)
//	{
//		free(p1);
//	}
//	return head;
//
//}
//int main()
//{
//	struct student* pt;
//	pt = creat();
//	printf("\nnumber:%d\nscore:%f\n", pt->num, pt->score);
//	return 0;
//}