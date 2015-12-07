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

int coin_stacks(int n, int max, int iter)
{
    if(max==0)return 0;
    if(n<=0){
        //std::cout<<std::endl;
        return 0;
    }
    //std::cout<<"---------"<<std::endl;
    //std::cout<<"itr: "<<iter<<std::endl;
    //std::cout<<"n  : "<<n<<std::endl;
    //std::cout<<"max: "<<max<<std::endl;
    int count=1;
    int stacksize=max;
    while(stacksize>0 && max>0)
    {
        for(int j=0; j<stacksize; j++)
        {
            //std::cout <<"o";
        }
            //std::cout <<"   ";
        //std::cout<<std::endl;
        stacksize--;
        //std::cout<<"ss : "<<stacksize<<std::endl;
        count+=coin_stacks(n-stacksize,stacksize, iter+1);
    }
    return count;
}

int main(int argc, char* argv[])
{
    int i=1;
    while(true){
    int j=coin_stacks(i,i,0);
    std::cout<<i<<": "<<j<<std::endl;
    if(j%1000000==0)
    {
    std::cout<<j<<std::endl;
    return 0;
    }
    i++;
    }
    return 0;
}

