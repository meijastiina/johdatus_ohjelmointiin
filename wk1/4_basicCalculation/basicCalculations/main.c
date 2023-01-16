/*
 * Johdatus ohjelmointiin
 * Viikkotehtävä 1 - 4 Basic Calculations
 * Tee C-kielinen ohjelma, joka kysyy käyttäjältä kaksi kokonaislukua ja tulostaa ensin
 * syötetyt luvut, sitten niiden summan, erotuksen ja tulon kokonaislukuna omille
 * riveilleen sekä osamäärän desimaalilukuna kahden desimaalin tarkkuudella.
 * Tulostusesimerkki:
 *  Syötetyt luvut olivat __ ja __.
 *   Lukujen summa on __.
 *   Lukujen erotus __.
 *   Lukujen tulo __.
 *   Lukujen osamäärä __.
 */

#include <stdio.h>

int main()
{
    int integer1, integer2; // Integer variables 1 and 2 to store user input
    // Pyydä käyttäjältä kokonaisluku 1
    printf("\nEnter number1: ");
    // Lue käyttäjän syöttämä kokonaisluku 1
    scanf("%d", &integer1);
    // Pyydä käyttäjältä kokonaisluku 2
    printf("\nEnter number2: ");
    // Lue käyttäjän syöttämä kokonaisluku 2
    scanf("%d", &integer2);
    // Tulosta syötetyt luvut
    printf("\nYou entered numbers %d and %d.", integer1, integer2);
    // Tulosta summa kokonaislukuna
    printf("\nSum of numbers is %d.", integer1 + integer2);
    // Tulosta erotus kokonaislukuna
    printf("\nDifference of numbers is %d", integer1 - integer2);
    // Tulosta tulo kokonaislukuna
    printf("\nProduct of numbers is %d", integer1 * integer2);
    // Tulosta osamäärä desimaalilukuna
    // Jos jakolasku suoritetaan kahdella kokonaisluvulla, myös osamäärä on kokonaisluku
    // -> castataan jakaja ja jaettava liukuluvuiksi niin saadaan myös desimaaliosat osamäärään
    printf("\nQuotient of numbers is %.2f\n\n", (float)integer1 / (float)integer2);
    return 0;
}
