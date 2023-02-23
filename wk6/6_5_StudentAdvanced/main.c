/* Johdatus ohjelmointiin / Viikkotehtävä 6.5 Student Advanced
 * 5. Kirjoita ohjelma, joka toimii kuten edellinen sovellus, mutta lopuksi ohjelma kysyy:
 *  • Haluatko tallentaa tiedot (Kyllä=1 /Ei=2)?
 *  • Jos käyttäjä vastaa 1(eli Kyllä), tiedot kirjoitetaan tiedostoon nimeltä c:/temp/students_data.txt
 *  siten, että:
 *      • Kunkin opiskelijan tiedot kirjoitetaan omalle rivilleen
 *      • kenttien väliin tulee pilkku
 *      • Tarkista esim. Notepadillä, että tiedoston muoto on oikein
 *
 */

#include <stdio.h>

// Define struct Student
typedef struct {
    int id;
    char name[50];
    int age;
} Student;

int main() {
    // Define constant for number of students and filename
    const int NUMBER_OF_STUDENTS = 5;
    const char FILE_NAME[] = "c:/tmp/students_data.txt";
    // Let's create student array
    Student students[NUMBER_OF_STUDENTS];

    // Loop five times
    // Prompt for student info
    for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
        printf("Please enter details for student %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("\n");
    }

    // Print out student details
    printf("-- Student details --\n");
    for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }

    // Ask user if they want to save student details in a file
    int saveToFile;
    printf("Do you want to save student details in a file? (Yes=1 / No=2) ");
    scanf("%d", &saveToFile);

    // If user wants to safe
    if (saveToFile == 1) {
        // Open a file in a write mode
        FILE *file = fopen(FILE_NAME, "w");
        if (file == NULL) {
            // If there was an error in opening the file -> show an error message and terminate program
            printf("File open failed\n");
            return 1;
        } else {
            // Write student details in the file
            for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
                fprintf(file, "%d,%s,%d\n", students[i].id, students[i].name, students[i].age);
            }

            // Close file
            fclose(file);

            printf("Student details saved in a file %s\n", FILE_NAME);
        }
    }

    return 0;
}
