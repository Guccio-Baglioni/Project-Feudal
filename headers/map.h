#ifndef MAP_H
#define MAP_H


/**
 * @file mapGeneration.h
 */

  /**
   * @enum type
   *  describe all the different types of soils in a cellule
   *  
   */
  typedef enum type{
      SEA,                //0
      RIVER,              //1
      LAKE,               //2
      CLAY,               //3
      SAND,               //4
      ROCK,               //5
     // FERTILE_SOIL        //6
  }type_e;


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
   *  @int altitude 
   *    int from 0 to 10, define the altitude of the cellule where 1 is the sea floor
   * 
   *  @type_e type
   *    int that define the type of the ground, the types are defined in the type enumeration
   * 
   *  @climate_e climate
   *    define the climate of the cellule 
   *  
   */
typedef struct cellule{
  int altitude;
  type_e type;
  staticRessource_e staticRessource;
  climate_e climate; 
}cellule_t;



 /** @struct map
  * strcture where the map of a world is saved
  * 
  *   @int size 
  *     the length of the map (size = length*length)
  * 
  *   @cellule_t **cellules;
  *     
  */
typedef struct map{
 int length;
 cellule_t **cellules;
} map_t;



#endif // MAP_H