#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// coordinates doit être maloqué et avec coordinates[1] = -lenth

bool mapIteration(int *coordinates, int length){


 if (coordinates[1] == -length){
   coordinates[0] = 0;
   coordinates[1] = -length + 1;
   return true;
 } 



 if (coordinates[1]<0){

  if (coordinates[0]<length){
   coordinates[0]++;
   return true;


   }else{
    coordinates[1] ++;
    coordinates[0] = -length - coordinates[1] + 1;
    return true;
   }


 }  else {
  if (coordinates[0]<length - coordinates[1]){
   coordinates[0]++;
   return true;
  }


  if (coordinates[1]<length){
   coordinates[1]++;
   coordinates[0] = - length + 1;
   return true;


  }  else {  
   return false;
  }

 }
}



// // rapid tests
// void main(void){
//  printf("hello world\n");
//  int *coordinates;
//  coordinates = malloc(sizeof(int)*2);
//  coordinates[1] = -5;
//  while (mapIteration(coordinates, 5)){
//   printf("(%d, %d)\n", coordinates[0], coordinates[1]);
//  }
//  free(coordinates);
// }
