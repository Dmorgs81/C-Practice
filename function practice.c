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

#include <stdio.h>

// Function to define a 2D array
void defineArray(int myArray[5][5]);

int main() {
    int myArray[5][5];  // Declare a 5x5 array

    // Pass the array to the function
    defineArray(myArray);

    // Print the array to verify
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Function definition
void defineArray(int myArray[5][5]) {
    // Populate the array with 1s
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            myArray[i][j] = 1;
        }
    }
}

#include <stdio.h>

int findmin(int a, int b)
{
    if(a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}



int main()
{
    int min = findmin(10,-8);
    printf("%d", min);
}


