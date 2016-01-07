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
long num_factors(long num)
{
    int facts=0;
    for(int i=1; i<=num/2; i++)
    {
        if(num%i==0)facts++;
    }
    return facts;
}
int main(int argc, char* argv[])
{
    long tri=1;
    long step=2;
    while(true)
    {
        tri+=step;
        step++;
        std::cout<<std::endl<<"number:"<<tri<<std::endl;
        int num_facts=num_factors(tri);
        std::cout<<std::endl<<"number:"<<tri<<" has "<<num_facts <<" factors"<<std::endl;
        if(num_facts>=500)
        {
            std::cout<<std::endl<<"number:"<<tri<<" has "<<num_facts <<" factors"<<std::endl;
            break;
        }
    }
    
    return 0;
}

