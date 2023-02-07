/* Johdatus ohjelmointiin / Viikkotehtävä 4.5 comparison
 * Tee ohjelma, jossa on funktio vertaile() johon viedään kaksi kokonaislukua.
 * Tämä funktio vertailee niiden suuruutta ja tulostaa ne suuruusjärjestyksessä näytölle (suurin ensin).
*/
#include <stdio.h>

int main()
{
    // function prototype
    void compare(int, int);
    // function call
    compare(13, 5);
    return 0;
}
/* Function compare
 * Parameters:      int number1 - first number to be compared
 *                  int number2 - second number to be compared
 * Return value:    void
*/
void compare(int number1, int number2)
{
    if ( number1 < number2 ) {
        // number1 is less than number2
        // print
        printf("\n%d, %d", number2, number1);
    }
    else
    {
        // number2 is less than number1
        // print
        printf("\n%d, %d", number1, number2);
    }
}
