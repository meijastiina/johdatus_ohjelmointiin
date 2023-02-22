/* Johdatus ohjelmointiin / Viikkotehtävä 5.1 Name
 * Kirjoita ohjelma, joka kysyy käyttäjän nimen ja tallentaa sen tiedostoon.
 */
#include <stdio.h>
#include <errno.h> // If we want to use error number


int main()
{
    // Define a constant (a value that cannot be changed)
    const char FILE_PATH[] = "c:/tmp/name.txt";

    // Ask for a name
    printf("\nName: ");
    // Create a variable for storing the given name
    char name[50];
    // Read given input into a variable
    scanf("%s", name);

    // Open a file in a write mode
    FILE *filePointer = fopen(FILE_PATH, "w");
    // Write into file
    if(fprintf(filePointer, "%s", name) >= 0)
    {
        printf("File succesfully updated.");
    } else {
        printf("Error in writing file (Error number: %d)", errno);
    }

    fclose(filePointer);
    return 0;
}
