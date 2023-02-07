/*
 * Johdatus ohjelmointiin / Viikkotehtävä 4 - 2 integer
 * Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä lue().
 * Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Anna kokonaisluku”.
 * Tässä aliohjelmassa luetaan myös kokonaisluku ja palautetaan se pääohjelmaan, joka tulostaa luvun näytölle.
*/
#include <stdio.h>

int main()
{
    int read();
    int number = read();
    printf("Entered number: %d\n", number);
    return 0;
}
int read()
{
    // Create variable
    int number;
    // Prompt for number
    printf("\nEnter integer: ");
    // Read input
    scanf("%d", &number);
    // Return given number
    return number;
}
