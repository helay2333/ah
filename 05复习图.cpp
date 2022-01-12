//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#define MAX 27767
//#define MVNum 100
//using namespace std;
////typedef struct
////{
////    char vexs[MVNum];
////    int arcs[MVNum][MVNum];
////    int vexnum, arcnum;
////}AMGraph;
//////创建邻接矩阵
////int Locate(AMGraph& G,char n)
////{
////    int i = 0;
////    while (G.vexs[i] != n)
////    {
////        i++;
////    }
////    return i;
////}
////void CreateUDN(AMGraph& G)
////{
////    cin >> G.vexnum >> G.arcnum;
////    int i = 0;
////    int j = 0;
////    for (i = 0; i < G.vexnum; i++)
////    {
////        cin >> G.vexs[i];
////    }
////    for (i = 0; i < G.vexnum; i++)
////    {
////        for (j = 0; j < G.vexnum; j++)
////        {
////            G.arcs[i][i] = MAX;
////        }
////    }
////    for (i = 0; i < G.arcnum; i++)
////    {
////        char v = ' ';
////        char w = ' ';
////        int x;
////        cin >> v >> w>>x;
////        int a = Locate(G, v);
////        int b = Locate(G, w);
////        G.arcs[a][b] = x;
////        G.arcs[b][a] = x;
////    }
////}
////
//////创建邻接表
//////
//////深度优先遍历
////bool visited[MVNum];
////
////void DFS_AM(AMGraph&G,int n)
////{
////    cout << G.vexs[n];
////    int w = 0;
////    visited[n] = true;
////    for (w = 0; w < G.vexnum; w++)
////    {
////        if ((G.arcs[n][w] != 0) && (!visited[w]))
////        {
////            DFS_AM(G, w);
////        }
////    }
////}
////int main()
////{
////    AMGraph G;
////    CreateUDN(G);  //创建无向图的邻接矩阵 
////    DFS_AM(G, 0); //深度优先搜索遍历图 
////    cout << endl;
////    for (int i = 0; i < G.vexnum; i++) visited[i] = 0;
////    if (G.vexnum > 1) DFS_AM(G, 1);
////    cout << endl;
////    return 0;
////}
//
//
//
//
////typedef struct
////{
////    char vexs[MVNum];
////    int arcs[MVNum][MVNum];
////    int vexnum, arcnum;
////}AMGraph;
//////创建邻接矩阵
////int  Loacte(AMGraph& G, char x)
////{
////    int i = 0;
////    //G.vexs[i] != n
////    while (G.vexs[i] != x)
////    {
////        i++;
////    }
////    return i;
////}
////void CreateUDN(AMGraph& G)
////{
////    cin >> G.vexnum >> G.arcnum;
////    int i = 0;
////    int j = 0;
////    for (i = 0; i < G.vexnum; i++)
////    {
////        cin >> G.vexs[i];
////    }
////    for (i = 0; i < G.vexnum; i++)
////    {
////        for (j = 0; j < G.vexnum; j++)
////        {
////            G.arcs[i][j] = MAX;
////        }
////    }
////    //赋值
////    for (i = 0; i < G.arcnum; i++)
////    {
////        char v = ' ';
////        char w = ' ';
////        int x = 0;
////        cin >> v >> w >> x;
////        int a = Loacte(G, v);
////        int b = Loacte(G, w);
////        G.arcs[a][b] = x;
////        G.arcs[b][a] = x;
////    }
////}
////
//////广度AAAAAAAAAAAAAAAAAAAAAAAA优先遍历
////bool visited[MVNum];
////
////void BFS(AMGraph& G, int n)
////{
////    cout << G.vexs[n];
////    visited[n] = true;
////    int w = 0;
////    for (w = 0; w < G.vexnum; w++)
////    {
////        if ((G.arcs[n][w] != 0) && !(visited[w]))
////        {
////            BFS(G, w);
////        }
////    }
////}
////int main()
////{
////    AMGraph G;
////    CreateUDN(G);  //创建无向图的邻接矩阵 
////    BFS(G, 0); //广度优先搜索遍历图 
////    cout << endl;
////    for (int i = 0; i < G.vexnum; i++) visited[i] = 0;
////    if (G.vexnum > 1) BFS(G, 1);
////    cout << endl;
////    return 0;
////}
//
////typedef struct ArcNode//边节点
////{
////	int adjvex;
////    struct ArcNode* nextarc;
////     string info;
////}ArcNode;
////typedef struct VNode
////{
////    char data;
////    ArcNode* first;
////}VNode,AdjList[MVNum];
////typedef struct
////{
////    AdjList vertices;
////    int vexnum, arcnum;
////}ALGraph;
////int  locate(ALGraph& G, char n)
////{
////    int i = 0;
////    while (G.vertices[i].data != n)
////    {
////        i++;
////    }
////    return i;
////}
////void CreateUDN(ALGraph& G)
////{
////  
////    int i = 0;
////    int k = 0;
////    int j = 0;
////    char v1 ;
////    char v2 ;
////    cin >> G.vexnum >> G.arcnum;
////    for (i = 0; i < G.vexnum; i++)
////    {
////        cin >> G.vertices[i].data;
////        G.vertices[i].first = NULL;
////    }
////
////    for (k = 0; k < G.arcnum; k++)
////    {
////        cin >> v1 >> v2;
////        i = locate(G, v1);
////        j = locate(G, v2);
////        ArcNode*p1;
////        p1 = new ArcNode;
////        p1->adjvex = j;
////        p1->nextarc = G.vertices[i].first;
////        G.vertices[i].first = p1;
////        ArcNode* p2;
////        p2 = new ArcNode;
////        p2->adjvex = i;
////        p2->nextarc = G.vertices[j].first;
////        G.vertices[j].first = p2;
////    }
////}
////bool visited[MAX] = {0};
////void BFS(ALGraph& G,int n)
////{
////    cout << G.vertices[n].data;
////    visited[n] = true;
////    ArcNode* p;
////    p = new ArcNode;
////    p = G.vertices[n].first;
////    
////    while (p != NULL)
////    {
////        int  w = p->adjvex;
////        if (!visited[w])
////        {
////            BFS(G, w);
////        }
////        p = p->nextarc;
////    }
////}
////int main()
////{
////    ALGraph G;
////    CreateUDN(G);  //创建无向图的邻接矩阵 
////    BFS(G, 0); //广度优先搜索遍历图 
////    cout << endl;
////    for (int i = 0; i < G.vexnum; i++) visited[i] = 0;
////    if (G.vexnum > 1) BFS(G, 1);
////    cout << endl;
////    return 0;
////}
//#include<iostream>
//using namespace std;
//
//typedef struct
//{
//    int vexnum, arcnum;
//    int vexs[MVNum][MVNum];
//    char v[MAX];
//}AMGraph;
//int Located(AMGraph& G, char n)
//{
//    int i = 0;
//    while (G.v[i] != n)
//    {
//        i++;
//    }
//    return i;
//}
//void CreateUDN(AMGraph& G)
//{
//    int i = 0;
//    cin >> G.vexnum >> G.arcnum;
//    for (i = 0; i < G.vexnum; i++)
//    {
//        cin >> G.v[i];
//    }
//    for (i = 0; i < G.vexnum; i++)
//    {
//        for (int j = 0; j < G.arcnum; j++)
//        {
//            G.vexs[i][j] = MAX;
//        }
//    }
//    for (int k = 0; k < G.arcnum; k++)
//    {
//        char v, w;
//        int m;
//        cin >> v >> w >> m;
//        int a = Located(G, v);
//        int b = Located(G, w);
//        G.vexs[a][b] = m;
//        G.vexs[b][a] = m;
//    }
//}
//bool visited[MVNum] = {0};
//void DFS_AM(AMGraph& G, int n)
//{
//    int i = 0;
//    cout << G.v[n];
//    visited[n] = true;
//    for (int w = 0; w < G.vexnum; w++)
//    {
//        if ((G.vexs[n][w] != 0) && !(visited[w]))
//        {
//            DFS_AM(G, w);
//        }
//    }
//}
//
//
//
//
//
//
//
//
//
//
//int main()
//{
//    AMGraph G;
//    CreateUDN(G);  //创建无向图的邻接矩阵 
//    DFS_AM(G, 0); //深度优先搜索遍历图 
//    cout << endl;
//    for (int i = 0; i < G.vexnum; i++) visited[i] = 0;
//    if (G.vexnum > 1) DFS_AM(G, 1);
//    cout << endl;
//    return 0;
//}