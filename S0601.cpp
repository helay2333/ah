//#define _CRT_SECURE_NO_WARNINGS 1
//#define M 100
//#include<iostream>
//using namespace std;
//typedef struct
//{
//    char data[M];
//    int vexnum, arcnum;
//    int AMArray[M][M];//����
//}AMGraph;
//int Find(AMGraph& G, char &v1)
//{
//    int i = 0,j=0;
//    for (i = 0; i < G.vexnum; i++)
//    {
//        if (v1 == G.data[i])
//            return i;
//    }
//    
//
//}
//void CreateUDN(AMGraph& G)
//{
//    int i = 0,j = 0;
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
//
//void DFS_AM(AMGraph& G, int n)
//{
//    int m = -1;
//    visited[n] = true;
//    for (m = 0;m<G.vexnum;m++)
//    {
//       if (G.AMArray[n][m] != 0 && !visited[m])
//        {
//           DFS_AM(G, m);
//      }
//        
//    }
//}
//int main()
//{
//    AMGraph G;
//    CreateUDN(G);  //��������ͼ���ڽӾ��� 
//    DFS_AM(G, 0); //���������������ͼ 
//    cout << endl;
//    for (int i = 0; i < G.vexnum; i++) visited[i] = 0;
//    if (G.vexnum > 1) DFS_AM(G, 1);
//    cout << endl;
//    return 0;
//}