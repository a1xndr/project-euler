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

long factorial(long num)
{
    return num*factorial(num-1);
}

long choose(int n, int m)
{
    return factorial(n)/(factorial(n-m)*factorial(m));
}

int main(int argc, char* argv[])
{
    long sum1=0;
    long sum2=0;
    for(int i=0; i<=100; i++)
    {
        sum1+=i*i;
        sum2+=i;
    }
    std::cout<<"Sum Square Difference: " <<sum2*sum2-sum1<<std::endl;
}

