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

bool is_prime(long num)
{
    for(long i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)return false;
    }
    return true;
}
int main(int argc, char* argv[])
{
    int count=0;
    long prime=0;
    long num=2;
    while(count!=10001)
    {
        if(is_prime(num))
        {
            prime=num;
            count++;
            std::cout<<count<<": "<<prime<<std::endl;
        }
        num++;
    }
}

