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
#include <math.h>

bool is_palindrome(int num)
{
    int num_cpy=num;
    int num_digits=0;
    while(num_cpy!=0)
    {
        num_digits++;
        num_cpy /=10;
    }
    for(int i=1; i<=std::ceil(num_digits/2)+1; i++)
    {
        if((num%(int)pow(10,num_digits-i+1))/(int)pow(10,num_digits-i)!=num%(int)pow(10,i)/((int)pow(10,i-1)))return false;
    }
    return true;
}
int main(int argc, char* argv[])
{
    int max = 0;
    for(int i=999; i>99; i--){
        for(int j=i; j>99; j--)
        {
            if(is_palindrome(i*j)){
                std::cout<<i<<"x"<<j<<"= "<<i*j<< std::endl;
                if(i*j>max)max=i*j;
            }
        }
    }
    std::cout << "max is:" <<max <<std::endl;
    return 0;
}

