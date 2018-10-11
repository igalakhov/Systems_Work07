#include "list.h"

void print_list(struct list_node * n){
  printf("[");
  while(n){
    printf(" %d ", n->cargo);
    n = n->next;
  }
  printf("] \n");
}

struct list_node * insert_front(struct list_node * n, int c){
  struct list_node * new_node = (struct list_node *) malloc(sizeof(struct list_node));

  new_node->cargo = c;
  new_node->next = n;
  return new_node;
}
struct list_node * free_list(struct list_node * n){
  if(!n){
    free_list(n->next);
    free(n);
  }

  return NULL;
}
