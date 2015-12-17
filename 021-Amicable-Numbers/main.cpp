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
int factor_list[10000000];
long sum_factors(long num)
{
    int sum=0;
    for(int i=1; i<=num/2; i++)
    {
        if(num%i==0)sum+=i;
    }
    return sum;
}
int main(int argc, char* argv[])
{
    int sum=0;
    for(int i=1; i<=10000; i++)
    {
        int factor_sum=sum_factors(i);
        if(factor_sum==i)continue;
        if(sum_factors(factor_sum)==i){
            sum+=i;
            std::cout<< "The pair: "<< i << " and " << factor_sum << " is amicable."<< std::endl;
        }
    }
    std::cout<< "The sum of all amicable numbers under 10000 is "<<sum << std::endl;
    return 0;
}

