#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

// Answer to 3.b
int size(node *l){
  // i is used as a counter
  int i = 0;

// l is told to point to next. If next is not NULL, it means that next is pointing to another element. 
// everytime this happens, the counter "i" is added by one. 
// the loops stops when next is no longer pointing to another element, and therefore is the last element. 
  while (l->next!=NULL){
l=l->next;
i++;
  }
 return i; 
}

// answer to 3.d
void printout(node *l) {
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next; 
    while (p!=NULL){
      printf("%d, ",p->data);
  // p becomes p's next, to ensure that data of all elements in the list is considered. 
      p = p->next;
    }
    printf("\n");
}

// answer to 3.e
int largest(node *l){
    /*pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/

// larg is used to store the largest value of "next". 
int larg = 0; 
node *p = l->next; 
while (p->next!=NULL){
  // larg will be replace by the data of p, if the data of p is greater than larg
  if(larg < p->data){
    larg = p->data;
  }
// p becomes p's next, to ensure that data of all elements in the list is considered.
  p = p->next;
}
return larg;
}
