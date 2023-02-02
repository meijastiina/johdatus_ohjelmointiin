/*
 * Johdatus ohjelmointiin viikkotehtävä 3 Toistolauseet / 1 Viisi kertaa sata
 * Tee C-kielinen ohjelma joka tulostaa luvun 100 viisi kertaa allekkain näytölle (muista rivinvaihto). Käytä toistorakennetta. Muuta tämän jälkeen ohjelmaa siten, että luvut (100) tulostuvat peräkäin vaakasuunnassa ja ne on erotettu toisistaan välilyönnillä. (Käytä whiletoistorakennetta)
 */
#include <stdio.h>

int main()
{
    // Create an iterator variable and set it to be initially zero
    int i = 0;
    // Loop for as long as i is less than 5
    while ( i < 5 ) {
        // Print out
        printf("100\n");
        // Increment the counter
        i++;
    }
    return 0;
}
