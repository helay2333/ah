#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Point
{
public:
	int x, y;
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
		cout << "Constructing..." << "(" << this->x << "," << this->y << ")" << endl;
	}
	Point(const Point& p) {
		this->x = p.x;
		 this->y = p.y ;
		cout << "Copy Constructing..." << "(" << this->x << "," << this->y << ")" << endl;
	}
	void display() {
		cout << "(" << this->x << "," << this->y << ")" << endl;
	}

};
Point add(Point a, Point b)
{
	Point p;
	p.x = a.x + b.x;
	p.y = a.y + b.y;
	return p;
}
//int main()
//{
//	int x1, y1, x2, y2;
//
//	cin >> x1 >> y1 >> x2 >> y2;
//
//	Point p1(x1, y1), p2(x2, y2);
//	Point p3;
//
//	p3 = add(p1, p2); //p3的x,y值分别等于p1,p2的x,y值相加
//
//	Point p4 = p3;
//	p4.display();
//
//	return 0;
//}