#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include"../headers/error.h"

void mallocCheck(void *ptr){
 if (ptr==NULL){
  fprintf(stderr, "Error while allocating memory\n");
  exit(-1);
 }
}

