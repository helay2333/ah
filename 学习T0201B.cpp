//#include <iostream>
//using namespace std;
//template <class T> class SingleList;  //��ǰ����SingleList
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
//class SingleList //����ͷ���ĵ������ǵݼ��������� 
//{
//public:
//	SingleList() { first = NULL; n = 0; }
//	~SingleList(); //���������ռ�ռ� 
//	bool IsEmpty() const; //�ж������Ƿ�Ϊ�� 
//	int Length() const; //������Ԫ�ظ��� 
//	bool Insert(T x); //��Ԫ��x���뵽����������
//	bool deleteX(T x); //ɾ��ֵΪx��Ԫ�� 
//	void Output(ostream& out) const; //�����������е�Ԫ��
//	bool deleteByLoc(int i); //ɾ����i��Ԫ�� 
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
//	if (q == NULL) //������Ԫ����С 
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
//	if (sb.first == NULL) return; //���sbΪ������ֱ�ӷ���
//
//	while (sb.first != NULL) //����sb����sb�е�Ԫ�ز��뵽sa�� 
//	{
//		//cout<<sb.n<<endl;
//		//��pbȡ��sb�е�Ԫ��
//		Node<T>* pb = sb.first;
//		sb.first = pb->next;
//		pb->next = NULL;
//
//		if (first == NULL) //���sa�ǿ���������pb 
//		{
//			first = pb;
//			pb->next = NULL;
//			pa = first;
//			n++;
//			sb.n--;
//			continue;
//		}
//
//		//��sa�в��������λ��
//		while (pa != NULL && pa->element < pb->element)
//		{
//			qa = pa;
//			pa = pa->next;
//		}
//
//		if (pa == NULL) //���paΪ�գ������ӵ�Ԫ�ر�sa������Ԫ�ض��� 
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
//		//�ҵ�λ�ã���������Ԫ�ر�sa�е�Ԫ�ض�С 
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