#include "genius.h"

int main()
{
    Genius v;
    srand(time(NULL));

    // Set difficulty
    introduction(&v);

    // Create de number sequence
    number_sequence(&v);

    // The game itself
    game(&v);

    return 0;
}