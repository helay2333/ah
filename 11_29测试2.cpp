//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#define M 10
//using namespace std;
//
//typedef struct
//{
//    char data[M];
//    int vexnum, arcnum;
//    int AMArray[M][M];//����
//}AMGraph;
//int  Find(AMGraph& G, char v1)
//{
//     int i = 0,j=0;
//    for (i = 0; i < G.vexnum; i++)
//    {
//        if (v1 == G.data[i])
//            return i;
//    }
//    return -1;
//}
//void CreateUDN(AMGraph &G)
//{
//	    int i = 0,j = 0;
//    cin >> G.vexnum>>G.arcnum;
//    for (i = 0; i < G.vexnum; i++)
//    {
//        cin >> G.data[i];
//    }
//    //��ʼ������
//    for (i = 0; i < G.vexnum; i++)
//    {
//        for (j = 0; j < G.arcnum; j++)
//            G.AMArray[i][j] = 0;
//    }
//    //����ͼ��
//    char v1, v2;
//    int b;
//    for (i = 0; i < G.arcnum; i++)
//    {
//        cin >> v1 >> v2 >> b;
//        i = Find(G, v1);//��������
//        j = Find(G,v2);
//        G.AMArray[i][j] = b;
//        G.AMArray[j][i] = b;
//    }
//    
//}
//bool visited[M];
//void DFS_AM(AMGraph G, int v) {
//    int w = 0;
//    
//    cout << v;
//    visited[v] = true;  	
//    for (w = 0; w < G.vexnum; w++)  	
//        if ((G.AMArray[v][w] != 0) && (!visited[w]))
//            DFS_AM(G, w);
//    
//}
//
//
//
//int main()
//{
//	AMGraph G;
//	CreateUDN(G);  //��������ͼ���ڽӾ��� 
//	DFS_AM(G, 0); //���������������ͼ 
//	cout << endl;
//	for (int i = 0; i < G.vexnum; i++) visited[i] = 0;
//	if (G.vexnum > 1) DFS_AM(G, 1);
//	cout << endl;
//	return 0;
//}