/*
 * Johdatus ohjelmointiin
 * Viikkotehtävä 1 - 2 triangle
 * Tee C-kielinen ohjelma, joka laskee suorakulmaisen kolmion alan,
 * kun kanta=7m ja korkeus=4 m sekä tulostaa vastauksen.
 * Tulostusesimerkki:
 *  Kun kolmion kanta on 7m ja korkeus 4m, on kolmion ala 14m2.
*/
#include <stdio.h>

int main()
{
    // The formula to calculate the area of a right-angled triangle is A=base*height/2
    int base = 7, height = 4; // Variables: base 7 m, height 4 m
    int area = base * height / 2;

    printf("\nArea of a triangle is %d m2 when base is %d m and height is %d m.\n\n", area, base, height);
    return 0;
}
