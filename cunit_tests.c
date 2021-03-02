  
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "C_header.h"

void test_add(){
    CU_ASSERT(add(1,2) == 3);
    CU_ASSERT(add(1,22) == 23);
    CU_ASSERT(add(-1,22) == 21);
}

void test_subtract(){
    CU_ASSERT(subtract(2,1) == 1);
    CU_ASSERT(subtract(22,1) == 21);
    CU_ASSERT(subtract(-1,22) == -23);
}

void test_helloFunction(){
  CU_ASSERT_STRING_EQUAL(hello(),"hello");
}

void test_divide(){
    double tIn1[] = {10,20,22,44,55,63};
    double tIn2[] = {2,5,2,4,5,3};
    int size = sizeof(tIn1) / sizeof(tIn1[0]);
    double ans[size];
    
   for(int i = 0; i < size; ++ i){
        ans[i] = tIn1[i]/ tIn2[i];
   }
  
    for(int i = 0; i < size; ++ i){
        CU_ASSERT(divide(tIn1[i],tIn2[i]) == ans[i]);
    }
  
}

int main(){
    CU_initialize_registry();

    //declare suites 
    CU_pSuite suite1 = CU_add_suite("test_add", 0,0);
    CU_pSuite suite2 = CU_add_suite("test_subtract", 0,0);
    CU_pSuite suite3 = CU_add_suite("test_divide", 0,0); 
    CU_pSuite suite4 = CU_add_suite("test_helloFunction", 0,0);

    //add tests 
    CU_add_test(suite1, "test_add", test_add);
    CU_add_test(suite2, "test_subtract", test_subtract);
    CU_add_test(suite3, "test_divide", test_divide);
    CU_add_test(suite4, "test_helloFunction", test_helloFunction);

    //set output mode, run tests, clean up 
    CU_basic_set_mode(CU_BRM_VERBOSE);

    CU_basic_run_tests();

    CU_cleanup_registry();

    return 0;
}
