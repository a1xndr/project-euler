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


int main(int argc, char* argv[])
{
    int yy=1900;
    int mm=1;
    int dd=1;
    int index=1;
    int count=0;
    while(true)
    {
        index=(index+1)%7;
        dd++;
        if((mm==4 || mm==6 ||mm==8 ||mm==11) && dd==31)
        {
            dd=1;
            mm=mm+1;
        }
        else if(mm==2 && yy%4==0 && yy%400!=0 && dd==30)
        {
            dd=1;
            mm=mm+1;
        }
        else if(mm==2 && dd==29)
        {
            dd=1;
            mm=mm+1;
        }
        else if(dd==32)
        {
            dd=1;
            mm=mm+1;
        }
        if(mm==13)
        {
            mm=1;
            yy++;
        }
        if(index==0 && dd==1 && yy>=1901)
        {
            std::cout<<yy<<"/"<<mm<<"/"<<dd<<std::endl;
            count++;
        }
        if(yy==2000 && dd==31 && mm==12)
        {
            std::cout<<"Total:"<< count <<std::endl;
        }
        if(yy==2016)return 0;
    }
}

