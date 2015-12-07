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

const int seq_size=13;

int main(int argc, char* argv[])
{
    int numerals[seq_size];
    for(int i=0; i<seq_size; i++)
    {
        numerals[i]=-1;
    }
    long maxproduct=0;
    long product=1;
    char ch;
    fstream fin("large_number.txt");
    while(fin >> noskipws >> ch)
    {
        if(!isdigit(ch))continue;
        for(int i=1; i<seq_size; i++)
        {
            numerals[i-1]=numerals[i];
        }
        numerals[seq_size-1]=ch-'0';
        std::cout<<"numerals[ "<<seq_size-1<<"]= "<<numerals[seq_size-1]<<std::endl;
        product=1;
        for(int i=0; i<seq_size; i++)
        {
            if(numerals[i]==-1)continue;
            product*=numerals[i];
        }
        if(product>=maxproduct)maxproduct=product;
        std::cout<<"Product: "<<product <<std::endl;
    }
    std::cout<<"Max Product: "<<maxproduct <<std::endl;
}

