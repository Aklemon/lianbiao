#include"NodeList.h"

void InitList(PNode *pHead)
{
	//assert(pHead);
	*pHead = NULL;
}
PNode Bynode(DataType data)
{
	PNode pNewNode = (PNode)malloc(sizeof(Node));
	if (NULL != pNewNode)
	{
		pNewNode->data = data;
		pNewNode->pnext = NULL;
	}
}
void PushBack(PNode *pHead, DataType data)
{
	PNode pNode = Bynode(data);
	if (*pHead == NULL)
	{
		*pHead = pNode;
    }
	else
	{
		PNode cur = *pHead;
		while (cur->pnext !=NULL)
		{
			cur = cur->pnext;
		}
		cur->pnext = pNode;
	}
} 
void PopBack(PNode*pHead)
{
	assert(pHead);
	if (NULL == *pHead)
	{
		return;
	}
	else if (NULL == (*pHead)->pnext)
	{
		free(*pHead);
		*pHead = NULL;
	}
	else
	{
		PNode Cur= *pHead;
		while (NULL != Cur->pnext->pnext)
		{
			Cur= Cur->pnext;
		}
		free(Cur->pnext);
		Cur->pnext = NULL;
    }
}

void PushFront(PNode*pHead, DataType data)
{
	
	assert(pHead);
	PNode pNode = Bynode(data);
	if (*pHead == NULL)
	{
		*pHead = pNode;
	}

	if (pNode != NULL)
	{
		pNode->pnext = *pHead;
		*pHead = pNode;
	}
}
void PopFront(PNode*pHead)
{
	assert(pHead != NULL);
	PNode pNode = *pHead;
	
    if (*pHead == NULL)
	{
		return;
	}
	else
	{

		*pHead = (*pHead)->pnext;
		free(pNode);
	}
}
void PrintfList(PNode pHead)
{
	PNode pNode = pHead;
	assert(pNode);
	while(pNode!= NULL)
	{

		printf("%d -> ", pNode->data);
			pNode = pNode->pnext;
	}
	printf(" NULL\n");
	//printf("NULL\n");
} 
//
 int PNode_Find(PNode pHead, DataType data)
{
	PNode pos = pHead;
	int i = 0;
	while (NULL != pos && pos->data!= data)
	{
		pos = pos->pnext;
		i++;
	}
	if (pos != NULL)
	{
		return i;
	}
	else
	{
		return -1;
	}
}
void Insert(PNode *pHead, int pos, DataType data)
{
	assert(pHead);
	if (*pHead == NULL)
	{
		return ;
	}
	PNode pNode = *pHead;
	int count = 0;
	while ((pNode != NULL))
	{
		pNode = pNode->pnext;
		count++;
	}
	pNode = *pHead;
	if (pos >= 0 && pos < count)
	{
		int i = -1;
		while (++i< pos)
		{
			pNode = pNode->pnext;
		}
		// printf("%d\n", i);
		PNode pNew = Bynode(data);
		if (pNew != NULL)
		if (1==i)
		{
			pNew->pnext = *pHead;
			*pHead = pNew;
		}
		else
		{
			pNew->pnext = pNode->pnext;
			pNode->pnext = pNew;
		}
	}

}
void Erase(PNode *pHead, int pos)
{
	assert(pHead);
	PNode pNode = *pHead;
	PNode tmp = NULL;
	if (*pHead == NULL)
	{
		return;
	}
	
	if (pos == 0)
	{
		if ((*pHead)->pnext==NULL)
		{
			free(*pHead);
			(*pHead) = NULL;
		}
		else
		{
			tmp = *pHead;
			*pHead = (*pHead)->pnext;
			free(tmp);
			tmp = NULL;
		}
		return;

	}
	
	int count = 0;
	while (pNode != NULL)
	{
		pNode = pNode->pnext;
		count++;
	}
	
	if (pos >0 && pos < count)
	{
		int i =0;
		pNode = *pHead;
		while (++i< pos)
		{
			pNode = pNode->pnext;
		}
		
		//printf("%d\n", i);
		
		   tmp = pNode->pnext;
		   pNode->pnext = tmp->pnext;
			free(tmp);
			tmp = NULL;
		
	}
}

void Remove(PNode *pHead, DataType data)
{
	assert(pHead);
	int tmp = PNode_Find(*pHead, data);
	if (tmp == -1)
		return;
	 Erase(pHead,tmp);
}
void Removeall(PNode*pHead, DataType data)
{
	assert(pHead);
	int tmp = PNode_Find(*pHead, data);
	if (tmp == -1)
		return;
	while (tmp != -1)
	{
		Erase(pHead, tmp);
		tmp = PNode_Find(*pHead, data);
	}
}
//void Destory(PNode*pHead)
//{
//	PNode pPreNode = NULL;
//	asert(pHead);
//	while (*pHead != NULL)
//	{
//		pPreNode = *pHead;
//		*pHead = (*pHead)->pnext;
//		pPreNode->pnext = NULL;
//		free(pPreNode);
//	}
//	*pHead = (*pHead)->pnext;
//	pPreNode->pnext = NULL;
//	free(pPreNode);
//}
//
//








