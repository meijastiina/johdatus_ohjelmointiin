/*
 * Johdatus ohjelmointiin / Viikkotehtävä 2 - 2 Greater Number
 * Tee C-kielinen ohjelma, joka kysyy käyttäjältä kaksi lukua ja tulostaa niistä suuremman.
 * Tulostusesimerkki:
 * Annoit luvut __ ja __, joista __ on suurempi.
*/

#include <stdio.h>

int main()
{
    // Create variables for given numbers
    int number1, number2;
    // Prompt user for number 1
    printf("\nPlease enter number 1: ");
    // Read number1
    scanf("%d", &number1);
    // Prompt user for number 2
    printf("\nPlease enter number 2: ");
    // Read number2
    scanf("%d", &number2);
    // Check if number1 is greater than number2
    if ( number1 > number2 )
    {
        // Print out
        printf("\nYou gave numbers %d and %d, of which %d is greater.", number1, number2, number1);
    }
    // number1 is NOT greater than number2 -> number2 IS greater (or equal) to number1
    else
    {
        // Print out
        printf("\nYou gave numbers %d and %d, of which %d is greater.\n\n", number1, number2, number2);
    }
    return 0;
}
