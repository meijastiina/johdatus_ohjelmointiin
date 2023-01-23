/*
 * Johdatus ohjelmointiin / Viikkotehtävät 2 - 4 Monthly Shopping
 * Tee C-kielinen ohjelma, joka kysyy käyttäjältä kuukauden ostosten euromäärän.
 *  Jos ostosten yhteissumma on alle 100€, saat alennusta ostoista 10%
 *  Jos ostosten yhteissumma on alle 300€, saat alennusta 15%
 *  Jos ostosten yhteissumma on alle 500€, saat alennusta 20%,
 *  muussa tapauksessa alennus on 25%.
 *  Laske ja tulosta ostosten lopullinen summa.
 *  Tulostusesimerkki:
 *      Olet ostanut tässä kuussa ___€:lla ja saat niistä alennusta__%.
 *      Ostosten lopullinen summa on __€.
 *
 */
#include <stdio.h>

int main()
{
    // Create a variable for monthly total, discount percent and discounted price.
    float monthlyTotal, discountPercent, discountedPrice;
    // Prompt user for a monthly total
    printf("\nPlease enter monthly total in euros: ");
    // Read user input
    scanf("%f", &monthlyTotal);
    // Check for discount percent based on monthly total
    if ( monthlyTotal < 100 )
    {
        discountPercent = 10;
    }
    else if ( monthlyTotal < 300 )
    {
        discountPercent = 15;
    }
    else if ( monthlyTotal < 500 )
    {
        discountPercent = 20;
    }
    else
    {
        discountPercent = 25;
    }
    // Calculate discounted price.
    // Formula discounted price = original price - (original price * discount / 100)
    discountedPrice = monthlyTotal - ( monthlyTotal * discountPercent / 100 );
    // Print out
    // %.2f defines two decimals
    // To print out a percentage sign, you need to escape it with a percent sign.
    printf("\nYou spent a total of %.2f euros this month. You get a %.2f%% discount. Discounted price is %.2f euros.\n", monthlyTotal, discountPercent, discountedPrice );
    return 0;
}
