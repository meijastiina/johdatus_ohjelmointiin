/* Johdatus ohjelmointiin / Viikkotehtävä 4 - 6 circumference
 * Tee ohjelma joka tulostaa käyttäjälle seuraavan valikon, jossa on kolme vaihtoehtoa:
 *  1. Neliön kehän pituus
 *  2. Ympyrän kehän pituus
 *  9. Lopetus.
 *  Käyttäjä voi valita halutun toiminnan syöttämällä 1,2 tai 9.
 *
 *  Valinta 1 saa aikaan nelioLasku()- funktion kutsun,
 *  valinta 2 saa aikaan ympyraLasku()- funktion kutsun.
 *
 *  Em. funktioissa lasketaan ja tulostetaan neliön ja ympyrän kehän pituudet.
 *  Ympyrän kehä lasketaan kaavalla 2*3.14*ympyränSäde.
 *  Neliön kehä lasketaan kaavalla kehänPituus=4*sivunPituus.
 *  Muista kysyä funktioissa käyttäjältä tarvittaessa ympyrän säde ja neliön sivun pituus.
 *  Aina kehänpituuden laskennan ja tulostuksen jälkeen valikko tulostetaan näytölle uudelleen.
 *  Valinta 9 lopettaa ohjelman. (Käytä while-toistorakennetta)
 */
#include <stdio.h>


/* Main function
 * Parameters: -
 * Return value: int
*/
int main()
{
    // Function prototypes
    void perimeterOfSquare();
    void circumferenceOfCircle();
    // Create variable for menu choice
    int choice = 0;
    // Keep printing the menu till user wants to quit
    while ( choice != 9 ) {
        // Print menu
        printf("\n1. Perimeter of a square");
        printf("\n2. Circumference of a circle");
        printf("\n9. Quit\n");
        // Read user choice
        scanf("%d", &choice);
        switch (choice){
            case 1:{
                perimeterOfSquare();
                break;
            }
            case 2:{
                circumferenceOfCircle();
                break;
            }
            case 9: {
                break;
            }
            default: {
                printf("\nInvalid choice");
            }

        }

    }
    // Main function returns zero
    return 0;
}
/* Function circumferenceOfSquare
 * Parameters: -
 * Return value: -
 */
void perimeterOfSquare()
{
    // Create variable for a side
    float side;
    // Prompt for side
    printf("\nSide: ");
    // Read input
    scanf("%f", &side);
    // Calculate perimeter and print it out
    // Formula: perimeter = side * 4
    printf("\nPerimeter of the square is %.2f\n", side * 4);
}
/* Function circumferenceOfCircle
 * Parameters: -
 * Return value: -
 */
void circumferenceOfCircle()
{
    // Create variable for a radius
    float radius;
    // Prompt for radius
    printf("\nRadius: ");
    // Read input
    scanf("%f", &radius);
    // Calculate circumference and print it out
    // Formula: circumference = 2 * 3.14 * radius
    printf("\nCircumference of the circle is %.2f\n", 2 * 3.14 * radius);
}
