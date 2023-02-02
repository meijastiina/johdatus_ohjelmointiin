/*
 * Johdatus ohjelmointiin / Viikkotehtävät 3 - 2 Name
 * Tee C-kielinen ohjelma joka lukee kysyy käyttäjän nimen ja sen montako kertaa se tulostetaan näytölle. Sitten tulostaa nimen näytölle em. kertaa. Tee ratkaisu
 *  a) while toistolla
 *  b) do-while toistolla
 *  c) for-toistolla
 * (HUOM! voit tehdä, jos haluat a)-c) kohdat samaan ohjelmaan peräkkäin näin sinun ei tarvitse tehdä kolmea erillistä ohjelmaa)

*/
#include <stdio.h>

int main()
{
    // Create variables for name, number of repetitions and iterator
    char name[30];
    int repetitions;
    int i = 0;
    // Prompt for user name
    printf("\nName: ");
    // Read name
    scanf("%s", name);
    // Prompt for repetitions
    printf("Repetitions: ");
    // Read repetitions
    scanf("%d", &repetitions);
    // with while
    // Print out heading
    printf("-- Name (%s) printed %d times with while --", name, repetitions);
    while ( i < repetitions ) {
        // Print out the name
        printf("\n%s", name);
        // Increment
        i++;
    }
    // with do..while
    // Print out heading
    printf("\n-- Name (%s) printed %d times with do..while --", name, repetitions);
    // reset iterator
    i = 0;
    do {
        // Print out the name
        printf("\n%s", name);
        // Increment
        i++;
    } while ( i < repetitions );
    // with for
    // Print out heading
    printf("\n-- Name (%s) printed %d times with for --", name, repetitions);
    for ( i = 0; i < repetitions; i++ ) {
        // Print out the name
        printf("\n%s", name);
    }
    return 0;
}
