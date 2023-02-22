/* Johdatus ohjelmointiin / Viikkotehtävä 6.2 Replace Commas
 * Luo jollain editorilla (esim. Notepad) tiedosto nimeltään source.txt jossa seuraavat tiedot
 *  Matti, Mainio, Oulu, 28
 *  Jussi, Jonio, Turku, 32
 *  Liisa, Joki, Tampere, 24
 *  Aino, Virta, Oulu, 23
 *  Liisa, Joki, Tamprere, 28
 * Kirjoita sitten ohjelma, joka lukee tiedostoa ja kirjoittaa uuden tiedoston nimeltään target.txt, jossa
 * kaikki pilkut on korvattu puolipisteellä.
*/
#include <stdio.h>

int main()
{
    // Create constant for filepaths
    const char SOURCE_FILE[] = "c:/tmp/source.txt";
    const char TARGET_FILE[] = "c:/tmp/target.txt";
    // Create variable for a character read
    char readCharacter;
    // Open source file in read mode
    FILE *sourceFilePointer = fopen(SOURCE_FILE, "r");
    // Open target file in write mode
    FILE *targetFilePointer = fopen(TARGET_FILE, "w");
    // Read one charachter at a time till EOF is reached
    while((readCharacter = fgetc(sourceFilePointer)) != EOF)
    {
        // Check if read charachter is a comma
        if ( readCharacter == ',')
        {
            // Comma read -> replace by semicolon
            fputc(';', targetFilePointer);
        }
        else
        {
            // Not a comma -> write read charachter into the target file
            fputc(readCharacter, targetFilePointer);
        }
    }
    // Close files
    fclose(sourceFilePointer);
    fclose(targetFilePointer);
    return 0;
}
