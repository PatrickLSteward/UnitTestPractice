  
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "hello_functions.h"

void test_add(){
    CU_ASSERT(add(1,2) == 3);
    CU_ASSERT(add(1,22) == 33);
    CU_ASSERT(add(-1,22) == 21);
}

void test_subtract(){
    CU_ASSERT(subtract(1,2) == 1);
    CU_ASSERT(subtract(1,22) == 21);
    CU_ASSERT(subtract(-1,22) == 23);
}

int main(){
    CU_intiatialize_registry();

    //declare suites 
    CU_pSuite suite1 = CU_add_suite("test_add", 0,0);
    CU_pSuite suite2 = CU_subtract_suite("test_subtract", 0,0);

    //add tests 
    CU_add_test(suite1, "test_add", test_add);
    CU_add_test(suite2, "test_subtract",0,0);

    //set output mode, run tests, clean up 
    CU_basid_set_mode(CU_BRM_VERBOSE);

    CU_basic_run_test();

    CU_cleanup_registry();

    return 0;
}