/*
 * Johdatus ohjelmointiin / Viikkotehtävät 2 - 4 Monthly Shopping
 * Tee C-kielinen ohjelma, joka kysyy opiskelijan IDnumeron, nimen ja kolmen
 * osasuorituksen pistemäärän (0-100), sekä laskee niistä keskiarvon. Ohjelma
 * tulostaa tekstin, Kiitettävä, Hyvä, Välttävä, Hylätty -tekstin sen mukaan mikä
 * kolmen osasuorituksen keskiarvo on eli
 *  jos keskiarvo on suurempi tai yhtä suuri kuin 80, tulostuu arvosanatekstiksi
 *      Kiitettävä,
 *  jos taas keskiarvo on välillä 79-60, tulostuu arvosanatekstiksi
 *      Hyvä,
 *  jos keskiarvo on välillä 59-40, tulostuu arvosanatekstiksi
 *      Välttävä,
 *  jos keskiarvo on alle 40, tulostuu tekstiksi
 *      Hylätty.
 *  Tulostusesimerkki :
 *      IDnumero : 784
 *      Opiskelijan nimi : Mikko
 *      Osasuoritus1 : 70
 *      Osasuoritus2 : 80
 *      Osasuoritus3 : 90
 *      Pisteet yhteensä = 240
 *      Keskiarvo = 80.00
 *      Arvosanateksti = Kiitettävä
 *
 */
#include <stdio.h>

int main()
{
    // Create variables for ID, name, three scores and average
    char name[30], id[10];
    int scores[3];
    float average;
    // Prompt for id
    printf("\nID: ");
    // Read id
    scanf("%s", id);
    // Prompt for name
    printf("Name: ");
    // Read name
    scanf("%s", name);
    // Prompt for first score
    printf("Score1: ");
    // Read first score
    scanf("%d", &scores[0]);
    // Prompt for second score
    printf("Score2: ");
    // Read second score
    scanf("%d", &scores[1]);
    // Prompt for third score
    printf("Score3: ");
    // Read third score
    scanf("%d", &scores[2]);
    // Calculate average
    // Note: if we want the result to be a float, we need to cast scores to float as well.
    average = ( (float)scores[0] + (float)scores[1] + (float)scores[2] ) / 3;
    // Print student info
    // Let's use two decimals for average
    printf("\nId: %s\nName: %s\nScore1: %d\nScore2: %d\nScore3: %d\nTotal score = %d\nAverage = %.2f", id, name, scores[0], scores[1], scores[2], (scores[0] + scores[1] + scores[2]), average);
    // Check for grade
    if ( average >= 80 )
    {
        // average greater than or equal to 80 ->
        printf("\nGrade = excellent");
    }
    else if ( average >= 60 )
    {
        // average is 79-60
        printf("\nGrade = good");
    }
    else if ( average >= 40)
    {
        // average is 59-40
        printf("\nGrade = passable");
    }
    else {
        // average is below 40
        printf("\nGrade = fail");
    }
    printf("\n\n");
    return 0;
}
