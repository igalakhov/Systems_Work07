#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <time.h>


int main(){
  srand(time(NULL));

  struct list_node * my_list = NULL;

  printf("Printing empty list (expecting []) \n");
  print_list(my_list);

  printf("Adding 10 values to the list: \n");
  int i;
  for(i = 0; i < 10; i++){
    my_list = insert_front(my_list, rand() % 100);
    print_list(my_list);
  }

  printf("Freeing the list... \n");
  my_list = free_list(my_list);

  printf("Freed list: \n");
  print_list(my_list);

  return 0;
}
