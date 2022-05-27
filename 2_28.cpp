#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	int f1 = 0;
//	int f2 = 1;
//	int n = 0;
//	cin >> n;
//	int f3 = f2 + f1;
//	int left = 0;
//	int right = 0;
//	while (f3 < n)
//	{
//		f1 = f2;
//		f2 = f3;
//		f3 = f2 + f1;
//		left = f2;
//		right = f3;
//	}
//	int count = 0;
//	if ((n - left) > (right - n))
//	{
//		while (right - n)
//		{
//			right--;
//			count++;
//		}
//	}
//	else
//	{
//		while (n - left)
//		{
//			left++;
//			count++;
//		}
//	}
//	cout << count;
//	return 0;
//}



//We Are Happy.
//We%20Are%20Happy¡£

//int main()
//{
//	 char arr[100] = "  ";
//	//const char* arr = "We Are Happy";
//	char* p = arr;
//	char *s= (char*)calloc(100,sizeof(char));
//	if (s == NULL)
//	{
//		return 0;
//	}
//	char* q = s;
//	while (*p != '\0')
//	{
//		if (*p == ' ')
//		{
//			strncat(s,"%20",3);
//			int i = 3;
//			while (i--)
//			{
//				q++;
//			}
//			p++;
//		}
//		else
//		{
//			*q = *p;
//			q++;
//			p++;
//		}
//	}
//	*q = '\0';
//	strcpy(arr, s);
//	free(s);
//	s = NULL;
//	printf("%s\n", arr);
//	return 0;
//}