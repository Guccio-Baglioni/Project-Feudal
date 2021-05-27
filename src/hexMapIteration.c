#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// #include "../headers/mapIteration.h"

// coordinates doit être maloqué et avec coordinates[1] = -length
bool mapIteration1(int *coordinates, int length){


 if (coordinates[1] == -length-1){
   coordinates[0] = 0;
   coordinates[1] = -length;
   return true;
 } 

  if (coordinates[1]<0){
    if (coordinates[0]< 2*length + coordinates[1]){
    coordinates[0]++;
    }else{
      coordinates[1] ++;
      coordinates[0] = 0;
    }
  } else {
    if (coordinates[0]< 2*length - coordinates[1]){
      coordinates[0]++;
    }else{
      coordinates[1] ++;
      coordinates[0] = 0;
    }
  }
  if (coordinates[1] == length+1){
    return false;
  }

  return true;
}



// // rapid tests
// int main(void){
//  printf("hello world\n");
//  int *coordinates;
//  coordinates = (int*)malloc(sizeof(int)*2);
//  coordinates[1] = -6;
//  while (mapIteration1(coordinates, 5)){
//   printf("(%d, %d)\n", coordinates[0], coordinates[1]);
//  }
//  free(coordinates);
//  return 1;
// }

