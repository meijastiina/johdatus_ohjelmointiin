/* Johdatus ohjelmointiin / Viikkotehtävä 6.3 Student
 * Kirjoita ohjelma,
 *  - jossa on tietue nimeltään Student, jossa seuraavat kentät:
 *      • id INT
 *      • name CHAR(50)
 *      • age INT
 *  - Luo Student-tyyppinen taulukko, johon voidaan tallentaa 5 alkiota.
 *  - Lisää koodi, jolla käyttäjältä kysellään viiden opiskelijan tiedot ja ne tallennetaan em. taulukkoon.
 *  - Lisää koodi, jolla em. opiskelijoiden tiedot tulostetaan ruudulle.
 */


#include <stdio.h>

// Define struct Student
typedef struct {
    int id;
    char name[50];
    int age;
} Student;

int main() {
    // Define constant for number of students
    const int NUMBER_OF_STUDENTS = 5;
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

    return 0;
}
