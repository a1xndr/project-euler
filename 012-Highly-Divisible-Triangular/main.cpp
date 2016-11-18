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
#include <map>
long multiple=600851475143;

long num_factors(long num)
{
    if(map[num])return map[num];
    for(int i=2; i<num/2 +1 ;i++)
    {
        if(num%i)
        {

        }
    }
}
int main(int argc, char* argv[])
{
    map<long, int> facts;
    long tri=0;
    long step=0;
    while(true)
    {
        map<long, bool> facts;
        step++;
        tri=(1.0+step)*(step/2.0);

        std::cout << tri << " has " << num_factors(tri) << 
                " factors." <<std::endl;
        if(step==7)return 0;
    }
    
    return 0;
}

