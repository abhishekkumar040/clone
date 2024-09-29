import java.util.Scanner;
import java.util.Random;

public class GuesstheNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        int min = 1; 
        int max = 100; 
        int numberToGuess = random.nextInt(max - min + 1) + min; 
        int numberOfTries = 0;
        boolean hasGuessedCorrectly = false;

        System.out.println("Welcome to 'Guess the Number'!");
        System.out.println("I have selected a number between " + min + " and " + max + ".");
        System.out.println("Can you guess what it is?");

        
        while (!hasGuessedCorrectly) {
            System.out.print("Enter your guess: ");
            int playerGuess = scanner.nextInt();
            numberOfTries++;

            if (playerGuess < min || playerGuess > max) {
                System.out.println("Please guess a number between " + min + " and " + max + ".");
            } else if (playerGuess < numberToGuess) {
                System.out.println("Too low! Try again.");
            } else if (playerGuess > numberToGuess) {
                System.out.println("Too high! Try again.");
            } else {
                hasGuessedCorrectly = true;
                System.out.println("Congratulations! You've guessed the number " + numberToGuess + " in " + numberOfTries + " tries.");
            }
        }

        scanner.close();
    }
}
