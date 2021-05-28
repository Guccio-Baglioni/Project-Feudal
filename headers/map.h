#ifndef MAP_H
#define MAP_H


/**
 * @file mapGeneration.h
 */


/**
 * @enum typeMap_
 *  enumerate all the types iterator in this file 
 */
typedef enum mapType{
 HEXAGON,
 PARALLELOGRAM
}mapType_n;

  /**
   * @enum type
   *  describe all the different types of soils in a cellule
   */
  typedef enum celluleType{
      SEA,                //0
      RIVER,              //1
      LAKE,               //2
      CLAY,               //3
      SAND,               //4
      ROCK,               //5
     // FERTILE_SOIL        //6
  }celluleType_e;


  /**
   * @enum staticRessource
   *  describe all the different types of static ressources that we can find in a cellule
   *  
   */
typedef enum staticRessource{
  NOTHING,
  GOLD_DEPOSIT,
  IRON_DEPOSIT,
  // CLAY_DEPOSIT,
  // SAND_DEPOSIT,
  // STONE_DEPOSIT 
}staticRessource_e;

  /**
   * @enum climate
   *  describe the type of climate of a cellule, with the soil it will affect what can grow on it
   *  
   */
typedef enum climate{
  DESERTIC,
  TROPICAL,
  MEDITARREAN,
  MILD,
  COLD,
  GLACIAL,
  MOUNTAIN  
}climate_e;

  /**
   * @struct cellule
   *  describe a cellule of the map (a 50m*50m square)
   * 
   *  @param altitude int
   *    int from 0 to 10, define the altitude of the cellule where 1 is the sea floor
   * 
   *  @param type type_e
   *    int that define the type of the ground, the types are defined in the type enumeration
   * 
   *  @param climate climate_e
   *    define the climate of the cellule 
   *  
   */
typedef struct cellule{
  int altitude;
  celluleType_e celluleType;
  staticRessource_e staticRessource;
  climate_e climate; 
}cellule_t;



 /** @struct map
  * strcture where the map of a world is saved
  * 
  *   @param length int
  *     the length of the map (size = length*length)
  * 
  *   @param mapType mapType_n
  *     indicate the type of the map
  * 
  *   @param iterationFunc map_iterator_func_f
  *     a function to use to iterate on the map
  * 
  *   @param cellules; cellule_t **
  *     
  */
typedef struct map{
  int length;
  mapType_n mapType;
  map_iterator_func_f iterationFunc;
  cellule_t **cellules;
} map_t;



#endif // MAP_H