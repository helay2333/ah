//#include<iostream>
//using namespace std;
//#include <stdlib.h>
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -2
//
//typedef int Status; 
//
//#define lengh 10
//typedef struct lianzhan {
//    int data;
//    struct lianzhan* next;
//
//}lianzhan, * LinkStack;
////³õÊ¼»¯Á´Õ»
//
//void IniteStack(LinkStack& S) {
//    S = (lianzhan*)malloc(sizeof(lianzhan));
//    S->next = NULL;
//}
////ÅÐ¿Õ
//Status StackEmpty(LinkStack S)
//{
//    if (S->next == NULL)
//        return true;
//    else return false;
//}
////½øÕ»
//Status Push(lianzhan*& S, int e) {
//    lianzhan* p;
//    p = (lianzhan*)malloc(sizeof(lianzhan));
//
//    p->next = NULL;
//    p->data = e;
//    p->next = S->next;
//    S->next = p;
//    return true;
//}
////³öÕ»
//Status Pop(lianzhan*& S, int& e) {
//    if (StackEmpty(S)) return false;
//    lianzhan* p = S->next;
//    e = p->data;
//    S->next = p->next;
//    free(p);
//    return true;
//}
//
//int main() {
//    LinkStack S;
//    IniteStack(S);
//    lianzhan* p = S->next;
//    int e, i = 0;
//    while (i < lengh) {
//        cin >> e;
//        
//        Push(S, e);
//        i++;
//    }
//    while (S->next)
//    {
//        Pop(S, e);
//        cout << e << endl;
//    }
//
//}