/*
============================================================================
Name        : lotto.cpp
Author      : makowiec
Version     : 0.1
Copyright   : priv
Description : Losowaie liczb bez powtorzen
============================================================================
*/

#include "lotto.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int draw_now[ 10 ];

bool no_repeat ( int inumber, int tab[], int how_many )
{
    if( how_many <= 0 )
         return false;

    int i = 0;
    do
    {
    	if( tab[ i ] == inumber )
    	return true;
        i++;
    } while( i < how_many );
    return false;
}

int draw()
{
    return( rand() % 10 ) + 1;
}

int lotto()
{
    srand( time( 0 ) );

    int draw_out = 0;
    do
    {
        int number = draw();
        if( no_repeat( number, draw_now, draw_out ) == false )
        {
            draw_now[ draw_out ] = number;
            draw_out++;
        }
    } while( draw_out < 10 );
    return 0;
}
