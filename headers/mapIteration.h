#ifndef MAP_ITERATION_H
#define MAP_ITERATION_H

/**
 * @file mapIteration.h
 */



/**
 * This typedef below defines the map_iterator_func_f type, a function pointer type that groups all
 * functions with the following signature :
 *
 *      bool (*map_iterator_func_f) ( int*, const int);
 *
 * So basically, once you've implemented a mapIterator
 * you can do the following if you want:
 *
 *      map_iterator_func_f generic_func;
 *      if (some_condition) {
 *          generic_func = mapIterator1;
 *      } else {
 *          generic_func = mapIterator2;
 *      }
 *      while (generic_func(coordinates, length)) ...  
 */
typedef bool (*map_iterator_func_f) ( int*, const int);



/**
 * bool function that iterate in an hex map in a specific order
 * it increments the pointer coordinates of 1 element
 * (see images/map1_iteration.png) 
 * 
 * @param coordinates int*: a pointer containing at least 2 coordinates, for the first iteration set the second coordinate at value -length-1
 * 
 * @param length int: indicating the length of the diameter of the map in number of cells  
 * 
 * @return a bool: false if the entry coordinates is the last element of the iteration, true if the function has incremented the coordinates
 **/ 
bool hexMapIterator(int *coordinates, const int length);


/**
 * bool function that iterate in a parallelogram map in a specific order
 * it increments the pointer coordinates of 1 element
 * (see images/map2_iteration.png) 
 * 
 * @param coordinates int*: a pointer containing at least 2 coordinates, for the first iteration set the second coordinate at value -length-1
 * 
 * @param length int: indicating the length of the diameter of the map in number of cells  
 * 
 * @return a bool: false if the entry coordinates is the last element of the iteration, true if the function has incremented the coordinates
 **/ 
bool paralMapIterator(int *coordinates, const int length);

#endif //MAP_ITERATION_H