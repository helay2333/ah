//#include<stdio.h>
//struct Student
//{
//	int num;
//	float score;
//	struct Student* next;
//};
//int main()
//{
//	struct Student a, b, c;
//	struct Student* p;
//	a.num = 10101;
//	a.score = 89.5;
//	b.num = 10103; b.score = 90;
//	c.num = 10107;
//	c.score = 85;
//	p = &a;
//	a.next = &b;
//	b.next = &c;
//	c.next = NULL;
//	for (p = &a; p->next != NULL; p = p->next)
//	{
//		printf("%dµÄ³É¼¨Îª%.2f\n", p->num, p->score);
//	}
//
//
//
//	return 0;
//}