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
#include <string>
#include <queue>
#include <fstream>
using namespace std;

const int target=1000;

int coin_stacks(int n)
{
    if(n<=1)return 1; 
    return 1+coin_stacks(n-1);
}

int main(int argc, char* argv[])
{
    std::cout<<coin_stacks(5)<<std::endl;
    return 0;
}

