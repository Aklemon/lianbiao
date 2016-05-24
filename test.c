#include"NodeList.h"
void FunTest()
{
	PNode pHead=NULL;
	//InitList(&pHead);
	//printf("%s\n", pHead);
	
	PushBack(&pHead, 1);
	PushBack(&pHead, 2);
	PushBack(&pHead, 3);
	PushBack(&pHead, 4);
	PushBack(&pHead, 6);
	PushBack(&pHead, 6);
	/*PrintfList(pHead);
	PopBack(&pHead);
	PopBack(&pHead);*/
	//PushFront(&pHead, 0);
	//PrintfList(pHead);
	//PopFront(&pHead);
	//Insert(&pHead, 3, 6);
	PrintfList(pHead);
	//Erase(&pHead, 0);
	//Erase(&pHead, 1);
	//Erase(&pHead, 2);
	//Erase(&pHead, 3);
	//Erase(&pHead, 4);
	//PrintfList(pHead);

	//Remove(&pHead, 3);
	//Removeall(&pHead, 6);
	//PrintfList(pHead);

	 //PrintfListFromTailToHead( pHead);
	 
	 DeleteNotTailNode(PNode_Find(pHead, 4));
	 

	 PrintfList(pHead);
}
int main()
{
	FunTest();
	return 0;
}

