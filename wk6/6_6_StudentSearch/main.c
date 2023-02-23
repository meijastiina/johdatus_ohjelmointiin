/* Johdatus ohjelmointiin / Viikkotehtävä 6.6 Student search
 * Kirjoita ohjelma, joka kysyy käyttäjältä opiskelijan ID:n.
 * Sitten ohjelma etsii tiedostosta c:/temp/students_data.txt
 * annettua ID:tä vastaavan opiskelijan tiedot ruudulle, jos annettua id:tä
 * ei löydy, tulosta teksti ”Antamaasi id:tä ei löydy”.
 * OHJE:
 *  - Tee silmukka, jota suoritetaan niin kauan kuin tiedostossa on merkkejä
 *  - Lue tiedostosta funktiolla fscanf rivin ensimmäinen ”sana” kokonaislukumuuttujaan id
 *  - Lue sitten fgets-funcktiolla loppurivi merkkitaulukkoon data
 *  - Tutki sitten if-lauseella vastaako luettu id käyttäjän antamaa arvoa
 *  - Jos vastaa tulosta data ja lopeta silmukka break-komennolla.
 *  - Mieti itse kuinka toteutetaan osio, kun id:tä ei löydy
 */

#include <stdio.h>

int main() {
    // Create constant for file name
    const char FILE_NAME[] = "c:/tmp/students_data.txt";
    int IDtoSearch, id, found = 0;
    char data[100];

    // Prompt the user for a student ID
    printf("Enter the student ID: ");
    scanf("%d", &IDtoSearch);

    // Open the file for reading
    FILE *filePointer = fopen(FILE_NAME, "r");

    // Search for the student with the given ID in the file
    while (fscanf(filePointer, "%d", &id) != EOF) {
        fgets(data, 100, filePointer );
        if (id == IDtoSearch) {
            printf("%s\n", data);
            found = 1;
            break;
        }
    }

    // If the ID is not found, print an error message
    if (!found) {
        printf("The given ID was not found\n");
    }

    // Close the file
    fclose(filePointer );

    return 0;
}
