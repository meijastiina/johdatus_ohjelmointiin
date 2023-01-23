/*
 * Johdatus ohjelmointiin / Viikkotehtävä 2 - 3 Weekday
 * Tee C-kielinen ohjelma, joka kysyy käyttäjältä viikonpäivän numeron (1-7).
 * Numeron antamisen mukaan ohjelma tulostaa viikonpäivän. Jos käyttäjä antaa
 * muun numeron kuin 1-7, tulostuu käyttäjälle teksti ”Annoit sellaisen numeron,jolle
 * ei ole viikonpäivää”
*/
#include <stdio.h>

int main()
{
    // Create a variable for user input
    int weekday;
    // Prompt user for an input
    printf("\nEnter a number: ");
    // Read user input into a variable
    scanf("%d", &weekday);
    // Check for weekday
    switch( weekday ) {
        case 1: {
            printf("\nMonday\n");
            break;
        }
        case 2: {
            printf("\nTuesday\n");
            break;
        }
        case 3: {
            printf("\nWednesday\n");
            break;
        }
        case 4: {
            printf("\nThursday\n");
            break;
        }
        case 5: {
            printf("\nFriday\n");
            break;
        }
        case 6: {
            printf("\nSaturday\n");
            break;
        }
        case 7: {
            printf("\nSunday\n");
            break;
        }
        // Default branch for when weekday doesn't mach any case.
        default: {
            printf("\nYou entered an invalid number.\n");
        }

    }
    return 0;
}
