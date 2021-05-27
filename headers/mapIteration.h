#ifndef MAP_ITERATION_H
#define MAP_ITERATION_H

/**
 * @file mapIteration.h
 */


/**
 * bool function that iterate in an hex map in a specific order
 * it increments the pointer coordinates of 1 element
 * (see images/mapIteration1.png) 
 * 
 * @param coordinates int*: a pointer containing at least 2 coordinates, for the first iteration set the second coordinate at value -length
 * 
 * @param length int: indicating the length of the diameter of the map in number of cells  
 * 
 * @return a bool: false if the entry coordinates is the last element of the iteration, true if the function has incremented coordinates
 **/ 
bool mapIteration1(int *coordinates, int length);



#endif //MAP_ITERATION_H