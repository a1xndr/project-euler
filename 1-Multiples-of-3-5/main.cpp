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

const int BELOW=1000;

int main(int argc, char* argv[])
{
    int sum=0;
    for(int i=0; i<1000; i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum+=i;
        }
    }
    std::cout<<"Sum: " << sum << std::endl;
    return 0;
}
