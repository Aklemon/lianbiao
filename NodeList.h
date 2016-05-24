#pragma once
typedef int DataType;
#define NULL 0
#include<assert.h>
#include<malloc.h>
#include<stdio.h>

typedef struct node
{
	int data;// 数字域
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

//从尾到头打印
void PrintfListFromTailToHead(PNode pHead);
//删除一个无头单链表的非尾节点
void DeleteNotTailNode(PNode pos);
//查找链表的中间节点 只能遍历一次
void FindMid(PNode pHead);


void Reverse(PNode *pHead);//链表逆序

//单链表的排序
void BubbleSort(PNode pHead);




