//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//typedef struct 
//{
//	int weight;
//	int parent, lchild, rchild;
//}HTNode, * HuffmanTree;
//
//typedef char** HuffmanCode;
//
//void Select(HuffmanTree HT, int n, int& s1, int& s2)
//{
//	int min = 1000000, tmp = 0;
//	for (int i = 0; i <= n; i++)
//	{
//		if (HT[i].parent == -1)
//		{
//			if (min > HT[i].weight)
//			{
//				min = HT[i].weight;
//				tmp = i;
//			}
//		}
//	}
//	s1 = tmp;
//	min = 100000;
//	tmp = 0;
//	for (int j = 0; j <= n; j++)
//	{
//		if ((HT[j].parent == -1) && (j != s1))
//		{
//			if (min > HT[j].weight) 
//			{
//				min = HT[j].weight;
//				tmp = j;
//			}
//		}
//	}
//	s2 = tmp;
//}
//
//void CreatHuffmanTree(HuffmanTree& HT, int n)
//{
//	int m;
//	int s1 = 1, s2 = 2;
//	if (n <= 1)return;
//	m = 2 * n - 1;
//	HT = new HTNode[m + 1];
//	for (int i = 1; i <= m; ++i)
//	{
//		HT[i].parent = 0;
//		HT[i].lchild = 0;
//		HT[i].rchild = 0;
//	}
//	for (int i = 1; i <= n; ++i)
//		cin >> HT[i].weight;
//	for (int i = n + 1; i <= m; ++i)
//	{
//		Select(HT, i - 1, s1, s2);
//		HT[s1].parent = i;
//		HT[s2].parent = i;
//		HT[i].lchild = s1;
//		HT[i].rchild = s2;
//		HT[i].weight = HT[s1].weight + HT[s2].weight;
//	}
//
//}
//
//void CreatHuffmanCode(HuffmanTree& HT, HuffmanCode& HC, int n) {
//	int start, c, f;
//	HC = new char* [n + 1];
//	char* cd = new char[n];
//	cd[n - 1] = '\0';
//	for (int i = 1; i <= n; ++i)
//	{
//		start = n - 1;
//		c = i; f = HT[i].parent;
//		while (f != 0) 
//		{
//			--start;
//			if (HT[f].lchild == c)
//				cd[start] = '0';
//			else 
//				cd[start] = '1';
//			c = f; f = HT[f].parent;
//		}
//		HC[i] = new char[n - start];
//		strcpy(HC[i], &cd[start]);
//	}
//	delete[]cd;
//}
//
//int main()
//{
//	int n;
//	HuffmanTree HT;
//	HuffmanCode HC;
//	cout << "请输入不同字符的个数：" << endl;
//	cin >> n;
//	cout << "请输入字符出现的频率：" << endl;
//	CreatHuffmanTree(HT, n);
//	CreatHuffmanCode(HT, HC, n);
//	for (int i = 1; i <= n; ++i)
//		cout << HT[i].weight << "的编码为：" << HC[i] << endl;
//	return 0;
//}