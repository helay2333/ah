//
//#include<iostream>
//using namespace std;
//typedef struct
//{
//    int weight;
//    int parent, left, right;
//}Huffman, *HuffmanTree;
//void Select(HuffmanTree& T, int n, int& s1, int& s2)
//{
//    int i = 0;
//    s1 = 1;
//    s2 = 1;
//    Huffman min1 = T[s1];
//    Huffman min2 = T[s2];
//    int t = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (min1.parent != 0 && T[i].parent == 0)
//        {
//            min1 = T[i];
//            s1 = i;
//        }
//        if (T[i].weight < min1.weight&&T[i].parent==0&&min1.parent==0)
//        {
//            min1 = T[i];
//            s1 = i;
//        }
//    }
//    for (i = 1; i <= n; i++)
//    {
//        if (i == s1)
//        {
//          /*  if (s2 == s1)
//            {
//                const int t = s2 + 1;
//                min2 = T[s2];
//                s2 = t;
//            }*/
//            continue;
//        }
//        //if (min2.parent != 0 && T[i].parent == 0)
//        if (min2.parent != 0&&T[i].parent == 0)
//        {            
//            min2 = T[i];
//            s2 = i;
//        }
//        if (T[i].weight < min2.weight && T[i].parent == 0&& min2.parent == 0)
//        {
//            //if (i== s1) continue;
//            min2 = T[i];
//            s2 = i;
//        }
//    }
//}
//void CreateHuffmanTree(HuffmanTree &T,int n)
//{
//    int m = 0;
// /*   if (n <= 1) return;*/
//    m = 2 * n - 1;
//    int s1 = 0;
//    int s2 = 0;
//    T = new Huffman[m+1];
//    int i = 0;
//     for (i = 1; i <= m; i++)
//    {
//        T[i].parent = T[i].left = T[i].right = 0;
//    }
//    for (i = 1; i <= n; i++)
//    {
//        cin >> T[i].weight;
//    }
//    for (i = n + 1; i <= m; i++)
//    {
//        Select(T, i - 1, s1, s2);
//        T[s1].parent = i;
//        T[s2].parent = i;
//        T[i].left = s1;
//        T[i].right = s2;
//        T[i].weight = T[s1].weight + T[s2].weight;
//        cout << "HT[" << s1 << "]=" << T[s1].weight << ",HT[" << s2 << "]=" << T[s2].weight << endl;
//    }
//}
//int main()
//{
//    HuffmanTree T;
//    int n;
//    cin >> n;
//    CreateHuffmanTree(T, n); //创建哈夫曼树 
//    cout << T[2 * n - 1].weight << endl; //哈夫曼树根结点权值 
//
//    return 0;
//}










//80fen 

//#include<iostream>
//using namespace std;
//typedef struct
//{
//    int weight;
//    int parent, left, right;
//}Huffman, * HuffmanTree;
//void Select(HuffmanTree& T, int n, int& s1, int& s2)
//{
//    int i = 0;
//    s1 = 1;
//    s2 = 1;
//    Huffman min1 = T[s1];
//    Huffman min2 = T[s2];
//    int t = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (min1.parent != 0 && T[i].parent == 0)
//        {
//            min1 = T[i];
//            s1 = i;
//        }
//        if (T[i].weight < min1.weight && T[i].parent == 0 && min1.parent == 0)
//        {
//            min1 = T[i];
//            s1 = i;
//        }
//    }
//    for (i = 1; i <= n; i++)
//    {
//        if (i == s1)
//        {
//            if (s2 == 1)
//            {
//                const int t = i + 1;
//                min2 = T[t];
//                s2 = t;
//            }
//            continue;
//        }
//        //if (min2.parent != 0 && T[i].parent == 0)
//        if (min2.parent != 0 && T[i].parent == 0)
//        {
//            min2 = T[i];
//            s2 = i;
//        }
//        if (T[i].weight < min2.weight && T[i].parent == 0 && min2.parent == 0)
//        {
//            //if (i== s1) continue;
//            min2 = T[i];
//            s2 = i;
//        }
//    }
//}
//void CreateHuffmanTree(HuffmanTree& T, int n)
//{
//    int m = 0;
//    if (n <= 1) return;
//    m = 2 * n - 1;
//    int s1 = 0;
//    int s2 = 0;
//    T = new Huffman[m + 1];
//    int i = 0;
//    for (i = 1; i <= m; i++)
//    {
//        T[i].parent = T[i].left = T[i].right = 0;
//    }
//    for (i = 1; i <= n; i++)
//    {
//        cin >> T[i].weight;
//    }
//    for (i = n + 1; i <= m; i++)
//    {
//        Select(T, i - 1, s1, s2);
//        T[s1].parent = i;
//        T[s2].parent = i;
//        T[i].left = s1;
//        T[i].right = s2;
//        T[i].weight = T[s1].weight + T[s2].weight;
//        cout << "HT[" << s1 << "]=" << T[s1].weight << ",HT[" << s2 << "]=" << T[s2].weight << endl;
//
//    }
//
//
//
//}

