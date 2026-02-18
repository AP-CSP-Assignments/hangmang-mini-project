import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        // Create your main project here
        /** TO DO: Create a list of words for hangman.
         * Unless you have done the extension in which
         * you allow words of different length, your
         * list of words should all contain 8 letter words.
         * This can be generated with AI.
         */
        String[] secretWords = /* replace this with your list of words */;

        // hint can be changed to type ArrayList<Character>, ArrayList<String>, or String[]
        char[] hint = {'_', '_', '_', '_', '_', '_', '_', '_'};
        int numLives = 10

        // TO DO: Create a random integer between 0 and the length of the secretWords list
        Random r = new Random();
        int randNum = /* replace this code */;

        // TO DO: Using your random integer, get a random secret word from the secretWords list
        String secretWord = /* replace this code */;


        // TO DO: Fill in the while loop so that the game continues as long as the user has not won yet
        // The user wins when the hint is equal to the secretWord and when the
        // number of lives is still greater than 0
        // Make sure you split the secret word to a character array using
        // secretWord.toCharArray(), and then test for equality by doing
        // Array.equals(hint, secretWord.toCharArray())
        Scanner sc = new Scanner(System.in);
        while ()
        {
            // TO DO: Prompt the user for a letter
            // Use sc.nextChar();

            // TO DO: Create an if-statement.  If the user entered a correct guess,
            // then update the hint.  Otherwise, reduce the number of lives by 1


        }

        // Once you get here, the user has either won or lost
        // TO DO: Write a different message depending on whether they won or lost

    }

    /** TO DO: Create a procedure named
     * isCorrectGuess(secretWord, guessLetter) that
     * returns true if the guessLetter is found in
     * the secretWord, and false otherwise
     */
    // Note: guessLetter can be of type String
    // Use guessLetter.equals(otherLetter) to compare for equality in this case
    public static boolean isCorrectGuess(String secretWord, char guessLetter)
    {
        // Use secretWord.charAt() to get individual characters in the String
        return false;
    }


    /** TO DO:Create a procedure named updateHint(hint, secretWord, guessLetter)
     * The parameters are
     *  hint        A list of strings.  Each element is a '_' or a letter.
     *  secretWord  The secret word for the game.
     *  guessLetter A single letter that the user guessed.
     * The procedure should replace every element in the hint with the
     * letter at the same position (index) that the guessLetter is
     * found in the secretWord.
     */

    // Note: hint can be of type String[], ArrayList<String>, or ArrayList<Character>
    // Note: guessLetter can be of type String; use guessLetter.equals(otherString) to compare
    // the guessLetter to other letters in this case
    public static void updateHint(char[] hint, String secretWord, char guessLetter)
    {

    }
}