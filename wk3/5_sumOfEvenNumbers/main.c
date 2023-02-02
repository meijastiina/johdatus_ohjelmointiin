/*
 * Johdatus ohjelmointiin / Viikkotehtävä 3.5 Sum of Even Numbers
 * Tee ohjelma, joka lukee käyttäjältä kokonaisluvun.
 * Sitten ohjelma summaa tähän lukuun asti kaikkien parillisten lukujen arvot ja tulostaa summan näytölle.
 * (HUOM luku%2 jakojäännös on nolla parillisilla luvuilla)
 * (Jos käyttäjä syöttää luvun 8 niin ohjelma tulostaa luvun 20 (0+2+4+6+8)
*/
#include <stdio.h>

int main()
{
    // Create variable for givenNumber and sum
    int givenNumber, sum = 0;
    // Prompt for a number
    printf("\nNumber: ");
    // Read input
    scanf("%d", &givenNumber);
    // Loop starting from 0, till given number
    for ( int i = 0; i <= givenNumber; i++ ) {
        // If number at hand is even
        if ( i%2 == 0 ) {
            // add the number at hand to the sum
            sum += i;
        }
    }
    // Sum is ready -> print it out
    printf("\nSum is %d.\n", sum);
    return 0;
}
