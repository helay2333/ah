//#include <iostream>
//using namespace std;
//template <class T> class SingleList;  //超前声明SingleList
//template <class T>
//class Node
//{
//public:
//	Node(T t) :element(t) { next = NULL; }
//private:
//	T element;
//	Node<T>* next;
//	friend class SingleList<T>;
//};
//
//template <class T>
//class SingleList //不带头结点的递增（非递减）单链表 
//{
//public:
//	SingleList() { first = NULL; n = 0; }
//	~SingleList(); //清除链表所占空间 
//	bool IsEmpty() const; //判断链表是否为空 
//	int Length() const; //链表中元素个数 
//	bool Insert(T x); //将元素x插入到递增单链表
//	bool deleteX(T x); //删除值为x的元素 
//	void Output(ostream& out) const; //遍历单链表中的元素
//	bool deleteByLoc(int i); //删除第i个元素 
//	void show();
//	void MergeLink(SingleList<T>& sb);
//
//private:
//	Node<T>* first;
//	int n;
//};
//
//template <class T>
//void SingleList<T>::show()
//{
//	if (!IsEmpty())
//	{
//		cout << "There are " << Length() << " scores in the Linklist:" << endl;
//		Output(cout);
//	}
//	else
//		cout << "Empty!" << endl;
//}
//
//template <class T>
//SingleList<T>:: ~SingleList()
//{
//	Node<T>* p;
//	while (first)
//	{
//		p = first->next;
//		delete first;
//		first = p;
//	}
//}
//
//template <class T>
//int SingleList<T>::Length() const
//{
//	return n;
//}
//
//template <class T>
//bool SingleList<T>::IsEmpty() const
//{
//	return n == 0;
//}
//
//
//template <class T>
//bool SingleList<T>::Insert(T x)
//{
//	Node<T>* pnew = new Node<T>(x);
//	if (first == NULL)
//	{
//		first = pnew;
//		n++;
//		return true;
//	}
//
//	Node<T>* p, * q = NULL;
//	p = first;
//	while (p && p->element < x)
//	{
//		q = p;
//		p = p->next;
//	}
//
//
//	if (q == NULL) //如果添加元素最小 
//	{
//		first = pnew;
//		pnew->next = p;
//	}
//	else
//	{
//		pnew->next = q->next;
//		q->next = pnew;
//	}
//
//	n++;
//	return 1;
//}
//
//template<class T>
//void SingleList<T>::Output(ostream& out) const
//{
//	Node<T>* p = first;
//	while (p)
//	{
//		out << p->element << endl;
//		p = p->next;
//	}
//	out << endl;
//}
//
//template <class T>
//bool SingleList<T>::deleteX(T x)
//{
//	Node<T>* p, * q = NULL;
//	p = first;
//	while (p && p->element < x)
//	{
//		q = p;
//		p = p->next;
//	}
//	if (p == NULL) return false;
//	if (p->element != x) return false;
//	if (q == NULL)
//	{
//		first = p->next;
//		delete p;
//	}
//	else
//	{
//		q->next = p->next;
//		delete p;
//	}
//	n--;
//	return true;
//}
//template <class T>
//bool SingleList<T>::deleteByLoc(int i)
//{
//	if (i<1 || i>n)	return false;
//	int num = 1;
//	Node<T>* p, * q = NULL;
//	p = first;
//	if (i == 1)
//	{
//		first = p->next;
//		delete p;
//		n--;
//		return true;
//	}
//
//	do
//	{
//		q = p;
//		p = p->next;
//		num++;
//	} while (num < i);
//	q->next = p->next;
//	delete p;
//	n--;
//	return true;
//}
//
//template <class T>
//void SingleList<T>::MergeLink(SingleList<T>& sb)
//{
//	Node<T>* pa, * qa = NULL, * qb = NULL;
//	pa = first;
//	if (sb.first == NULL) return; //如果sb为空链表，直接返回
//
//	while (sb.first != NULL) //遍历sb，将sb中的元素插入到sa中 
//	{
//		//cout<<sb.n<<endl;
//		//用pb取出sb中的元素
//		Node<T>* pb = sb.first;
//		sb.first = pb->next;
//		pb->next = NULL;
//
//		if (first == NULL) //如果sa是空链表，插入pb 
//		{
//			first = pb;
//			pb->next = NULL;
//			pa = first;
//			n++;
//			sb.n--;
//			continue;
//		}
//
//		//在sa中查找其插入位置
//		while (pa != NULL && pa->element < pb->element)
//		{
//			qa = pa;
//			pa = pa->next;
//		}
//
//		if (pa == NULL) //如果pa为空，则增加的元素比sa中所有元素都大 
//		{
//			qa->next = pb;
//			pb->next = NULL;
//			pa = pb;
//			n++;
//			sb.n--;
//			continue;
//		}
//
//
//		//找到位置，如果插入的元素比sa中的元素都小 
//		if (qa == NULL)
//		{
//			pb->next = pa;
//			first = pb;
//			qa = NULL;
//			pa = first;
//		}
//		else
//		{
//			pb->next = pa;
//			qa->next = pb;
//			qa = pb;
//			pa = qa->next;
//		}
//
//		n++;
//		sb.n--;
//
//	}
//}