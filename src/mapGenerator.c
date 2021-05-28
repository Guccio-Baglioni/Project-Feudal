#include "../headers/map.h"
#include "../headers/mapIteration.h"
#include"../headers/error.h"

#include <stdlib.h>
#include <stdio.h>

#include"../headers/mapGenerator.h"



// 
map_t *mapGenerator(const int length, const mapType_n mapType){

 map_t *map = NULL;
 map = (map_t *)malloc(sizeof(map_t));
 mallocCheck(map);

 map->mapType = mapType;
 map->length = length;

 if (mapType == HEXAGON){
  map->iterationFunc = *hexMapIterator;
  free(map);
  fprintf(stderr, "mapGenerator() does not work with hexagons yet\n");
  exit(-2);

 }else if (mapType == PARALLELOGRAM){
  map->iterationFunc = *paralMapIterator;

 }else {
  free(map);
  fprintf(stderr, "Unknown map type in mapGenerator()\n");
  exit(-2);
 }

 map->cellules = malloc(sizeof(cellule_t*)*(map->length));
 mallocCheck(map->cellules);

 for (int i = 0; i<map->length; i++){
  map->cellules[i] = malloc(sizeof(cellule_t)*(map->length));
  mallocCheck(map->cellules[i]);
 }

 int *coordinates = NULL;
 coordinates = malloc(sizeof(int)*2);
 mallocCheck(coordinates);



  


 return map;
}