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
//	for (i = 1;; i++)//先找一个没有双亲节点的结点，这个结点的位置给s1和p
//	{
//		if (HT[i].parent == 0)
//		{
//			s1 = i;
//			p = HT + i;
//			break;
//		}
//	}
//	min = p->weight;//先将这个结点的权值记为最小值
//	p++;
//	for (i = s1 + 1; i <= n; i++, p++)//从以找到的这个结点的下一个结点开始寻找双亲节点也为零且权值小于它的结点，从而找到目前序列中权值最小的结点
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
//	cout << "请输入不同字符的个数：" << endl;
//	cin >> n;
//	cout << "请输入字符出现的频率：" << endl;
//	CreatHuffmanTree(HT, n);
//	CreatHuffmanCode(HT, HC, n);
//	for (int i = 1; i <= n; ++i)
//		cout << HT[i].weight << "的编码为：" << HC[i] << endl;
//	return 0;
//}

//嘉伟哥
//#define _CRT_SECURE_NO_WARNINGS 1
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
//	for (i = 1;; i++)//先找一个没有双亲节点的结点，这个结点的位置给s1和p
//	{
//		if (HT[i].parent == 0)
//		{
//			s1 = i;
//			p = HT + i;
//			break;
//		}
//	}
//	min = p->weight;//先将这个结点的权值记为最小值
//	p++;
//	for (i = s1 + 1; i <= n; i++, p++)//从以找到的这个结点的下一个结点开始寻找双亲节点也为零且权值小于它的结点，
//		//从而找到目前序列中权值最小的结点
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
//
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
//	cout << "请输入不同字符的个数：" << endl;
//	cin >> n;
//	cout << "请输入字符出现的频率：" << endl;
//	CreatHuffmanTree(HT, n);
//	CreatHuffmanCode(HT, HC, n);
//	for (int i = 1; i <= n; ++i)
//		cout << HT[i].weight << "的编码为：" << HC[i] << endl;
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//#define maxint 32767
//#define  MVNum 100
//
//bool visited[MVNum];
//
//typedef struct {
//	char vexs[MVNum];//顶点表 
//	int arcs[MVNum][MVNum];//邻接矩阵
//	int vexnum, arcnum;//图的当前点数和边数 
//}AMGraph;
//
//int Locate(AMGraph& G, char v)
//{
//	int i = 0;
//	while (G.vexs[i] != v && i <= G.vexnum)
//		i++;
//	return i;
//}
//
//int CreateUDN(AMGraph& G)
//{
//	cin >> G.vexnum >> G.arcnum;
//	for (int i = 0; i < G.vexnum; i++)
//	{
//		cin >> G.vexs[i];
//	}
//	for (int i = 0; i < G.vexnum; i++)
//		for (int j = 0; j < G.vexnum; j++)
//			G.arcs[i][j] = maxint;
//	for (int k = 0; k < G.arcnum; k++)
//	{
//		char v1, v2;
//		int w;
//		cin >> v1 >> v2 >> w;
//		int i = Locate(G, v1);
//		int j = Locate(G, v2);
//		G.arcs[i][j] = w;
//		G.arcs[j][i] = G.arcs[j][i];
//	}
//	return 1;
//}
//
//void DFS_AM(AMGraph& G, int v)
//{
//	cout << G.vexs[v];
//	visited[v] = true;
//	for (int w = 0; w < G.vexnum; w++)
//		if ((G.arcs[v][w] != 0) && (!visited[w]))
//			DFS_AM(G, w);
//}
//
//
//int main()
//{
//	AMGraph G;
//	CreateUDN(G);  //创建无向图的邻接矩阵 
//	DFS_AM(G, 0); //深度优先搜索遍历图 
//	cout << endl;
//	for (int i = 0; i < G.vexnum; i++) visited[i] = 0;
//	if (G.vexnum > 1) DFS_AM(G, 1);
//	cout << endl;
//	return 0;
//}