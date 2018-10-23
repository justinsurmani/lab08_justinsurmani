#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  if(head == NULL)
  {return 0;}
  int val = head->data;
  if(head->next == NULL)
  {return val;}
  return val + recursiveSum(head->next);
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
	int val = head->data;
	int nextVal;
	if(head->next==NULL)
	{return val;}
	else
	{nextVal = recursiveLargestValue(head->next);}
	if(val>nextVal)
	{return val;}
	else
	{return nextVal;}
}
	
 
