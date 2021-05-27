#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include"../headers/error.h"

void mallocError(void *ptr){
 if (ptr==NULL){
  fprintf(stderr, "Error while allocating memory\n");
  exit(-1);
 }
}