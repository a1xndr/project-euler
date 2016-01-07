/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Largest product of neighbooring numbers in 20x20 grid
 *
 *        Version:  1.0
 *        Created:  01/07/2016 11:15:19 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <fstream>
#include <iostream>

int main(int argc, char* argv[])
{
    int grid[20][20];
    std::fstream myfile("grid.txt", std::ios_base::in);

    int a;
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        { 
            myfile >> a;
            grid[i][j]= a;
        }
    }
    int max_product=0;
    int r, c;
    enum directions{right, down, rdiag, ldiag};
    directions direction;
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            int product;
            if(j<=15)
            {
                product = grid[i][j]*grid[i][j+1]
                          *grid[i][j+2]*grid[i][j+3];
                if(product>max_product)
                {
                    r=i; c=j; direction=right; max_product=product;
                }
            }
            if(j<=15 && i<=15)
            {
                product = grid[i][j]*grid[i+1][j+1]
                          *grid[i+2][j+2]*grid[i+3][j+3];
                if(product>max_product)
                {
                    r=i; c=j; direction=rdiag; max_product=product;
                }
            }
            if(j>=3 && i<=15)
            {
                product = grid[i][j]*grid[i+1][j-1]
                          *grid[i+2][j-2]*grid[i+3][j-3];
                if(product>max_product)
                {
                    r=i; c=j; direction=ldiag; max_product=product;
                }
            }
            if(i<=15)
            {
                product = grid[i][j]*grid[i+1][j]
                          *grid[i+2][j]*grid[i+3][j];
                if(product>max_product)
                {
                    r=i; c=j; direction=down; max_product=product;
                }
            }
        }
    }
    std::cout<<"The maximum product we found is: " << max_product << 
        " at grid location: " <<r <<", " << c << "(number: " << grid[r][c] <<
         "). Direction code: " << direction << std::endl;
}
