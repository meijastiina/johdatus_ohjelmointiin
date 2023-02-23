
/*
 * Johdatus ohjelmointiin / Viikkotehtävä 6.3 Word Count
 * Kirjoita ohjelma, joka laskee tiedostossa olevien sanojen ja rivien määrän.
 * Käytetään sääntönä, että sanojen erottimena toimii vain välilyönti.
*/

#include <stdio.h> // This is needed for reading files and printing on the screen
#include <stdbool.h> // This is need for boolean variables

int main(int argc, char *argv[]) {
    // Create constant for filename
    const char FILE_NAME[] = "c:/tmp/wordcount.txt";
    // Create variable for the file
    FILE *filePointer;
    // Create variables for word and line counts
    int wordCount = 0;
    int lineCount = 0;
    // Create a variable for read character
    int character;
    // Create a variable to keep track of whether current character is within a word
    // (this is needed to make sure empty lines are not counted as words)
    // set it to be false at first, since we're not yet within a word
    bool withinWord = false;
    // Open file for reading
    filePointer = fopen(FILE_NAME, "r");

    // If open fails
    if (filePointer == NULL) {
        // Show an error message and end program
        printf("Error opening file %s\n", FILE_NAME);
        return 1;
    } else
    {
        // File open ok
        // Count lines and words
        // Read one character at a time till EOF is reached
        while ((character = fgetc(filePointer)) != EOF) {
            // There is at least one character in the file -> at least one line, too
            if ( lineCount == 0 )
            {
                lineCount++;
            }

            // Check if character is something else than whitespace -> a word starts
            if (!(character == ' ' || character == '\n' ))
            {
                withinWord = true; // A word has started ->set this to be true
            }
            // Check if character is a space or a newline
            if ((character == ' ' || character == '\n') && withinWord )
            {
                wordCount++;
            }
            // Check if character is a newline
            if (character == '\n')
            {
                // if it is -> increase line count
                lineCount++;
                // new line starts -> we're not within a word -> set this to be false
                withinWord = false;
            }
        }
        // Check if last character is a word
        if ( withinWord )
        {
            wordCount++;
        }
        printf("File %s has %d lines and %d words.\n", FILE_NAME, lineCount, wordCount);

        // Close file
        fclose(filePointer);

        return 0;
    }
}
