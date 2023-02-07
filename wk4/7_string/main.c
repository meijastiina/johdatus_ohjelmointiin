/* Johdatus ohjelmointiin / Viikkotehtävä 4 - 7 string
 * 7. Tee ohjelma, jossa välität funktioon merkkijonon (merkkitaulukon),
 * joka on määritelty paikalliseksi (ei globaali) muuttujaksi.
 * Funktiossa tämä merkkijono tulostetaan näytölle.
*/
#include <stdio.h>

int main()
{
    // Function prototypes
    void printString(char*);
    // Create string variable
    char string[] = "test";
    // function call
    printString(string);
    return 0;
}

/* Function printString()
 * Parameters: char string - string to be printed
 * Return value: void
 */
void printString(char *string ) {
    // Print string
    printf("\nString; %s\n", string);
}
