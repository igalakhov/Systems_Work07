#include <stdlib.h>
#include <stdio.h>

//list headers
struct list_node {
  int cargo;
  struct list_node * next;
};

void print_list(struct list_node * n);
struct list_node * insert_front(struct list_node * n, int c);
struct list_node * free_list(struct list_node * n);
