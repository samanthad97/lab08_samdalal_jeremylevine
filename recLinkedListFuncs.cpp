#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  //base case head is null return 0
  if(head == NULL){
    return 0;
  }
  int sum_of_smaller_list = recursiveSum(head->next);
  return head->data + sum_of_smaller_list;
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
  //list has at least 1 element
  assert(head != NULL);
  int current_max = head->data;
  int next_val;
   //base case, list size 1
  if(head->next == NULL){
    return current_max;
  }
  else{
    next_val = recursiveLargestValue(head->next);
  }
  if(current_max > next_val){
    return current_max;
  }
  else{
    return next_val;
  }

}
