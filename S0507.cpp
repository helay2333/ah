#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<string>
using namespace std;
typedef struct
{
    int weight;
    int parent, left, right;
}Huffman, * HuffmanTree;
typedef char** HuffmanCode;
void Select(HuffmanTree HT, int len, int& s1, int& s2)
{
    int i, min1 = 99999999999, min2 = 99999999999;
    for (i = 1; i <= len; i++)
    {
        if (HT[i].weight < min1 && HT[i].parent == 0)
        {
            min1 = HT[i].weight;
            s1 = i;
        }
    }
    int temp = HT[s1].weight;
    HT[s1].weight = 99999999999;
    for (i = 1; i <= len; i++)
    {
        if (HT[i].weight < min2 && HT[i].parent == 0)
        {
            min2 = HT[i].weight;
            s2 = i;
        }
    }
    HT[s1].weight = temp;
}


void CreateHuffmanTree(HuffmanTree& T, int n)
{
    int m = 0;
    if (n <= 1) return;
    m = 2 * n - 1;
    int s1 = 0;
    int s2 = 0;
    T = new Huffman[m + 1];
    int i = 0;
    for (i = 1; i <= m; i++)
    {
        T[i].parent = T[i].left = T[i].right = 0;
    }
    for (i = 1; i <= n; i++)
    {
        cin >> T[i].weight;
    }
    for (i = n + 1; i <= m; i++)
    {
        Select(T, i - 1, s1, s2);
        T[s1].parent = i;
        T[s2].parent = i;
        T[i].left = s1;
        T[i].right = s2;
        T[i].weight = T[s1].weight + T[s2].weight;
    }
}
void CreatHuffmanCode(HuffmanTree& T, HuffmanCode& HC, int n)
{
    int i = 0;
    char* code;
    int start = 0;
    int c = 0;
    int f = 0;
    HC = new char* [n + 1];//±àÂë´¢´æ
    code = new char[n];
    code[n - 1] = '\0';
    for (i = 1; i <= n; i++)
    {
        start = n - 1;
        c = i;
        f = T[i].parent;
        while (f!=0)
        {
            --start;
            if (T[f].left == c) code[start] = '0';
            else code[start] = '1';
            c = f;
            f = T[c].parent;
        }
        HC[i] = new char[n - start];
        strcpy(HC[i], &code[start]);
    }
}
int main()
{
    HuffmanTree T;
    HuffmanCode HC;
    int n;
    cin >> n;
    CreateHuffmanTree(T, n); //´´½¨¹ş·òÂüÊ÷ 
    CreatHuffmanCode(T, HC, n); //Éè¼Æ¹ş·òÂü±àÂë 
    for (int i = 1; i <= n; i++)
    {
        cout << T[i].weight << "-->" << HC[i] << endl; //Êä³ö¹ş·òÂü±àÂë 
    }

    return 0;
}