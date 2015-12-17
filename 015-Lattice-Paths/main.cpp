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
#include <stdint.h>
#include <iostream>
#include <cmath>


struct node
{
    int val;
    node *left;
    node *right;
};


uint64_t factorial(uint64_t a)
{
    if(a==1)return 1;
    return a*factorial(a-1);
}

uint64_t choose(int a, int b)
{
    return factorial(a)/(factorial(b)*factorial(a-b));
}

int main(int argc, char* argv[])
{
    for(int i=1; i<50; i++)
    {
        std::cout << "factorial of " << i <<"= " << factorial(i)<<std::endl;
    }
    std::cout << "Total number of paths: " << choose(28,14) << std::endl;
}

