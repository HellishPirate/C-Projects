# C-Projects
Probably just for my university assignment (wordle and traffic light game).

#### Wordle

There is a list of twenty words, of which one is randomly picked for the game. The user has six attempts to guess the correct word.
An uppercase letter means that the letter is in the right spot, a lowercase character means that it is in the word but not in the right place, and an asterisk means it is not present.

#### Lights Game

This code is designed to work for the Odd Configuration, shown below:
![image](https://github.com/HellishPirate/C-Projects/assets/35464378/db0efc63-c324-4ac1-b7ed-c0da85d8d8b3)

To play the game, a user presses the Green Button, waits for the Yellow LED to blink and presses the Orange Button once to try to raise the barrier. The user has multiple tries until they win or press the Red Button to end the game.
The user who manages to raise the barrier three times wins the game. At this point, all the display’s LEDs will blink in acknowledgement for 3 seconds at a rate of 2 Hz, and then the whole game resets.
