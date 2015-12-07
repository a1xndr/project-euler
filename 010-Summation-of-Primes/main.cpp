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
    long sum=0;
    for(int i=2; i<2000000; i++)
    {
        if(is_prime(i))
        {
	    std::cout<<"i"<<": "<<i<<std::endl;
            sum+=i;
        }
    }
	std::cout<<"sum"<<": "<<sum<<std::endl;
}

