/*
 * Johdatus ohjelmointiin
 * Viikkotehtävä 1.2 CelsiusFahrenheit
 * Tee C-kielinen ohjelma, joka muuntaa antamasi lämpötilan (Celsius asteina) Farenheit -asteiksi.
 * Tulostusesimerkki: Antamasi lämpötila __ on Farenheit asteina __.
 *
 *
*/

#include <stdio.h> // stdio-kirjastoa tarvitaan tulostamiseen ja syötteen lukemiseen
#include <locale.h>

int main() // Pääohjelma alkaa
{
    setlocale (LC_ALL, "fi_FI.utf8");
    float temperatureInCelsius; // Muuttuja lämpötilan tallentamiseen celsius-asteina.
    printf("\nTemperature in celsius: "); // Pyydetään käyttäjää syöttämään lämpötila
    scanf("%f", &temperatureInCelsius); // Luetaan syöte ja tallennetaan se muuttujaan
    // To convert temperatures in degrees Celsius to Fahrenheit, multiply by 1.8 (or 9/5) and add 32.
    // Example: (30°C x 1.8) + 32 = 86°F’
    float temperatureInFahrenheit = ( temperatureInCelsius * 1.8 ) + 32;
    printf("\nEntered temperature %f Celsius equals %f Fahrenheit\n\n", temperatureInCelsius, temperatureInFahrenheit);
    return 0;
}
