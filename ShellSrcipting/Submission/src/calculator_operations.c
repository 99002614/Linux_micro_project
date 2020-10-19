#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int greater(int operand1, int operand2)
{
    if(operand1 > operand2)
        return operand1;
    else
        return operand2;
}

int smaller(int operand1, int operand2)
{
    if(operand1 < operand2)
        return operand1;
    else
        return operand2;
}

int rectarea(int operand1, int operand2)
{
    return operand1 * operand2;
}

int rectperi(int operand1, int operand2)
{
    return (2*(operand1 + operand2));
}

int prime(int operand1)
{
    int var,number=0,flag=0;     
    number=operand1/2;    
    for(var=2;var<=number;var++)    
    {    
    if(operand1%var==0)    
    {    
    return 0;   
    flag=1;    
    break;    
    }    
    }    
    if(flag==0)         
    return 1;  
}

int bitwiseand(int operand1, int operand2)
{
    return operand1 && operand2;
}

int bitwiseor(int operand1, int operand2)
{
    return operand1 || operand2;
}

int bitwisenot(int operand1)
{
    return !operand1;
}

int modulus(int operand1, int operand2)
{
    return operand1 % operand2;
}

int square(int operand1)
{
    int result;
    result= operand1 * operand1;
    return result;
}
int and(int operand1, int operand2)
{
    int result;
    if(operand1<0 && operand2<0)
    return -1;
    else if(operand1>1 && operand2>1)
    return 1;
    else if(operand1==1 && operand2==1)
    return 1;
    else
    return 0;
}
int or(int operand1, int operand2)
{
    int result;
    if(operand1<0 && operand2<0)
    return -1;
    else if(operand1>1 && operand2>1)
    return 1;
    else if(operand1==0 && operand2==0)
    return 0;
    else
    return 1;
}

int not(int operand1)
{
    if(operand1==0)
        return 1;
    else
        return 0;
}
int nand(int operand1, int operand2)
{
    int result;
    if(operand1<0 && operand2<0)
    return -1;
    else if(operand1>1 && operand2>1)
    return 0;
    else if(operand1==1 && operand2==1)
    return 0;
    else
    return 1;
}
int nor(int operand1, int operand2)
{
    if(operand1<0 && operand2<0)
    return -1;
    else if(operand1>1 && operand2>1)
    return 0;
    else if(operand1==0 && operand2==0)
    return 1;
    else
    return 0;
}
int factorial(int operand1)
    {   
        int fact=1;
        if (operand1==0)
        {
            return 1;
        }
        if (operand1 < 0)
        {
            return 0;
        }
        else
        {
            for (int i = 1; i <= operand1; ++i)
            {
                fact *= i;
            }
        return fact;
        }
    }
int adder3bit(int operand1, int operand2, int operand3)

{
    if(operand1 < 0 || operand2 < 0 || operand3 < 0)
          {
             return -1;
          }
     else if (operand1 > 1 || operand2 > 1 || operand3 > 1)
          {
              return -1;
           }
     else
        {
           if(operand1==0 && operand2==0 && operand3==0)
              {
               return 0;
              }
           else if(operand1==0 && operand2==0 && operand3==1)
              {
               return 1;
              }
            else if(operand1==0 && operand2==1 && operand3==0)
               {
               return 1;
               }
        else if(operand1==0 && operand2==1 && operand3==1)
              {
               return 0;
               }
       else if(operand1==1 && operand2==0 && operand3==0)
               {
               return 1;
               }
       else if(operand1==1 && operand2==0 && operand3==1)
              {
               return 0;
               }
       else if(operand1==1 && operand2==1 && operand3==0)
               {
               return 0;
               }
        else 
              return 1;
     }
 }
int subtractor3bit(int operand1, int operand2, int operand3)
{
    if(operand1 < 0 || operand2 < 0 || operand3 < 0)
    {
        return -1;
    }
    else if (operand1 > 1 || operand2 > 1 || operand3 > 1)
    {
        return -1;
    }
    else
    {
        if(operand1==0 && operand2==0 && operand3==0)
        {
            return 0;
        }
        else if(operand1==0 && operand2==0 && operand3==1)
        {
            return 1;
        }
        else if(operand1==0 && operand2==1 && operand3==0)
        {
            return 1;
        }
        else if(operand1==0 && operand2==1 && operand3==1)
        {
            return 0;
        }
        else if(operand1==1 && operand2==0 && operand3==0)
        {
            return 1;
        }
        else if(operand1==1 && operand2==0 && operand3==1)
        {
            return 0;
        }
        else if(operand1==1 && operand2==1 && operand3==0)
        {
            return 0;
        }
        else if(operand1==1 && operand2==1 && operand3==1)
        {
            return 1;
        }
    }
}



