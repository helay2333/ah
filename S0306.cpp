//#include<iostream>
//using namespace std;
//typedef  float QElemType;
//typedef struct QNode
//{
//    QElemType data;
//    struct QNode* next;
//}QNode, * QueuePtr;
//typedef struct
//{
//    QueuePtr font;//ͷָ��------���ָ��������ǽṹ������
//    //����ṹ��������������ɣ�һ��������һ��next��ָ����
//    QueuePtr rear;//βָ��
//}LinkQueue;
//
//
//
//void InitQueue(LinkQueue &Q)
//{
//
//    Q.rear = Q.font = new QNode;
//    Q.font->next = NULL;
//}
//void EnQueue(LinkQueue& Q,QElemType &s)
//{
//    QueuePtr p;
//    p = new QNode;
//    p->data = s;
//    p->next = NULL;
//    Q.rear->next = p;
//    Q.rear = p;
//}
//QElemType GetHead(LinkQueue& Q)
//{
//    return Q.font->next->data;
//}
//int DeQueue(LinkQueue& Q, QElemType &s)
//{
//    if (Q.font == Q.rear) return 0;
//    QueuePtr p;
//    p = new QNode;
//    p = Q.font->next;
//    s = p->data;
//    Q.font->next = p->next;
//    if (Q.rear == p) Q.rear = Q.font;
//
//    delete p;
//    return 1;
//}
//
//int main()
//{
//    LinkQueue lq;
//    InitQueue(lq); //��ʼ������ 
//    QElemType s;
//    int i;
//    for (i = 0; i < 5; i++)
//    {
//        cin >> s;
//        EnQueue(lq, s); //��� 
//    }
//    cout << GetHead(lq) << endl; //ȡ��ͷԪ�� 
//    DeQueue(lq, s); //���� 
//    cout << "Dequeue:" << s << endl;
//    for (i = 0; i < 5; i++)
//    {
//        if (DeQueue(lq, s)) cout << "Dequeue:" << s << endl;
//        else cout << "Queue empty!" << endl;
//    }
//
//    return 0;
//}