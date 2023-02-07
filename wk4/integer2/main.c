/* Johdatus ohjelmointiin / Viikkotehtävä 4 - 3 integer2
 * Muuta edellistä ohjelmaa siten, että lisäät siihen luvunTulostus() nimisen aliohjelman.
 * Tätä aliohjelmaa kutsutaan pääohjelmasta (sitten, kun luku on luettu) ja siihen välitetään luettu kokonaisluku.
 * luvunTulostus() aliohjelma tulostaa siihen välitetyn luvun näytölle.
*/
#include <stdio.h>

int main()
{
    // function prototype
    void printNumber(int);
    // Create variable
    int number;
    // Prompt for number
    printf("Number: ");
    // Read number
    scanf("%d", &number);
    // Call function
    printNumber(number);
    return 0;
}
/* Function printNumber
 * Parameters: int number - number to be printed
 * Return value: void
 */
void printNumber(int number) {
  printf("\nEntered number: %d\n", number);
}
