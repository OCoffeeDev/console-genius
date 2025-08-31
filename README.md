# Console Genius

A console-based memory game inspired by the classic "Simon Says".\
The player must memorize and reproduce a sequence of numbers that
becomes progressively longer at each level.

## How It Works

1.  When the game starts, the player selects a difficulty:
    -   **Easy** → slower sequence display\
    -   **Medium** → moderate speed\
    -   **Hard** → fast sequence
2.  The game generates a random sequence of numbers (1--4).\
3.  At each phase, the sequence is shown, and the player must type the
    exact order.\
4.  You have to write the number sequence with spaces between the numbers.
    (EX: 1 2 4 3 2).
6.  If the input is correct, the player advances to the next phase.\
7.  If the input is wrong, the game ends with **"You Lose!"**.


## Compilation

To compile on Windows (using GCC/MinGW):

``` bash
gcc main.c genius.c -o genius.exe
```

Run with:

``` bash
./genius.exe
```

