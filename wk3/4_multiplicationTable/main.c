/*
 * Johdatus ohjelmointiin / Viikkotehtävä 3.4 Multiplication Table
 * Tee ohjelma, joka tulostaa käyttäjän syöttämän kokonaisluvun kymmenen kertotaulun eli, jos käyttäjä syöttää luvun 5 tulostuu seuraavaa:
 *  5*1=5
 *  5*2=10
 *  5*3=15
 *  …jne. 5*10=50 asti.
*/
#include <stdio.h>

int main()
{
    // Create variable for given number
    int givenNumber;
    // Prompt for a number
    printf("\nNumber: ");
    // Read input
    scanf("%d", &givenNumber);
    // Print out multiplication table for given number
    for ( int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", givenNumber, i, givenNumber * i );
    }
    return 0;
}
