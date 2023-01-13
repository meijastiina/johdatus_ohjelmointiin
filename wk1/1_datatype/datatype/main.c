/*
 * Johdatus ohjelmointiin
 * Viikkotehtävä 1
 *
 * Kirjoita esimerkit muuttujan määrittelystä
 * kokonaislukuna, liukulukuna ja merkkitietona.
*/
#include <stdio.h> // stdio-kirjastoa tarvitaan tulostamiseen

int main() // Tästä alkaa pääohjelma
{
    // Muuttujan määrittely kokonaislukuna
    int myIntegerVariable = 1;
    // Muuttujan määrittely liukulukuna
    float myFloatVariable = 1.67;
    // Muuttuja merkkitietona
    char myCharVariable = 'm';
    // Tulostetaan vielä näytölle, vaikka tätä ei tehtävänannossa pyydetty
    printf("\nKokonaislukumuuttujan arvo on %d.", myIntegerVariable);
    printf("\nLiukulukumuuttujan arvo on %f.", myFloatVariable);
    printf("\nMerkkitietomuuttujan arvo on %c.\n\n", myCharVariable);
    return 0;
} // Pääohjelma päättyy tähän
