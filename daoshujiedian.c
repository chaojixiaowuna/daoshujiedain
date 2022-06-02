//输入一个链表，输出该链表中倒数第k个结点。

//最简单的思路 遍历两遍链表
//#include<stdio.h>
//#include<stdlib.h>
// struct ListNode 
// {
//      int val;
//     struct ListNode *next;
// };
// 
//void ListPrint(struct ListNode* head)
//{
//	struct ListNode* cur=head;
//	while(cur)
//	{
//		printf("%d",cur->val);
//		cur=cur->next;
//	}
//}
//
//struct ListNode* FindKthToTail(struct ListNode* head,int k)
//{
//	struct ListNode* cur=head;
//	int count=0;
//	while(cur)
//	{
//		cur=cur->next;
//		count++;
//	}
//	cur=head;
//	if(count>=k)
//	{
//
//	while((count-k))
//	{
//		cur=cur->next;
//		count--;
//	}
//	}
//	else
//	{
//		return NULL;
//	}
//	return cur;
//
//
//}
//int main()
//{
//	struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n5=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* tmp;
//	int k;
//	printf("请输入k:");
//	scanf("%d",&k);
//	n1->val=1;
//	n2->val=2;
//	n3->val=3;
//	n4->val=4;
//	n5->val=5;
//	n1->next=n2;
//	n2->next=n3;
//	n3->next=n4;
//	n4->next=n5;
//	n5->next=NULL;
//	tmp=FindKthToTail(n1,k);
//	ListPrint(tmp);
//	return 0;
//}


//只遍历一遍链表
#include<stdio.h>
#include<stdlib.h>
 struct ListNode 
 {
      int val;
     struct ListNode *next;
 };
 
void ListPrint(struct ListNode* head)
{
	struct ListNode* cur=head;
	while(cur)
	{
		printf("%d",cur->val);
		cur=cur->next;
	}
}

struct ListNode* FindKthToTail(struct ListNode* head,int k)
{
	struct ListNode* cur=head;
	struct ListNode* curprv=head;
	while(k&&curprv)
	{
		curprv=curprv->next;
		k--;
	}
	if(curprv==NULL&&k!=0)
	{
		return NULL;
	}
	else
	{
	while(curprv)
	{
		cur=cur->next;
		curprv=curprv->next;
	}
	return cur;
	}
}
int main()
{
	struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n5=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* tmp;
	int k;
	printf("请输入k:");
	scanf("%d",&k);
	n1->val=1;
	n2->val=2;
	n3->val=3;
	n4->val=4;
	n5->val=5;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=NULL;
	tmp=FindKthToTail(n1,k);
	ListPrint(tmp);
	return 0;
}