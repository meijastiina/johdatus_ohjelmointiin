/* Johdatus ohjelmointiin / Viikkotehtävä 5 - 1 SimpleCar
 * Kirjoita ohjelma, -jossa on tietue nimeltään Car, jossa seuraavat kentät:
 *  • brand CHAR(20)
 *  • model CHAR(50)
 *  • yearModel INT
 * -luo Car-tyyppinen muuttuja nimeltään car_1
 * -lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot
 * -lisää koodi, jolla tulostetaan car_1:n tiedot
*/
#include <stdio.h>

/* Create a struct car with the following members:
 *  • brand CHAR(20)
 *  • model CHAR(50)
 *  • yearModel INT
 */
typedef struct Car {
    char brand[20];
    char model[50];
    int yearModel;
} car;

int main()
{
    // Create Car variable car_1
    car car_1;
    // Ask info about car_1
    printf("Brand:\n");
    scanf("%s", car_1.brand);
    printf("Model:\n");
    scanf("%s", car_1.model);
    printf("Year Model:\n");
    scanf("%d", &car_1.yearModel);
    // Print out car_1 info
    printf("Brand: %s\n", car_1.brand);
    printf("Model: %s\n", car_1.model);
    printf("Year Model: %d\n", car_1.yearModel);
    return 0;
}
