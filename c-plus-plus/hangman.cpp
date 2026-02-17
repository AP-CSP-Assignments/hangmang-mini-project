/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

bool getHint(std::vector<std::string> &hint, std::string secret, char guessLetter)
{
    // TODO: Write code that updates the hint based on the secret
    // and based on the guess letter.  Use the hint from above.

    // The procedure should return true if the letter was in the word,
    // and return false if the letter was not in the word.
    return false;
}


int main()
{
    srand(time(0)); // seeding the random number generator

    std::vector<std::string> hint = std::vector<std::string>(8, "_");

    // Creating a word bank
    std::vector<std::string> wordList = {
        "education",
        "solution",
        "mountain",
        "platinum",
        "alphabet",
        "necklace",
        "elevator",
        "diamonds",
        "fragrant",
        "velocity",
        "graduate",
        "nebraska",
        "tropical",
        "evidence",
        "involved",
        "shopping",
        "baseball",
        "kangaroo",
        "horrible",
        "animals"
    };
    
    // answer is a random word from the word bank
    // TO DO: Create a random number between 0 and < LENGTH(wordList)
    int randNum = /* replace this code */ 0;

    // TO DO: Set the answer to a random element of the wordList using randNum
    std::string answer = /* replace this code */ "";
    
    char letterGuess;
    std::string wordGuess = "";
    int lives = 10;

    std::cout << "Welcome to Hangman!\n";
    
    while (true)    // TO DO: update this condition to run when the game should be played
    {
        std::cout << "\nEnter your guess: ";
        std::cin >> letterGuess;
        
        // TO DO: Write code that displays the hint; you can either manually display or use the
        // custom display procedure that I wrote for you


        // TO DO: Display hangman person if applicable; or you can display the number of lives left


        // TO DO: Using the getHint procedure, write an if-statement that checks if the guess letter
        // is in the answer, and if it is not, then reduce the number of lives by 1
        
        
        // TODO: Write code below that asks you whether you want to guess the word
        // and allow the user to guess the word using the variable wordGuess
        std::cout << "Would you like to guess the word (y/n)?\n";
        
    }

    std::cout << "The answer was: " << answer << std::endl;
    return 0;
}
