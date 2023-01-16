/*
 * Johdatus ohjelmointiin - Viikkotehtävä 1 - 3 array
 * Tee C-kielinen ohjelma, joka alustaa 3*3 kokoisen taulukon haluamillasi
 * kokonaisluvuilla. Taulukosta tulostetaan kolme lukua, niin että ensimmäisenä
 * tulostuu ensimmäisen rivin 3. luku, toisena tulostuu toisen rivin 2. luku ja viimeisenä
 * tulostuu kolmannen rivin 1. luku.
 * Tulostusesimerkki:
 *  Taulukon 1. rivin luku on __
 *  Taulukon 2. rivin luku on __
 *  Taulukon 3. rivin luku on __

*/
#include <stdio.h>

int main()
{
    // Create a 3*3 array with integer values
    int matrix[3][3] = {
        {1, 2, 3},
        {11, 22, 33},
        {111, 222, 333}
    };
    // Print third number of first row
    printf("\n%d", matrix[0][2]);
    // Print second number of second row
    printf("\n%d", matrix[1][1]);
    // Print first number of third row
    printf("\n%d", matrix[2][0]);
    return 0;
}
