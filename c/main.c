// Starter code created by converting Java starter code (human written) into C code
// Using Gemini Pro.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> // Necessary to use 'bool', 'true', and 'false'
#include <time.h>    // Necessary for seeding the random number generator

// Function Prototypes (Declarations)
// These tell the compiler these functions exist, so we can use them in main()
bool isCorrectGuess(const char *secretWord, char guessLetter);
void updateHint(char *hint, const char *secretWord, char guessLetter);

int main() {
    // Seed the random number generator using the current time
    srand(time(NULL));

    // TO DO: Create a list of words for hangman.
    // In C, an array of strings is represented as an array of char pointers.
    // Note: To match the 8-letter constraint, ensure your strings are 8 chars long.
    const char *secretWords[] = {
        /* replace this with your list of words inside quotes, e.g., "elephant", "computer" */
    };

    // Calculate the number of words in the array automatically
    int numWords = sizeof(secretWords) / sizeof(secretWords[0]);

    // hint array.
    // CRITICAL: C strings must end with a null terminator '\0'.
    // An 8-letter word needs an array of size 9.
    // We initialize it with 8 underscores and the compiler adds the \0 automatically.
    char hint[] = "________"; 
    
    int numLives = 10;

    // TO DO: Create a random integer between 0 and the length of the secretWords list
    // Use rand() % n to get a number between 0 and n-1
    int randNum = /* replace this code */;

    // TO DO: Using your random integer, get a random secret word from the secretWords list
    const char *secretWord = /* replace this code */;

    // Used to store user input
    char guessLetter;

    // TO DO: Fill in the while loop so that the game continues as long as the user has not won yet
    // The user wins when the hint is equal to the secretWord (use strcmp(a, b) == 0)
    // and when the number of lives is still greater than 0.
    while (/* condition */) {

        // TO DO: Prompt the user for a letter
        
        // Hint: According to Gemini - Use scanf(" %c")
        // The space before %c tells scanf to skip whitespace (like 'Enter' keys)
        scanf(" %c", &guessLetter);

        // TO DO: Create an if-statement.
        // If isCorrectGuess returns true, update the hint.
        // Otherwise, reduce lives by 1.

    }

    // Once you get here, the user has either won or lost
    // TO DO: Write a different message depending on whether they won or lost
    // Use strcmp(hint, secretWord) == 0 to check for a win.

    return 0;
}

/** TO DO: Create a function named isCorrectGuess
 * Returns true if the guessLetter is found in the secretWord.
 * C Strings are just arrays of characters, so you can loop through them.
 */
bool isCorrectGuess(const char *secretWord, char guessLetter) {
    // You can find the length of the string using strlen(secretWord)
    return false;
}

/** TO DO: Create a function named updateHint
 * The parameters are:
 * hint: A modifiable character array (string).
 * secretWord: The read-only secret word string.
 * guessLetter: The character guessed.
 * * The function should replace underscores in 'hint' with 'guessLetter'
 * where appropriate.
 */
void updateHint(char *hint, const char *secretWord, char guessLetter) {
    // Implementation here
}