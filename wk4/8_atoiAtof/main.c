/* Johdatus ohjelmointiin / Viikkotehtävä 4 - 8 atoiAtof
 * Tee ohjelma, joka
 *  lukee käyttäjän syöttämän kokonaisluvun (int) ja
 *  desimaaliluvun (double)char-taulukkoon.
 *  Sitten ohjelma summaa luvut ja tulostaa näyttöön.
 *  (Käytä <stdlib.h> kirjaston atoi()- ja atof()-funktioita,
 *  jotka muuttavat merkkijonon luvuksi
 *      int luku=atoi(merkkijono); //muuntaa merkkijonon kokonaisluvuksi
 *      double luku2=atof(merkkijono); //muuntaa merkkijonon double luvuksi)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Create variables
    char integerInput[10];
    char doubleInput[10];
    // Prompt for input
    printf("\nEnter an integer: ");
    // Input is read as a char array
    fflush(stdin);
    scanf("%s", integerInput);
    // Prompt for input
    printf("\nEnter a double: ");
    // Input is read as a char array
    fflush(stdin);
    scanf("%s", doubleInput);
    // Print out the sum of the given numbers
    // conversion from string to numeric is needed to be able to do calculations
    printf("\nSum of the numbers is %.2f", atoi(integerInput) + atof(doubleInput));
    return 0;
}
