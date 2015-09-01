/*
============================================================================
Name : lotto.cpp
Author : makowiec
Version :
Copyright : priv
Description : Losowaie liczb bez powtorzen
============================================================================
*/

#include "lotto.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>



Lotto::Lotto()
{

}

Lotto::~Lotto()
{

}

bool bezPowtorzenia ( int iLiczba, int tab[], int ile )
{
    if( ile <= 0 )
         return false;

    int i = 0;
    do
    {
    	if( tab[ i ] == iLiczba )
    	return true;
        i++;
    } while( i < ile );
    return false;
}

int losowanie()
{
    return( rand() % 20 ) + 1;
}

int main()
{
    srand( time( 0 ) );
    int wylosowane[ 10 ];
    int wylosowanych = 0;
    do
    {
        int liczba = losowanie();
        if( bezPowtorzenia( liczba, wylosowane, wylosowanych ) == false )
        {
            wylosowane[ wylosowanych ] = liczba;
            wylosowanych++;
        }
    } while( wylosowanych < 10 );

    /*wylosowanych = 0;
    do
    {
        std::cout << wylosowane[ wylosowanych ] << std::endl;
        wylosowanych++;
    } while( wylosowanych < 10 );
	*/
    //return wylosowane[ wylosowanych ];
}
