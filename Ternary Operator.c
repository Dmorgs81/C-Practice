#include <stdio.h>
#include <stdbool.h> //adding booleans


//Simple thing using the Ternary Operator (If x = 10 it will print Yes else it Prints NO)
/*
int main(void)
{
    int x = 10;
    (x == 10) ? 
    printf("Yes") :
    printf("No");
}
*/

//Using Booleans

/*
int main(void)
{
    bool x = false;
    (x==false) ?
    printf("False") :
    printf("True");
}
*/

//SAME AS

/*int main(void)
{
    bool x = 0;   //same as False
    (x==false) ?
    printf("False") :
    printf("True");
}
*/

int main(void)
{
    int x = 5;
    (x == 5) ? 2 : 4; // can't do x = 4 or x = 2 so you put 2 and 4
    (x == 2) ? 3 : 5; // sets x to 3
    (x == 3) ? 4 : 5; // sets x to 4
    (x == 5) ? 5 : 1; // sets x to 1
// SAME AS 
    int y = 5;
    if(y==5)
    {
        y=2;
    }
    else
    {
        y=4;
    }
    //...
}    
