#include <unistd.h>
#include <stdio.h>

int main()
{
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d\n", myNum);
    // int i;

    // for (i = 1; i <= 10; i++)
    // {
    //     printf("%d\n", i);
    //     sleep(1);
    // }
}