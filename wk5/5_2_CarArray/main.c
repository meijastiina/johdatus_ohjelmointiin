/* Johdatus ohjelmointiin / Viikkotehtävä 5 - 2 CarArray
 * Kirjoita ohjelma, jossa on samanlainen tietue Car kuin edellä.
 * Luo Car-tyyppinen taulukko, johon voidaan tallentaa 3 alkiota.
 * Lisää koodi, jolla käyttäjältä kysellään kolmen auton tiedot ja ne tallennetaan em. taulukkoon.
 * Lisää koodi, jolla em. autojen tiedot tulostetaan ruudulle.
*/
#include <stdio.h>

typedef struct Car {
    char brand[20];
    char model[50];
    int yearModel;
} car;

int main()
{
    // Create an array for three cars
    car cars[3];
    // Repeat three times
    for ( int i = 0; i < 3; i++ )
    {
        // Ask info about all three cars
        printf("-- Info for the car%d --\n", i + 1);
        printf("Brand:\n");
        scanf("%s", cars[i].brand);
        printf("Model:\n");
        scanf("%s", cars[i].model);
        printf("Year Model:\n");
        scanf("%d", &cars[i].yearModel);
    }
    // Repeat three times
    for ( int i = 0; i < 3; i++ )
    {
        // Print out current car's info
        printf("-- Info for the car%d --\n", i + 1);
        printf("Brand: %s\n", cars[i].brand);
        printf("Model: %s\n", cars[i].model);
        printf("Year Model: %d\n", cars[i].yearModel);
    }
    return 0;
}
