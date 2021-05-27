#include "../../headers/test/tests.h"

/*___________________________________________________________________________________________________*/


// variables globales 


/*___________________________________________________________________________________________________*/

//test


/*___________________________________________________________________________________________________*/


int setup(void){
 return 0;
}

int teardown(void){
 return 0;
}


/*___________________________________________________________________________________________________*/

int main(int argc, const char *argv[]) {


 if (CUE_SUCCESS != CU_initialize_registry()){
  return CU_get_error();
 }

 CU_pSuite test = NULL;

 test = CU_add_suite("tests basiques", setup, teardown);

 if (NULL == test) {
  CU_cleanup_registry();
  return CU_get_error();
 }

 
 
     
 if ((NULL == CU_add_test(test, "nom test",      ))  ||
     (NULL == CU_add_test(test, "nom test",       )) ){
 CU_cleanup_registry();
 return CU_get_error();
 }

 CU_basic_run_tests();
 CU_basic_show_failures(CU_get_failure_list());
 
 CU_cleanup_registry();
 return CU_get_error();

}
