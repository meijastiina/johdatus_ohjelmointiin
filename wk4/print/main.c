/*
 * Johdatus ohjelmointiin / Viikkotehtävät 4 - 1 print
 * Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä tulosta(). Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Hei maailma!”.
*/
#include <stdio.h>

int main()
{
    // Function prototype
    void print();
    // Function call
    print();
    return 0;
}

/*  Function print
    Arguments: none
    Return value: void
*/
void print() {
    printf("Hello world!");
}
