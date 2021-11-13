////#include <iostream>
////
////using namespace std;
////double f(double x)
////{
////    return 1 / (1 + x * x);
////}
////int main()
////{
////    double a, b, h, s = 0;
////    cin >> a >> b;
////    int n = 10000;
////    h = (b - a) / n;
////    s = (f(a) + f(b)) / 2;
////    for (int i = 1; i < n; i++)
////    {
////        s += f(a + i * h);
////    }
////    cout << s * h << endl;
////    return 0;
////}
//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//typedef struct {
//	int weight;
//	int parent, lchild, rchild;
//}HTNode, * HuffmanTree;
//
//typedef char** HuffmanCode;
//
//void Select(HuffmanTree HT, int n, int& s1, int& s2)
//{
//	HuffmanTree p;
//	int i, j, min;
//	for (i = 1;; i++)//����һ��û��˫�׽ڵ�Ľ�㣬�������λ�ø�s1��p
//	{
//		if (HT[i].parent == 0)
//		{
//			s1 = i;
//			p = HT + i;
//			break;
//		}
//	}
//	min = p->weight;//�Ƚ��������Ȩֵ��Ϊ��Сֵ
//	p++;
//	for (i = s1 + 1; i <= n; i++, p++)//�����ҵ������������һ����㿪ʼѰ��˫�׽ڵ�ҲΪ����ȨֵС�����Ľ�㣬�Ӷ��ҵ�Ŀǰ������Ȩֵ��С�Ľ��
//	{
//		if (p->weight < min && p->parent == 0)
//		{
//			s1 = i;
//			min = p->weight;
//		}
//	}
//	for (j = 1;; j++)
//	{
//		if (HT[j].parent == 0 && j != s1)
//		{
//			s2 = j;
//			p = HT + j;
//			break;
//		}
//	}
//	min = p->weight;
//	p++;
//	for (j = s2 + 1; j <= n; j++, p++)
//	{
//		if (p->weight < min && p->parent == 0 && j != s1)
//		{
//			s2 = j;
//			min = p->weight;
//		}
//	}
//}
//
//void CreatHuffmanTree(HuffmanTree& HT, int n) {
//	int m;
//	int s1 = 1, s2 = 2;
//	if (n <= 1)return;
//	m = 2 * n - 1;
//	HT = new HTNode[m + 1];
//	for (int i = 1; i <= m; ++i) {
//		HT[i].parent = 0; HT[i].lchild = 0; HT[i].rchild = 0;
//	}
//	for (int i = 1; i <= n; ++i)
//		cin >> HT[i].weight;
//	for (int i = n + 1; i <= m; ++i) {
//		Select(HT, i - 1, s1, s2);
//		HT[s1].parent = i; HT[s2].parent = i;
//		HT[i].lchild = s1; HT[i].rchild = s2;
//		HT[i].weight = HT[s1].weight + HT[s2].weight;
//	}
//}
//
//void CreatHuffmanCode(HuffmanTree& HT, HuffmanCode& HC, int n) {
//	int start, c, f;
//	HC = new char* [n + 1];
//	char* cd = new char[n];
//	cd[n - 1] = '\0';
//	for (int i = 1; i <= n; ++i) {
//		start = n - 1;
//		c = i; f = HT[i].parent;
//		while (f != 0) {
//			--start;
//			if (HT[f].lchild == c)cd[start] = '0';
//			else cd[start] = '1';
//			c = f; f = HT[f].parent;
//		}
//		HC[i] = new char[n - start];
//		strcpy(HC[i], &cd[start]);
//	}
//	delete[]cd;
//}
//
//int main() {
//	int n;
//	HuffmanTree HT;
//	HuffmanCode HC;
//	cout << "�����벻ͬ�ַ��ĸ�����" << endl;
//	cin >> n;
//	cout << "�������ַ����ֵ�Ƶ�ʣ�" << endl;
//	CreatHuffmanTree(HT, n);
//	CreatHuffmanCode(HT, HC, n);
//	for (int i = 1; i <= n; ++i)
//		cout << HT[i].weight << "�ı���Ϊ��" << HC[i] << endl;
//	return 0;
//}
