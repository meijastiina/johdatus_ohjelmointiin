/*
 * Johdatus ohjelmointiin viikkotehtävä 3 - 3 Secret Number
 * Luo sovellus joka:
 *  • Kysyy käyttäjältä salanumeron
 *  • Jos salanumero on 17, sovellus onnittelee käyttäjää onnistuneesta valinnasta ja ohjelma päättyy
 *  Jos käyttäjän syöttämä numero ei ole 17, sovellus kysyy numeroa uudestaan.
 *  (Käytä while tai do-while -toistorakennetta)
*/
#include <stdio.h>

int main()
{
    // Variable for secret number
    int secretNumber;
    // Repeat for as long as user's input is not 17
    do {
        // Prompt for secret number
        printf("\nSecret number: ");
        // Read given number
        scanf("%d", &secretNumber);
        // Check if given number is 17
        if ( secretNumber == 17 ) {
            // Congratulate user for right number
            printf("Good choice! Congratulations!\n\n");
        }
    } while ( secretNumber != 17 );
    return 0;
}
