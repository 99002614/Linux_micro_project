#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_greater(void);
void test_smaller(void);
void test_primenum(void);
void test_primenum1(void);
void test_evenodd(void);
void test_evenodd1(void);
void test_posneg(void);
void test_posneg1(void);
void test_factorial(void);
void test_factorial1(void);
void test_squarearea(void);
void test_squareperi(void);
void test_square(void);
void test_square1(void);
void test_cube(void);
void test_cube1(void);
void test_reverse(void);
void test_reverse1(void);
void test_palindrome(void);
void test_palindrome1(void);
void test_gcd(void);
void test_lcm(void);
void test_modulus(void);
void test_kilometertometer(void);
void test_kilotocentimeter(void);
void test_kilotomillimeter(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "greater", test_greater);
  CU_add_test(suite, "smaller", test_smaller);
  CU_add_test(suite, "primenum", test_primenum);
  CU_add_test(suite, "primenum1", test_primenum1);
  CU_add_test(suite, "evenodd", test_evenodd);
   CU_add_test(suite, "evenodd1", test_evenodd1);
   CU_add_test(suite, "posneg", test_posneg);
  CU_add_test(suite, "posneg1", test_posneg1);
  CU_add_test(suite, "factorial", test_factorial);
   CU_add_test(suite, "factorial1", test_factorial1);
   CU_add_test(suite, "squarearea", test_squarearea);
   CU_add_test(suite, "squareperi", test_squareperi);
   CU_add_test(suite, "square", test_square);
   CU_add_test(suite, "square1", test_square1);
   CU_add_test(suite, "cube", test_cube);
  CU_add_test(suite, "cube1", test_cube1);
  CU_add_test(suite, "reverse", test_reverse);
  CU_add_test(suite, "reverse1", test_reverse1);
  CU_add_test(suite, "palindrome", test_palindrome);
  CU_add_test(suite, "palindrome1", test_palindrome1);
   CU_add_test(suite, "gcd", test_gcd);
  CU_add_test(suite, "lcm", test_lcm);
  CU_add_test(suite, "modulus", test_modulus);
   CU_add_test(suite, "kilometertometer", test_kilometertometer);
 CU_add_test(suite, "kilotocentimeter", test_kilotocentimeter);
   CU_add_test(suite, "kilotomillimeter", test_kilotomillimeter);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_greater(void) {
  CU_ASSERT(20 == greater(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(30 == greater(30, 40));
}
void test_smaller(void) {
  CU_ASSERT(10 == smaller(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(40 == smaller(30, 40));
}

void test_primenum(void)
{
   CU_ASSERT(1 == primenum(7));
  
  /* Dummy fail*/
  CU_ASSERT(1 == primenum(30));
}

void test_primenum1(void)
{
   CU_ASSERT(1 == primenum1(7));
  
  /* Dummy fail*/
  CU_ASSERT(1 == primenum1(30));
}

void test_evenodd(void)
{
   CU_ASSERT(1 == evenodd(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == evenodd(5));
}

void test_evenodd1(void)
{
   CU_ASSERT(1 == evenodd1(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == evenodd1(5));
}
  
void test_posneg(void)
{
   CU_ASSERT(1 == posneg(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == posneg(-5));
}

void test_posneg1(void)
{
   CU_ASSERT(1 == posneg1(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == posneg1(-5));
}

void test_factorial(void)
{
   CU_ASSERT(120 == factorial(5));
  
  /* Dummy fail*/
  CU_ASSERT(110 == factorial(5));
}

void test_factorial1(void)
{
   CU_ASSERT(120 == factorial1(5));
  
  /* Dummy fail*/
  CU_ASSERT(110 == factorial1(5));
}

void test_squarearea(void)
{
   CU_ASSERT(25 == squarearea(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == squarearea(5));
}
void test_squareperi(void)
{
   CU_ASSERT(20 == squareperi(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == squareperi(5));
}
void test_square(void)
{
   CU_ASSERT(25 == square(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == square(5));
}
void test_square1(void)
{
   CU_ASSERT(25 == square1(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == square1(5));
}
void test_cube(void)
{
   CU_ASSERT(125 == cube(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == cube(5));
}
void test_cube1(void)
{
   CU_ASSERT(125 == cube1(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == cube1(5));
}
void test_reverse(void)
{
   CU_ASSERT(432 == reverse(234));
  
  /* Dummy fail*/
  CU_ASSERT(234 == reverse(234));
}
void test_reverse1(void)
{
   CU_ASSERT(432 == reverse1(234));
  
  /* Dummy fail*/
  CU_ASSERT(234 == reverse1(234));
}
void test_palindrome(void)
{
   CU_ASSERT(1 == palindrome(1001));
  
  /* Dummy fail*/
  CU_ASSERT(1 == palindrome(2345));
}
void test_palindrome1(void)
{
   CU_ASSERT(1 == palindrome1(1001));
  
  /* Dummy fail*/
  CU_ASSERT(1 == palindrome1(2345));
}
void test_gcd(void)
{
   CU_ASSERT(1 == gcd(2,5));
  
  /* Dummy fail*/
  CU_ASSERT(1 == gcd(2,6));
}
void test_lcm(void)
{
   CU_ASSERT(10 == lcm(2,5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == lcm(2,6));
}
void test_modulus(void)
{
   CU_ASSERT(1 == modulus(5,2));
  
  /* Dummy fail*/
  CU_ASSERT(11 == lcm(5,2));
}
void test_kilometertometer(void)
{
   CU_ASSERT(5000 == kilometertometer(5));
  
  /* Dummy fail*/
  CU_ASSERT(1000 ==kilometertometer(5));
}
void test_kilotocentimeter(void)
{
   CU_ASSERT(500000 == kilotocentimeter(5));
  
  /* Dummy fail*/
  CU_ASSERT(1000 ==kilotocentimeter(5));
}
void test_kilotomillimeter(void)
{
   CU_ASSERT(5000000 ==kilotomillimeter(5));
  
  /* Dummy fail*/
  CU_ASSERT(1000 ==kilotomillimeter(5));
}


