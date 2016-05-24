#pragma once
typedef int DataType;
#define NULL 0
#include<assert.h>
#include<malloc.h>
#include<stdio.h>

typedef struct node
{
	int data;// ������
	struct node *pnext;
}*PNode,Node;

void InitList();
PNode Bynode(DataType data);

void PushBack(PNode*pHead, DataType data);
void PopBack(PNode*pHead);
void PushFront(PNode*pHead, DataType data);
void PopFront(PNode*pHead);
void PrintfList(PNode pHead);
PNode Find(PNode pHead, DataType data);
void Insert(PNode *pHead, int pos, DataType data);
void Erase(PNode*pHead, PNode pos);
void Remove(PNode*pHead, DataType data);
void Removeall(PNode*pHead, DataType data);
void Destory(PNode *pHead);

//��β��ͷ��ӡ
void PrintfListFromTailToHead(PNode pHead);
//ɾ��һ����ͷ������ķ�β�ڵ�
void DeleteNotTailNode(PNode pos);
//����������м�ڵ� ֻ�ܱ���һ��
void FindMid(PNode pHead);


void Reverse(PNode *pHead);//��������

//�����������
void BubbleSort(PNode pHead);




