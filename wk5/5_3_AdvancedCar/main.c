/* Johdatus ohjelmointiin / Viikkotehtävä 5 - 3 AdvancedCar
 * Kirjoita ohjelma, joka toimii kuten edellinen sovellus, mutta nyt kysytään viiden auton tiedot
 * autojen tietoja ei tulosteta ruudulle
 * kun autojen tiedot on annettu
 * käyttäjältä kysytään auton merkki(brand)
 * ja tulostetaan kaikki kyseisen merkin autojen tiedot.
 * Käyttäjältä kysellään merkkiä,
 * kunnes hän antaa merkiksi ”LOPETA”.
*/
#include <stdio.h>
#include <string.h> // This is needed for string comparison

typedef struct Car {
    char brand[20];
    char model[50];
    int yearModel;
} car;

int main()
{
    // Create an array for five cars
    car cars[5];
    char brand[20];
    // Repeat five times
    for ( int i = 0; i < 5; i++ )
    {
        // Ask info about all five cars
        printf("-- Info for the car%d --\n", i + 1);
        printf("Brand:\n");
        scanf("%s", cars[i].brand);
        printf("Model:\n");
        scanf("%s", cars[i].model);
        printf("Year Model:\n");
        scanf("%d", &cars[i].yearModel);
    }
    // Ask for a brand
    // Keep asking till user enters LOPETA
    do
    {
        printf("\n-- Search for a brand --\n");
        printf("Brand:\n");
        scanf("%s", brand);
        printf("-- %s --\n", brand);
        // Repeat five times
        for ( int i = 0; i < 5; i++ )
        {
            // If searched brand matches current car's brand
            if ( strcmp(brand, cars[i].brand) == 0 )
            {
                // Print out current car's info
                printf("Brand: %s\n", cars[i].brand);
                printf("Model: %s\n", cars[i].model);
                printf("Year Model: %d\n", cars[i].yearModel);
            }
        }
    } while ( strcmp(brand, "LOPETA") != 0); // Stop looping when user enters "LOPETA"
    return 0;
}
