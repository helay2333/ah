//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#define MAX 100
//using namespace std;
//typedef struct
//{
//	char V[MAX];
//	int Arr[MAX][MAX];
//	int dian, bian;
//}ANode;
// int Search(char v, ANode& G)
//{
//	 int i = 0;
//	 for (i = 0; i < G.dian; i++)
//	 {
//		 if (v == G.V[i])
//		 {
//			 return i;
//		 }
//	 }
//	 return -1;
//}
//void CreatTu(ANode &G)
//{
//	int i = 0,j = 0;
//	cin >> G.dian >> G.bian;
//	for (i = 0; i < G.dian; i++)
//	{
//		cin >> G.V[i];//顶点信息
//	}
//	for (i = 0; i < G.dian; i++)
//	{
//		for (j = 0; j < G.dian; j++)
//		{
//			G.Arr[i][j] = MAX;//初始化邻接矩阵
//		}
//	}
//	for (i = 0; i < G.bian; i++)
//	{
//		char v1, v2;
//		int b = 0;
//		cin >> v1 >> v2>>b;
//		i = Search(v1, G);
//		j = Search(v2, G);
//		G.Arr[i][j] = b;
//	}
//}
//int main()
//{
//	ANode G;
//	CreatTu(G);
//	cout << G.Arr[2][3];
//
//	return 0;
//}