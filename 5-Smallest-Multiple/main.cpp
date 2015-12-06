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
int factor(int num)
{
    std::cout<<"Factoring "<<num <<std::endl;
    for(long l=2; l<=std::ceil(num/2)+1; l++)
    {
        if(num%l==0)return l;
    }
    std::cout<<"Factor found: "<<num <<std::endl;
    return num;
}
int main(int argc, char* argv[])
{
    int factors[21];
    for(int i=0; i<=20;i++)
    {
        factors[i]=0;
    }
    int myfactors[21];
    for(int i=2; i<=20;i++)
    {
        for(int i=2; i<=20;i++)
        {
            myfactors[i]=0;
        }
        while(true)
        {
        int icpy=i;
        while(true)
        {
            int pfact = factor(icpy);
            if(pfact<=1)break; 
            std::cout<<"pfact: " << pfact << std::endl;
            myfactors[pfact]++;
            if(factors[pfact]<myfactors[pfact])factors[pfact]++;
            icpy/=pfact; 
            if(icpy<=1)break; 
        }
        break;
        }
    }
    long product=1;
    for(int i=2;i<=20;i++)
    {
        std::cout<<"factors["<<i<<"]="<<factors[i]<<std::endl;
        product*=pow(i,factors[i]);
    }
    
    std::cout<<"Smallest Multiple: " << product << std::endl;
    return 0;
}

