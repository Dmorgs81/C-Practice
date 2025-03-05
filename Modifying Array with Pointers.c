#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modifyArray(int *arr);

int main() {
    int num = 5;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    modifyArray(arr);
    for(int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}

void modifyArray(int *arr)
{
    for(int i = 0; i < 10; i++)
    {
        *(arr + i) = 1;
    }
}
