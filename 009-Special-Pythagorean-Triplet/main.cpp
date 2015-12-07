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

int main(int argc, char* argv[])
{
    for(int c=1; c<1000; c++)
    {
        for(int b=1; b<c; b++)
        {
            for(int a=1; a<b; a++)
            {
                if(a*a+b*b==c*c && a+b+c==1000){
                    std::cout<<"(a,b,c)=( "<<a<<", "<< b <<", "<<c<<")"<<std::endl<<"abc= "<<a*b*c<<std::endl;}
            }
        }
    }
}

