#include "../../headers/test/tests.h"



/*___________________________________________________________________________________________________*/

// variables globales 
int *coord;

/*___________________________________________________________________________________________________*/

//test
void testMapIteration1(void){

 coord[1] = -4;

 int compteur = 0;

 while(mapIteration1(coord, 4)){
  compteur++;
  if (compteur == 28){
   CU_ASSERT_EQUAL(coord[0], -2);
   CU_ASSERT_EQUAL(coord[1], 1);
  }
 }
 CU_ASSERT_EQUAL(compteur,48)
}

/*___________________________________________________________________________________________________*/


int setup(void){
 coord = malloc(sizeof(int)*2);
 mallocError(coord);
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

 
 
     
 if ((NULL == CU_add_test(test, "number 1 manner of iterating test", testMapIteration1))){
  CU_cleanup_registry();
  return CU_get_error();
 }

 CU_basic_run_tests();
 CU_basic_show_failures(CU_get_failure_list());
 
 CU_cleanup_registry();
 return CU_get_error();

}
