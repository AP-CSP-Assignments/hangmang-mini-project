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

std::vector<std::string> hint = {};    // Note that hint is globally available; we want it to be like this for this project

void getHint(std::string secret, std::string guessLetter)
{
    // Write code that changes values within the hint based on the secret
    // and based on the guess letter.  Use the hint from above.
}


int main()
{
    std::vector<std::string> wordList = {
        "Education",
        "Solution",
        "Mountain",
        "Platinum",
        "Alphabet",
        "Necklace",
        "Elevator",
        "Diamonds",
        "Fragrant",
        "Velocity",
        "Graduate",
        "Nebraska",
        "Tropical",
        "Evidence",
        "Involved",
        "Shopping",
        "Baseball",
        "Kangaroo",
        "Horrible",
        "Animals"
    };
    srand(time(0));
    
    std::string answer = wordList[rand() % length(wordList)];
    std::string guess;
    int lives = 10;

    std::cout << "Welcome to Hangman!\n";
    
    while (true)    // update this condition to run when the game should be played
    {
        std::cout << "\nEnter your guess: ";
        std::cin >> guess;

        getHint(answer, guess);
        display(hint);
        lives = lives - 1;

        // TODO: Write code below that asks you whether you want to guess the word
        // and allow the user to guess the word
        std::cout << "Would you like to guess the word (y/n)?\n";
        
    }

    std::cout << "Some winning or losing message here";
    return 0;
}
