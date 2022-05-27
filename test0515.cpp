﻿//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//#include<cstring>
//#include<math.h>
//#define NoEdge -1
//int n;//定义图的顶点个数
//int a[101][101];//定义图的邻接矩阵
//int x[101];//定义当前解
//int bestx[101];//定义当前最优解
//int bestc;//定义当前当前值
//int cc;//定义当前路径长度，形成环的时候与bestc比较看能不能更新bestc
//void getmincost(int i)
//{
//    //如果访问到n个节点,要判断是否形成回路
//    //如果当前值优于最优值，更新最优值和最优解
//    if (i == n) {
//        //形成回路的条件就是x[n-1]与x[n]连通，x[n]与x[1]连通
//        if (a[x[n - 1]][x[n]] != NoEdge && a[x[n]][1] != NoEdge) {//说明形成了回路
//            //如果当前值优于最优值，更新最优值和最优解
//            //bestc=NoEdge说明还没有广搜到一条回路，那就先试着求出一个可行解
//            if (cc + a[x[n - 1]][x[n]] + a[x[n]][1] < bestc || bestc == NoEdge) {
//                for (int k = 2; k <= n; k++)
//                    bestx[k] = x[k];
//                bestc = cc + a[x[n - 1]][x[n]] + a[x[n]][1];//更新最优值
//            }
//        }
//        return;
//    }
//    //当前在第i层，还得继续寻找
//    else {
//        for (int j = i; j <= n; j++) {
//            //判断是否可以进入x[j]子树
//            //x[i-1]与x[j]连通使得1-i层连成一条路径且累计花费优于目前最优值
//            //可以进入x[j]子树
//            //这里要做的就是交换x[i]与x[j],进入i+1层
//            //思想类似于n的全排列问题，递归求解
//            //bestc=NoEdge说明还没有广搜到一条回路，那就先试着求出一个可行解
//            //现在的解是x[1],x[2]...x[i]...x[j]...x[n]
//            if (a[x[i - 1]][x[j]] != NoEdge && cc + a[x[i - 1]][x[j]] < bestc || bestc == NoEdge) {
//                //满足条件，可以交换
//                //交换之后，现在的解是x[1],x[2]...x[j]...x[i]...x[n]
//                swap(x[i], x[j]);
//                //现在的解是x[1],x[2]...x[j]...x[i]...x[n]
//                //此时第i个元素是==x[j]
//                //第j个元素是==x[i]
//                cc = cc + a[x[i - 1]][x[i]];//更新路径的长度，进入i+1层
//                getmincost(i + 1);
//                cc = cc - a[x[i - 1]][x[i]];//还原路径的长度，比较x[j+1]子树
//
//                swap(x[i], x[j]);//还原之前的解
//                //现在的解是x[1],x[2]...x[i]...x[j]...x[n]
//            }
//        }
//    }
//    return;
//}
//int main()
//{
//    cin >> n;//输入顶点个数
//    while (n != 0) {
//        int k;
//        memset(a, NoEdge, sizeof(a));
//        cin >> k;//输入边的个数;
//        int p, q, len;
//        //初始化邻接矩阵
//        for (int i = 1; i <= k; i++)
//        {
//            cin >> p >> q >> len;
//            a[p][q] = a[q][p] = len;
//        }
//        //初始化最优解
//        for (int i = 1; i <= n; i++)
//            bestx[i] = x[i] = i;
//        //初始化最优值
//        bestc = NoEdge;
//        cc = 0;//初始化当前值为0
//        getmincost(2);//出发点已知
//        for (int i = 1; i <= n; i++)
//            cout << bestx[i] << " ";
//        cout << endl;
//        cout << bestc << endl;
//        cin >> n;
//    }
//    
//}
//
//
////4 6
////1 2 20
////1 4 4
////1 3 6
////2 3 5
////2 4 10
////3 4 15
#include<iostream>
//using namespace std;
//class HArray
//{
//public:
//    HArray(int a1, int a2, int a3, int a4 = 0)
//    {
//        v[0] = a1; v[1] = a2; v[2] = a3;
//    }
//    int operator[](int bi);
//private:
//    int v[4];
//};
//int HArray::operator[](int bi)
//{
//    if (bi < 0 || bi >= 3)
//    {
//        cout << "Bad subscript!\n";
//        exit(1);
//    }
//    return v[bi] * v[bi];
//}
//int main()
//{
//    int a, b, c;
//    cin >> a >> b >> c;
//    HArray h1(a, b, c);
//    int d = h1[0] + h1[2];
//    cout << d << endl;
//    return 0;
//}
//


#include<iostream>
using namespace std;
class Circle
{
protected:
	double r;
public:
	virtual void show() = 0;
};
class Area : public Circle
{
public:
	Area(double _r) 
	{
		r = _r;
	}
	void show()
	{
		cout << "area=" << 3.14 * r * r << endl;
	}
};
class Perimeter :public Circle
{
public:
	Perimeter(double _r)
	{
		r = _r;
	}
	void show()
	{
		cout << "Perimeter=" << 3.14 * 2 * r << endl;
	}
};
//int main()
//{
//    double r1, r2;
//	cin >> r1 >> r2;
//	Circle * p;
//	Area a(r1);
//	p = &a;
//	p->show();
//	Perimeter per(r2);
//	p = &per;
//	p->show();
//	return 0;
//}