#include <stdio.h> // standard input and output
#include <stdlib.h> // standard library
#include <time.h> // access to time, manip for rng seed
#include <string.h> // allows for strcmp, strlen, etc.
#include <ctype.h> // can convert upper case to lower and vice versa

char userGuess[6]; 
int correctGuess;
char *wordList[] = { // pointer explanation - insert here
   "hello",
   "sweat",
   "kiosk",
   "avail",
   "cache",
   "magic",
   "salsa",
   "sound",
   "usage",
   "giant",
   "debug",
   "heady",
   "stage",
   "flail",
   "apple",
   "ninth",
   "dance",
   "unlit",
   "tasty",
   "shirk"
}; // words are from past wordle solutions 

int main()
{
srand(time(NULL)); // seed based on current time
int rng = rand() % 20; // random number from 0 to 19
char *chosenWord;
chosenWord = wordList[rng];

printf("%s\n", chosenWord); // printing the chosen word for testing
printf("%s\n", "Guess a word!");

int guessNumber = 0;
char userGuess2[6];
do {
    scanf("%5s", userGuess);
    strcpy(userGuess2, "*****");
    int yellowChar = 0;
    correctGuess = strcmp(userGuess,chosenWord);
    if (strlen(userGuess) != 5) { // checks if the user input is not a 5 letter word
        printf("Please enter a five letter word.\n");
    }
    else if (correctGuess == 0) { // 0 means that the two strings are the same
        printf("You are correct!\n");
        guessNumber++;
        printf("%i", guessNumber);
    }
    else {
        guessNumber++;
        for (int i = 0; i <= 4; i++) { // green letter implementation
            if (userGuess[i] == chosenWord[i]) {
                userGuess2[i] = toupper(userGuess[i]);
            }
            else if (!yellowChar) {
                for (int j = 0; j < 5; j++) {
                    if (i != j && userGuess[i] == chosenWord[j] && userGuess[i] != userGuess[j]) {
                        userGuess2[i] = tolower(userGuess[i]);
                        yellowChar = 1;
                        break;
                    }
                }
            }
        }
        printf("%s\n", userGuess2);
    }
}
while(guessNumber <= 5 && correctGuess != 0);

return 0;
}