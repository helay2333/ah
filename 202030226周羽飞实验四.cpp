#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;
#include<string.h>
typedef struct 
{
	int quan;
	int parent, lchild, rchild;
}HTNode,*HufmanTree;
typedef char** HufmanCode;
void Select(HufmanTree& HT, int n, int& s1, int& s2)
{
	int i = 1;
	HTNode min1 = HT[i];
	HTNode min2 = HT[i];

	int minq = 1;//s1
	int minq2 = 1;//s2
	for ( i = 2; i <= n; i++)
	{
		if (HT[i].parent ==0 && min1.parent == 0)
		{
			if (HT[i].quan < min1.quan)
			{
				min1 = HT[i];
				minq = i;
			}
		}
		else if (HT[i].parent == 0 && min1.parent != 1)
		{
				min1 = HT[i];
				minq = i;			
		}
		else
		{
			continue;
		}
	}
	for (i = 1; i <=n; i++)
	{
		if (HT[i].parent == 0&& min2.parent == 0)
		{
			/*if (i == minq && i == 1)
			{
				min2 = HT[2];
				continue;
			}*/
			//��ֹ��һ��Ԫ���ظ�
			if (i == minq)
			{
				continue;//��ֹ���ֵ�һ��
			}
			if (HT[i].quan < min2.quan)
			{
				min2 = HT[i];
				minq2 = i;
			}
		}
		else if (HT[i].parent == 0 && min2.parent != 0)
		{
			min2 = HT[i];
			minq2 = i;
		}
		else
		{
			continue;
		}
	}
	//if (s2 == 7) s2 = 8;
	s1 = minq;
	s2 = minq2;
}
void CreateHufmanTree(HufmanTree &HT,int n)
{
	int m = 0,i = 0;
	if (n <= 1) return;
	m = 2 * n - 1;
	int s1, s2;
	HT = new HTNode[m + 1];
	for (i = 1; i <= m; i++)
	{
		HT[i].parent = 0;
		HT[i].lchild = 0;
		HT[i].rchild = 0;
	}
	for (i = 1; i <= n; i++)
	{
		cin >> HT[i].quan;
	}
	/////////////////////////////////////////////////////////ѡ����С����
	for (i = n + 1; i <= m; ++i)
	{
		Select(HT, i-1 , s1, s2);
		HT[s1].parent = i;//��Ԫ��
		HT[s2].parent = i;
		HT[i].lchild = s1;//˫������
		HT[i].rchild = s2;
		HT[i].quan = HT[s1].quan + HT[s2].quan;
	}
}
void Code(HufmanTree HT, HufmanCode& HC, int n)
{
	char* cd;
	int i = 0;
	HC = new char* [n + 1];
	int c, f;
	cd = new char[n];
	cd[n - 1] = '\0';
	int start = 0;
	for (i = 1; i <= n; i++)
	{
		start = n - 1;
		c = i;
		f = HT[i].parent;
		while (f != 0)
		{
			--start;
			if (HT[f].lchild == c) cd[start] = '0';
			else cd[start] = '1';
			c = f;
			f = HT[f].parent;
		}
		HC[i] = new char[n - start];
		strcpy(HC[i], &cd[start]);
	}
	delete cd;
	for (i = 1; i <= n; i++)
	{
		cout << HT[i].quan << "����Ϊ" << *HC[i] << endl;
	}
}
int main()
{	
	HufmanTree T;
	HufmanCode HC;
	int n = 0,i = 0;
	cout << "�����벻ͬ�ַ��ĸ���:" << endl;
	cin >> n;
	cout << "�������ַ����ֵ�Ƶ��" << endl;
	CreateHufmanTree(T, n);//����
	Code(T,HC , n);
	return 0;
}	