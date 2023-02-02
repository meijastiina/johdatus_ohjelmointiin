/*
 * Johdatus ohjelmointiin / Viikkotehtävät 3-6 Circumference
 * Tee ohjelma joka tulostaa käyttäjälle seuraavan valikon, jossa on kolme vaihtoehtoa:
 *  1. Neliön kehän pituus
 *  2. Ympyrän kehän pituus
 *  9. Lopetus.
 *  Käyttäjä voi valita halutun toiminnan syöttämällä 1,2 tai 9.
 *  Valinta 1 saa aikaan tulostuksen ”Valittu Neliön kehän pituus”, valinta 2 saa aikaan
 *  tulostuksen ”Valittu Ympyrän kehän pituus”. Em. tulostuksien jälkeen valikko tulostetaan
 *  aina uudelleen. Valinta 9 lopettaa ohjelman. (Käytä while-toistorakennetta)
*/
#include <stdio.h>

int main()
{
    // Create variable for choice
    int choice = 0;
    // Keep looping for as long as 9 is not selected
    while ( choice != 9 ) {
        // Print out the menu
        printf("\n1. Circumference of a square");
        printf("\n2. Circumference of a circle");
        printf("\n9. Quit\n");
        // Read choice
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nCircumference of a square selected.\n");
            break;
        case 2:
            printf("\nCircumference of a circle selected.\n");
            break;
        default:
            break;
        }
    }

    return 0;
}
