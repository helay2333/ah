#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Student {
public:
	int num;
	int age;
	float score;
	static float sum;
	 static int count;
	Student(int _num = 0, int _age = 0, float _score = 0) {
		num = _num;
		age = _age;
		score = _score;
		
	}
	void total()
	{
		count++;
		sum += score;
	}
	static float average()
	{
		return sum / count;
	}
};
int Student::count = 0;
float Student::sum = 0;



//int main()
//{
//	int n;
//	cout << "Please input the number of students:";
//	cin >> n;
//	Student* p = new Student[n];
//	for (int i = 0; i < n; i++)
//	{
//		int num, age;
//		float score;
//		cin >> num >> age >> score;
//		p[i] = Student(num, age, score);
//		p[i].total();
//	}
//	cout << "The average score of " << n << " student is " << Student::average() << endl;
//
//	if (p != NULL) delete[]p;
//	return 0;
//}