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
* finds greater number from operand1 & operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 > operand2
*/
int greater(int operand1, int operand2);

/**
* finds smaller number from operand1 & operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 < operand2
*/
int smaller(int operand1, int operand2);

/**
* area of rectangle with operand1 & operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the area of rectangle with operand1 & operand2
*/
int rectarea(int operand1, int operand2);

/**
* perimeter of rectangle with operand1 & operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the perimeter of rectangle with operand1 & operand2
*/
int rectperi(int operand1, int operand2);

/**
* prime of operand1 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return result of operand1 to be prime
*/
int prime(int operand1);

/**
*  bitwise and the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 && operand2
*/
int bitwiseand(int operand1, int operand2);

/**
*  bitwise or the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 || operand2
*/
int bitwiseor(int operand1, int operand2);

/**
*  bitwise not the operand1 and returns the result
* @param[in] operand1 
* @return Result of negation of operand1 
*/
int bitwisenot(int operand1);

/**
*  perform modulus of operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 % operand2
*/
int modulus(int operand1, int operand2);

/**
*  Perform sqare of operand1 and returns the result
* @param[in] operand1 
* @return Result of the operand1 which is squared
*/
int square(int operand1);

/**
*  provides AND of operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of the the AND operation
*/
int and(int operand1, int operand2);


/**
*  provides OR of operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of the the OR operation
*/
int or(int operand1, int operand2);

/**
*  provides NOT of operand1 and returns the result
* @param[in] operand1 
* @return Result of the the NOT operation
*/
int not(int operand1);

/**
*  provides NAND of operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of the the NAND operation
*/
int nand(int operand1, int operand2);

/**
*  provides NOR of operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of the the NOR operation
*/
int nor(int operand1, int operand2);

/**
*  Perform factorial of operand1 and returns the result
* @param[in] operand1 
* @return Result will be factorial of operand1
*/
int factorial(int operand1);

/**
*  Perform adder for operand1, operand2 and operand3  returns the result
* @param[in] operand1 
* @param[in] operand2 
* @param[in] operand3 
* @return Result of the the adder operation
*/
int adder3bit(int operand1, int operand2, int operand3);


/**
*  Perform adder for operand1, operand2 and operand3  returns the result
* @param[in] operand1 
* @param[in] operand2 
* @param[in] operand3 
* @return Result of the the adder operation
*/
int subtractor3bit(int operand1, int operand2, int operand3);


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
