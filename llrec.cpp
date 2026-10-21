#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){

  
  if (head == nullptr){
    smaller = nullptr;
    larger = nullptr;
    return;
  }
  Node* curr = head;
  head = head->next;

  llpivot(head, smaller, larger, pivot); // recusion goes through ll and stores curr at each

  if (curr->val <= pivot){
  // goes through the linked list in reverse.
    curr->next = smaller; // connect that value of curr which is before to this value. ex if it wall null ptr. the next of smaller would be nullptr
    smaller = curr; // make smaller curr. this si so that the start of smaller is curr and it keeps up with linked list going in reverse
  }
  else{
     curr->next = larger; 
     larger = curr;
  }
}