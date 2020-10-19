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
    if(operand1>operand2)
        return operand1;
    else
        return operand2;
}

int smaller(int operand1, int operand2)
{
    if(operand1<operand2)
        return operand1;
    else
        return operand2;
}

int primenum(int operand1)
{
    int i,m=0,flag=0;    
      
    m=operand1/2;    
    for(i=2;i<=m;i++)    
    {    
    if(operand1%i==0)    
    {    
    return 0;   
    flag=1;    
    break;    
    }    
    }    
    if(flag==0)    
    return 1;  
}
    
int primenum1(int operand2)
{
    int i,m=0,flag=0;    
      
    m=operand2/2;    
    for(i=2;i<=m;i++)    
    {    
    if(operand2%i==0)    
    {    
    return 0;   
    flag=1;    
    break;    
    }    
    }    
    if(flag==0)    
    return 1;  
}

int evenodd(int operand1)
{
    if(operand1%2==0)
        return 1;
    else
        return 0; 
}

int evenodd1(int operand2)
{
    if(operand2%2==0)
        return 1;
    else
        return 0; 
}

int posneg(int operand1)
{
    if(operand1>0)
        return 1;
    else if(operand1<0)
        return 0;
    else
        return -1;
}

int posneg1(int operand2)
{
    if(operand2>0)
        return 1;
    else if(operand2<0)
        return 0;
    else
        return -1;
}

int factorial(int operand1)
{
   if(operand1 < 0)
    return -1;
 if(operand1 == 0)
    return 1;
return operand1 * factorial(operand1-1);
}

int factorial1(int operand2)
{
   if(operand2 < 0)
    return -1;
 if(operand2 == 0)
    return 1;
return operand2 * factorial(operand2-1);
}

int squarearea(int operand1)
{
    return operand1*operand1;
}

int squareperi(int operand1)
{
    return 4*operand1;
}

int square(int operand1)
{
    return operand1*operand1;
}
int square1(int operand2)
{
    return operand2*operand2;
}
int cube(int operand1)
{
    return operand1*operand1*operand1;
}
int cube1(int operand2)
{
    return operand2*operand2*operand2;
}

int reverse(int operand1)
{
    int rev=0,remainder;
    while(operand1!=0){
        remainder = operand1%10;
        rev = rev*10+remainder;
        operand1 /= 10;
    }
    return rev;
}
int reverse1(int operand2)
{
    int rev=0,remainder;
    while(operand2!=0){
        remainder = operand2%10;
        rev = rev*10+remainder;
        operand2 /= 10;
    }
    return rev;
}
int palindrome(int operand1)
{
    int rev=0,remainder,original;
    original = operand1;
    while(operand1!=0){
        remainder = operand1%10;
        rev = rev*10+remainder;
        operand1 /= 10;
    }
    if(original==rev)
         return 1;
    else
        return 0;
}
int palindrome1(int operand2)
{
    int rev=0,remainder,original;
    original = operand2;
    while(operand2!=0){
        remainder = operand2%10;
        rev = rev*10+remainder;
        operand2 /= 10;
    }
    if(original==rev)
         return 1;
    else
        return 0;
}
int gcd(int operand1, int operand2)
{
    int count,gcd;
    for(count=1;count<=operand1 && count<=operand2;++count)
    {
        if(operand1%count==0 && operand2%count==0)
            gcd = count;
    }
    return gcd;
}
int lcm(int operand1, int operand2)
{
    int maximum;
    maximum=(operand1>operand2)?operand1:operand2;
    while(1)
    {
        if(maximum%operand1==0 && maximum%operand2==0)
        {
            return maximum;
            break;
        }
        ++maximum;
    }
}
int modulus(int operand1,int operand2)
{
    int remainder;
    remainder= operand1%operand2;
    return remainder;
}
int kilometertometer(int operand1)
{
    int meter=operand1*1000;
    return meter;
}
int kilotocentimeter(int operand1)
{
    int centimeter = operand1*100000;
    return centimeter;
}
int kilotomillimeter(int operand1)
{
    int millimeter = operand1*1000000;
    return millimeter;
}



    
    

