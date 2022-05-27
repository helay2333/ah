#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//int main()
//{
//	string s1;
//	string s2("hwllo bit");
//	string s3(s2);
//	string s4 = "hello bit";//string s2("hwllo bit");
//	string s5(s4, 0, 3);
//	cout << s5 << endl;
//	return 0;
//}

//int main()
//{
//	string s1;
//	string s2("hello world");
//	//三种遍历方式
//	//1、下标+[]
//	for (size_t i = 0; i < s2.size(); ++i)
//	{
//		//s2.operator[](i)
//		cout << s2[i] << " ";
//	}
//	cout << endl;
//	cout << endl;
//	//cout << s2.length() << endl;
//	//cout << s2.at(3) << endl;
//	//2.迭代器,迭代器一定是[ , )这样的区间
//	//[begin, end)
//	string::iterator it = s2.begin();
//	while (it != s2.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	//反向迭代器
//	string s3("123457");
//	string::reverse_iterator rit = s3.rbegin();
//	while (rit != s3.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//	string s4("1234567");
//	string::iterator it11 = s4.begin();
//	while (it11 != s4.end())
//	{
//		*it11 += 1;
//		++it11;
//	}
//	it11 = s4.begin();
//	while (it11 != s4.end())
//	{
//		cout << *it11 << " ";
//		++it11;
//	}
//	cout << endl;
//	cout << endl;
//	const string s5("abcdef");
//	string::const_iterator its = s5.begin();
//	while (its != s5.end())
//	{
//		cout << *its << " ";
//		its++;
//	}
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	//3.C++提供 范围for
//	//依次取容器中的数据，赋值给e，自动判断结束
//	for (auto e : s3)
//	{
//		cout << e << " ";
//	}
//
//
//
//
//
//	return 0;
//}


//int main()
//{
//	string s1;
//	s1.push_back('h');
//	s1.push_back('e');
//	s1.push_back('w');
//	cout << s1 << endl;
//	s1.append("heheheeh");
//	cout << s1 << endl;
//	string s2 = "aaa";
//	s1.append(s2);
//	cout << s1 << endl;
//	//实际中最喜欢使用+=
//	string s3;
//	s3 += "aaa";
//	cout << s3 << endl;
//	s3.insert(0, "w");
//	s3.insert(3, "e");
//	cout << s3 << endl;
//	s3.erase(0, 1);
//	cout << s3 << endl;
//	return 0;
//}
//int main()
//{
//	string s2("hello");
//	cout << s2 << endl;//调用operator<<(cout, s2)
//	cout << s2.c_str() << endl;//调用内置类型operator<<(cout,const char *)
//
//	s2.resize(20);
//	s2 += "!!!";
//	cout << s2 << endl;//调用operator<<(cout, s2)
//	cout << s2.c_str() << endl;//调用内置类型operator<<(cout,con
//
//	string name = "test.cpp";
//	size_t pos = name.find('.');
//	if (pos != string::npos)
//	{
//		string suff(name, pos);
//		cout << suff << endl;
//		string suff2 = name.substr(pos);//默认到结束
//		cout << suff2 << endl;
//	}
//	return 0;
//}