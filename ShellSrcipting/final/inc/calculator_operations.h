/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);

/**
*  check greater the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the greater operand1 or operand2
*/
int greater(int operand1, int operand2);
int smaller(int operand1, int operand2);
int primenum(int operand1);
int primenum1(int operand2);
int evenodd(int operand1);
int evenodd1(int operand2);
int posneg(int operand1);
int posneg1(int operand2);
int factorial(int operand1);
int factorial1(int operand2);
int squarearea(int operand1);
int squareperi(int operand1);
int square(int operand1);
int square1(int operand2);
int cube(int operand1);
int cube1(int operand2);
int reverse(int operand1);
int reverse1(int operand2);
int palindrome(int operand1);
int palindrome1(int operand2);
int gcd(int operand1, int operand2);
int lcm(int operand1, int operand2);
int modulus(int operand1, int operand2);
int kilometertometer(int operand1);
int kilotocentimeter(int operand1);
int kilotomillimeter(int operand1);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
