#include "linkedList.h"
#include <stdlib.h>
#include <stdio.h>


struct Link* listInsertionSort(struct Link* head) {

  /*
   * This function should perform an insertion sort on the list whose head is
   * provided as the function's argument, so that the values in the list are
   * sorted in ascending order, starting at the head.
   *
   * The sort should be done without allocating any new Link structs or any
   * other auxiliary data structures.
   *
   * Return a pointer to the new head of the list.
   */
   struct Link *current = head;
   struct Link *replace = head;
   int temp = 0;

   int i, j;
   int size = 0;
   while(current != NULL){
      current = current->next;
      size++;
   }
   current = head->next;

   while(current != NULL){
      replace = head;
      while(replace->next != current){ 
         if(replace->value > current->value){
            temp = current->value;
            current->value = replace->value;
            replace->value = temp;
         }
         else{
	    replace = replace->next;
         }	 
      }
      current = current->next;
   }

   return head;
}


struct Link* reverseList(struct Link* head) {

  /*
   * This function should iteratively reverse the list whose head is provided
   * as the function's argument.
   *
   * The reversal must be done totally in place, i.e. you may not allocate any
   * new Link structs or any other auxiliary data structures.
   *
   * Return a pointer to the new head of the list.
   */

  struct Link *temp_prev = NULL;
  struct Link *temp = head;
  struct Link *temp_next;
  while(temp != NULL){
     temp_next = temp->next;
     temp->next = temp_prev;
     temp_prev = temp;
     temp = temp_next;
  }
  head = temp_prev;
	
  return head;

}


struct Link* reverseListRecursive(struct Link* head){

  /*
   * Write this function for extra credit.  It should do the exact same thing
   * as reverseList() above, except it should do it recursively instead of
   * iteratively (i.e. no loops allowed).
   *
   * Again, you may not allocate any new Link structs or any other auxiliary
   * data structures.  You may, however, define an auxiliary function to help
   * you do the recursion.
   *
   * Return a pointer to the new head of the list.
   */
  return head;

}
