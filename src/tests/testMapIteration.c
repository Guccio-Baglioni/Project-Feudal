#include "../../headers/test/tests.h"



/*___________________________________________________________________________________________________*/

// variables globales 
int *coord;

/*___________________________________________________________________________________________________*/

//test
void testHexMapIterator(void){

 coord[1] = -6;

 int compteur = 0;

 while(hexMapIterator(coord, 5)){
  compteur++;
  if (compteur == 28){
   CU_ASSERT_EQUAL(coord[0], 6);
   CU_ASSERT_EQUAL(coord[1], -2);
  }
 }
 CU_ASSERT_EQUAL(compteur,91)
}

void testParalMapIterator(void){

 coord[1] = -6;

 int compteur = 0;

 while(paralMapIterator(coord, 5)){
  compteur++;
  if (compteur == 15){
   CU_ASSERT_EQUAL(coord[0], 2);
   CU_ASSERT_EQUAL(coord[1], 2);
  }
 }
 CU_ASSERT_EQUAL(compteur,36)
}
/*___________________________________________________________________________________________________*/


int setup(void){
 coord = malloc(sizeof(int)*2);
 mallocCheck(coord);
 return 0;
 }

int teardown(void){
 free(coord);
 return 0;
}


/*___________________________________________________________________________________________________*/

int main(int argc, const char *argv[]) {


 if (CUE_SUCCESS != CU_initialize_registry()){
  return CU_get_error();
 }

 CU_pSuite test = NULL;

 test = CU_add_suite("Iteration tets", setup, teardown);

 if (NULL == test) {
  CU_cleanup_registry();
  return CU_get_error();
 }

 
 
     
 if ((NULL == CU_add_test(test, "test iterating in an hexagonal map", testHexMapIterator     ))  ||
     (NULL == CU_add_test(test, "test iterating in a parallelogram map", testParalMapIterator))  ){
  CU_cleanup_registry();
  return CU_get_error();
 }

 CU_basic_run_tests();
 CU_basic_show_failures(CU_get_failure_list());
 
 CU_cleanup_registry();
 return CU_get_error();

}
