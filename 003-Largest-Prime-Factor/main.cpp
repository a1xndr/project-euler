/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/06/2015 11:42:36 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <cmath>

long multiple=600851475143;
long factor(long num)
{
    for(long l=2; l<std::ceil(num/2)+1; l++)
    {
        if(num%l==0)return l;
    }
    return num;
}
int main(int argc, char* argv[])
{
    long largest=1;
    while(true)
    {
        long pfact = factor(multiple);
        std::cout<<"pfact: " << pfact << std::endl;
        if(pfact>largest)largest=pfact;
        if(pfact==multiple)break;
        multiple = multiple/pfact;
    }
    
    std::cout<<"Greatest Prime Factor: " << largest << std::endl;
    return 0;
}

