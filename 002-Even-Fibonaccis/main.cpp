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

const int BELOW=4000000;

int main(int argc, char* argv[])
{
    int sum=0;
    int tmp=0;
    int fib1=1;
    int fib2=0;
    while(true)
    {
        tmp=fib1;
        fib1=fib1+fib2;
        fib2=tmp;
        std::cout<< fib1 << std::endl;
        if(fib1>=BELOW)break;
        if(fib1%2==0){
            std::cout<< "added" << std::endl;
            sum+=fib1;
        }
    }
    
    std::cout<<"Sum: " << sum << std::endl;
    return 0;
}
