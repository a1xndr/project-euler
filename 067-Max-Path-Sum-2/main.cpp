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
#include <fstream>
#include <string> 
#include <sstream> 
#include <cmath>
#include <vector>


int sum_up_to(int n){
    return (n*(n+1))/2;
}

int main(int argc, char* argv[])
{
    std::string line;
    int levels=0;
    std::vector<int> triangle;
    std::ifstream myfile("triangle.txt");
    while(std::getline(myfile, line))
    {   
        levels++;
        std::stringstream stream(line);
        int n=0;
        while(stream>>n)
        {
            std::cout << n<< " " ;
            triangle.push_back(n);
        }
        std::cout << std::endl;
    }
    std::cout<< "#Levels:" << levels <<std::endl;
    int crunchlevel=levels-1;
    while(crunchlevel>0)
    {
        int level_start=sum_up_to(crunchlevel-1);
        for(int i=0; i<crunchlevel; i++)
        {
            /*  std::cout<< "for " << triangle[level_start+i] << " we look at " << 
        triangle[level_start+i+crunchlevel] << " and " <<
        triangle[level_start+i+crunchlevel+1] << std::endl;
            std::cout<< "level_start+i is "<<level_start+i <<std::endl;
            std::cout<< "crunchlevel is "<<crunchlevel <<std::endl;*/
            triangle[level_start+i]+=std::max( triangle[level_start+i+crunchlevel],
                                            triangle[level_start+i+crunchlevel+1]);

        }
        crunchlevel--;
    }
    crunchlevel=1;
    while(crunchlevel<=levels)
    {
        int level_start=sum_up_to(crunchlevel-1);
        for(int i=0; i<crunchlevel; i++)
        {
            std::cout << triangle[level_start+i] << " " ;
        }
        std::cout << std::endl;
        crunchlevel++;
    }
    std::cout << "Max Path sum is " << triangle[0] << std::endl;
}

