/*
 * Johdatus ohjelmointiin / Viikkotehtävät 2 - 1 Less than Ten
 * Tee c-kielinen ohjelma, joka kysyy käyttäjältä kokonaisluvun. Jos käyttäjän antama
 * luku on pienempi kuin 10 saa käyttäjä ilmoituksen ”Annoit luvun, joka on
 * pienempi kuin 10”.
 *
 */

#include <stdio.h>

int main()
{
    // Create an integer variable for user input
    int givenNumber;
    // Prompt user for an integer
    printf("\nPlease enter an integer: ");
    // Read user input
    scanf("%d", &givenNumber);
    // If entered number is less than ten
    if ( givenNumber < 10 )
    {
        // Print out
        printf("\nEntered number is less than 10.\n\n");
    }
    return 0;
}
