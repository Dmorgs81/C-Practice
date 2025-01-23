#include <stdio.h>

int squareNumber(int number)
{
    int square = number * number;
    return square;
}


int main() {
    int number = 50;
    int result = squareNumber(number);
    printf("%d", result);

    return 0;
}

