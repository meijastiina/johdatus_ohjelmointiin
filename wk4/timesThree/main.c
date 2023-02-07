/* Johdatus ohjelmointiin / Viikkotehtävä 4 - 4 timesThree
 * Tee ohjelma jossa on pääohjelma (main-funktio)
 * sekä yksi funktio eli aliohjelma, joka
 *  kysyy float-luvun käyttäjältä,
 *  kertoo luvun kolmella
 *  ja palauttaa tuloksen main()-funktiolle, jossa tulos tulostetaan näytölle.
*/
#include <stdio.h>

int main()
{
    // Function prototype
    float timesThree();
    // Function call, print out return value
    printf("\nResult: %.2f\n", timesThree());
    return 0;
}
/* Function timesThree
 * Parameters: -
 * Return value: result as a float
 */
float timesThree()
{
    // Create variable for input
    float input;
    // Prompt for a number
    printf("\nEnter float: ");
    // Read input
    scanf("%f", &input);
    // Return given number times three
    return input * 3;
}
